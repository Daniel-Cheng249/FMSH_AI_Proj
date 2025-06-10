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
// int8_t y_pred[10] = {0};
float y_pred[10] = {0.0f};
float z_pred = 0.0f;

constexpr int kTensorArenaSize = 4 * 1024;
static uint8_t tensor_arena[kTensorArenaSize];

using HelloWorldOpResolver = tflite::MicroMutableOpResolver<1>;
tflite::MicroInterpreter* interpreter = nullptr;

/*The operators in trained model must be registered here, or cause Hardfault*/
TfLiteStatus RegisterOps(tflite::MicroMutableOpResolver<6> &resolver)
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
    /*load model from trained model_data array*/
    const tflite::Model* model =
      ::tflite::GetModel(g_hello_world_int8_model_data);
    // TFLITE_CHECK_EQ(model->version(), TFLITE_SCHEMA_VERSION);
    if (model->version() != TFLITE_SCHEMA_VERSION) {
        /*Version check*/
        return -1;
    }

    /*Establish Op resolver*/
    static tflite::MicroMutableOpResolver<6> op_resolver;
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

/*Periodic inference of the trained model*/
int CapClassificationPerformInference(void)
{
  /*Null pointer check*/
  if (interpreter == nullptr || interpreter->input(0) == nullptr || interpreter->input(0)->data.f == nullptr)
  {
    return -1;
  }

  TfLiteTensor* input = interpreter->input(0);
  constexpr int kNumTestValues = 4;
  float golden_inputs_float[kNumTestValues] = {0.77, 1.57, 2.3, 3.14};
  int8_t golden_inputs_int8[kNumTestValues] = {0, 127, 30, 60};

  for (int i = 0; i < kNumTestValues; ++i) {
    input->data.f[0] = golden_inputs_float[i];
    // input->data.int8[0] = golden_inputs_int8[i];
    /*Invoke() interface to execute inference by TFLM and inputed data, execution time?*/
    if (interpreter->Invoke() != kTfLiteOk) {
        return -2;
    }

    /*Get output from interpreter output*/
    // float* output = interpreter->output(0)->data.f;
    // y_pred[i] = interpreter->output(0)->data.int8[i];
    y_pred[i] = interpreter->output(0)->data.f[0];

    // TF_LITE_ENSURE_STATUS(interpreter.Invoke());
    // float y_pred = (output->data.int8[0] - output_zero_point) * output_scale;
    // TFLITE_CHECK_LE(abs(sin(golden_inputs_float[i]) - y_pred), epsilon);
  }

  for (int i = 0; i < 300; ++i)
  {
    input->data.f[0] = i * 0.03f;
    if (interpreter->Invoke() != kTfLiteOk) {
        return -2;
    }
    z_pred = interpreter->output(0)->data.f[0];

  }

  /*Convert input data into buffer and execute normalization*/
  // float* input_buffer = interpreter->input(0)->data.f;
  // input_buffer[0] = 0.0;
  // input_buffer[1] = 0.5;
  // input_buffer[2] = 1.1;
  // input_buffer[3] = 2.0;
  // input_buffer[4] = 3.0;

  

  // TfLiteTensor* input = interpreter->input(0);
  // constexpr int kNumTestValues = 5;
  // float golden_inputs[kNumTestValues] = {
  //   {0.0},
  //   {0.5},
  //   {1.1},
  //   {2.0},
  //   {3.0},
  // };
  // for (int i = 0; i < kNumTestValues; ++i)
  // {
  //   input->data.f[i] = golden_inputs[i];
  //   TF_LITE_ENSURE_STATUS(interpreter->Invoke());
  //   y_pred[i] = interpreter->output(0)->data.f[0];
  // }


  return 0;
}

#ifdef __cplusplus
}  /* extern "C" */
#endif  /* __cplusplus */


/* =============================================  EOF  ============================================== */

