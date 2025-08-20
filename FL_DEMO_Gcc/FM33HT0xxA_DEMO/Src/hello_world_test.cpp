/* ===========================================  Includes  =========================================== */

/* include model C array and input data from sensor side */
#include "hello_world_int8_model_data.h"

/* include tensorflow header files */
#include "tensorflow/lite/micro/micro_interpreter.h"
#include "tensorflow/lite/micro/micro_mutable_op_resolver.h"
#include "tensorflow/lite/schema/schema_generated.h"

/* ============================================  Define  ============================================ */

/* ===========================================  Typedef  ============================================ */

/* ==========================================  Variables  =========================================== */
namespace {


constexpr int kTensorArenaSize = 4 * 1024;
//static uint8_t tensor_arena[kTensorArenaSize];
static uint8_t tensor_arena[kTensorArenaSize];
using HelloWorldOpResolver = tflite::MicroMutableOpResolver<1>;
tflite::MicroInterpreter* interpreter = nullptr;

/*The operators in trained model must be registered here, or cause Hardfault*/
TfLiteStatus RegisterOps(tflite::MicroMutableOpResolver<3> &resolver)
{
  resolver.AddFullyConnected();
  resolver.AddRelu();
  resolver.AddLogistic();
  return kTfLiteOk;
}
// TfLiteStatus RegisterOps(HelloWorldOpResolver& op_resolver) {
//   TF_LITE_ENSURE_STATUS(op_resolver.AddFullyConnected());
//   return kTfLiteOk;
// }

}  // namespace
/* ====================================  Functions declaration  ===================================== */

/* ======================================  Functions define  ======================================== */

#ifdef __cplusplus
extern "C" {
#endif  /* __cplusplus */

/*Initialization and Setup of model, likely for all TFLM trained models */
int CapClassificationSetup(void)
{
    /*Establish Op resolver*/
    static tflite::MicroMutableOpResolver<3> op_resolver;
    if (RegisterOps(op_resolver) != kTfLiteOk) {
        return -2;
    }
    // HelloWorldOpResolver op_resolver;
    // TF_LITE_ENSURE_STATUS(RegisterOps(op_resolver));
    // if (RegisterOps(op_resolver) != kTfLiteOk) {
    //     return -2;
    // }

    // Arena size just a round number. The exact arena usage can be determined
    // using the RecordingMicroInterpreter.
    // constexpr int kTensorArenaSize = 4 * 1024;
    // uint8_t tensor_arena[kTensorArenaSize];

    // tflite::MicroInterpreter interpreter(model, op_resolver, tensor_arena,
    //                                    kTensorArenaSize);
    /*Create interpreter, use abovementioned model, op_resolver, tensor*/
      /*load model from trained model_data array*/
    const tflite::Model* model =
      ::tflite::GetModel(model_dynamit_quant_uint8_tflite);
        // TFLITE_CHECK_EQ(model->version(), TFLITE_SCHEMA_VERSION);
    if (model->version() != TFLITE_SCHEMA_VERSION) {
        /*Version check*/
        return -1;
    }

    static tflite::MicroInterpreter static_interpreter(model, op_resolver, tensor_arena, kTensorArenaSize);
    interpreter = &static_interpreter;

    /*Allocate tensors for interpreter, if fail, need to check model size, arena size and operators*/
    if (interpreter->AllocateTensors() != kTfLiteOk) {
        return -3;
    }
    
    // TF_LITE_ENSURE_STATUS(interpreter.AllocateTensors());

    // /*Establish Op resolver*/
    // static tflite::MicroMutableOpResolver<6> op_resolver;
    // if (RegisterOps(op_resolver) != kTfLiteOk) {
    //     return -2;
    // }
    return 0;
}
float y_pred = 0;
const float normalizaion_mean[3] = {10683.7421875, 10657.2158203125, 892.2108154296875};
const float normalizaion_vari[3] = {0.0037, 0.004325, 0.01849};

/*Periodic inference of the trained model*/
int CapClassificationPerformInference(void)
{
  /*Null pointer check*/
  if (interpreter == nullptr || interpreter->input(0) == nullptr || interpreter->input(0)->data.f == nullptr)
  {
    return -1;
  }

  TfLiteTensor* input = interpreter->input(0);
  TfLiteTensor* output = interpreter->output(0);
  constexpr int kNumTestValues = 3;
  //float golden_inputs_float[kNumTestValues] = {10358.0,	10373.0, 843.0};  // 0
  float golden_inputs_float[kNumTestValues] = {10952.0, 10891.0,	966.0 };  //1

  int8_t golden_inputs_int8[kNumTestValues] = {0, 0, 0};

  for (int i = 0; i < kNumTestValues; ++i) {
    golden_inputs_float[i] = (golden_inputs_float[i] - normalizaion_mean[i]) * normalizaion_vari[i];
    golden_inputs_int8[i] = golden_inputs_float[i] / input->params.scale + input->params.zero_point;
    input->data.int8[i] = golden_inputs_int8[i];
  }

  // input->data.int8[0] = golden_inputs_int8[i];
  /*Invoke() interface to execute inference by TFLM and inputed data, execution time?*/
  if (interpreter->Invoke() != kTfLiteOk) {
      return -2;
  }

  y_pred = (output->data.int8[0] - output->params.zero_point) * output->params.scale;

  // TF_LITE_ENSURE_STATUS(interpreter.Invoke());
  // float y_pred = (output->data.int8[0] - output_zero_point) * output_scale;
  // TFLITE_CHECK_LE(abs(sin(golden_inputs_float[i]) - y_pred), epsilon);
  return 0;
}

#ifdef __cplusplus
}  /* extern "C" */
#endif  /* __cplusplus */


/* =============================================  EOF  ============================================== */

