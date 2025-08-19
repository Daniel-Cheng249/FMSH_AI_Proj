# Makefile for ARM Cortex-M0 Project with C and C++ Sources
# ---------------------------------------------------------

# Toolchain Configuration
# ----------------------
CROSS_COMPILE := arm-none-eabi-
CC      := $(CROSS_COMPILE)gcc
CXX     := $(CROSS_COMPILE)g++
AS      := $(CROSS_COMPILE)gcc -x assembler-with-cpp
# AS      := $(CROSS_COMPILE)gcc 
OBJCOPY := $(CROSS_COMPILE)objcopy
OBJDUMP := $(CROSS_COMPILE)objdump
SIZE    := $(CROSS_COMPILE)size
GDB     := $(CROSS_COMPILE)gdb

# Project Configuration
# --------------------
TARGET     := firmware_fmsh_cap
BUILD_DIR  := build
BIN_DIR    := bin

# Hardware Configuration
# ---------------------
CPU        := -mcpu=cortex-m0
# FPU        := -mfpu=fpv4-sp-d16
FPU        :=
FLOAT_ABI  := -mfloat-abi=soft
MCU        := $(CPU) -mthumb -mlittle-endian

# Compilation Flags
# -----------------
# Common flags for both C and C++
COMMON_FLAGS := $(MCU) \
               -ffunction-sections \
               -fdata-sections \
               -Wl,--gc-sections \
               -g3 \
               -DCOMPONENT_TFLM \
               -DTF_LITE_STATIC_MEMORY \
			#    -fmessage-length=0 \
			#    -fsigned-char \
			#    -flto \
            #    -Wall \
            #    -Wextra \
            #    -Wpedantic \
            #    -Wconversion \
            #    -fstack-usage \

# C specific flags
CFLAGS := $(COMMON_FLAGS) \
          -O0 \
          -std=gnu11 \
          -nostdlib \
          -ffreestanding \
          -fno-builtin

# C++ specific flags
CXXFLAGS := $(COMMON_FLAGS) \
            -std=gnu++17 \
            -fno-exceptions \
            -fno-rtti \
			-Wno-register \
            -O0

# Assembler flags
ASFLAGS := $(MCU) $(COMMON_FLAGS) -O0

# Linker Configuration
# -------------------
LDSCRIPT   := Drivers/CMSIS/Device/FM/FM33xx/Source/Templates/gcc/linker/fm33ht04xa_flash.ld
LIBRARIES  := -lm -lc -lnosys
LDFLAGS    := $(MCU) \
              $(COMMON_FLAGS) \
              -Wl,-Map=$(BUILD_DIR)/$(TARGET).map \
              -T$(LDSCRIPT) \
			#   -Xlinker \
            #   -Wl,--gc-sections \
            #   --specs=nano.specs \
            #   -u _printf_float \
            #   -u _scanf_float
LDFLAGS += --specs=nano.specs --specs=nosys.specs
LDFLAGS += -Wl,--gc-sections


# 自动检测 Inc/ 下的合法 include 子目录
INC_DIRS := $(foreach d,$(wildcard Inc/*/),$(if $(wildcard $d*.h),$d))
INCLUDES := $(addprefix -I,$(INC_DIRS))

# 手动添加 CMSIS 和其他依赖路径
INCLUDES += \
    -IDrivers/CMSIS/Include \
    -IDrivers/CMSIS/Device/FM/FM33xx/Include \
    -IDrivers/FM33HT0xxA_FL_Driver/Inc \
    -ITSI/Users \
    -ITSI/Library \
    -ITSI/Library/Devices \
    -ITSI/Library/Plugins \
    -IMF-config/Inc \
    -ICOMPONENT_TFLM/include \
    -ICOMPONENT_TFLM/include/tensorflow/lite/micro/tools/make/downloads/flatbuffers/include \
    -ICOMPONENT_TFLM/include/tensorflow/lite/micro/tools/make/downloads/gemmlowp

# # INC_DIRS := $(wildcard Inc/*/)
# INC_DIRS := $(filter-out %~,$(wildcard Inc/*/))

# INCLUDES := $(addprefix -I,$(INC_DIRS))

# INCLUDES += -IDrivers/CMSIS/Include \
#             -IDrivers/CMSIS/Device/FM/FM33xx/Include \
# 			-IDrivers/FM33HT0xxA_FL_Driver/Inc \
#             -IMF-config/Inc \
#             -ICOMPONENT_TFLM/include \
#             -ICOMPONENT_TFLM/include/tensorflow/lite/micro/tools/make/downloads/flatbuffers/include \
#             -ICOMPONENT_TFLM/include/tensorflow/lite/micro/tools/make/downloads/gemmlowp \



# Source Files
# -----------
C_SOURCES   := $(wildcard User/*.c) \
               $(wildcard Drivers/CMSIS/Device/FM/FM33xx/Source/*.c) \
               $(wildcard Drivers/FM33HT0xxA_FL_Driver/Src/*.c) \
			   $(wildcard MF-config/Src/*.c) \
			   $(wildcard Src/*.c) \
 			   $(wildcard TSI/Users/*.c) \
 			   $(wildcard TSI/Library/*.c) \
 			   $(wildcard TSI/Library/Devices/*.c) \
 			   $(wildcard TSI/Library/Plugins/*.c)              

CXX_SOURCES := $(wildcard Src/*.cpp) \
            #    $(wildcard lib/src/*.cpp) \
            #    $(wildcard drivers/src/*.cpp)

# ASM_SOURCES := $(wildcard Drivers/CMSIS/Device/FM/FM33xx/Source/Templates/gcc/*.s)
ASM_SOURCES := Drivers/CMSIS/Device/FM/FM33xx/Source/Templates/gcc/startup_fm33ht0xxa.S

# Object Files
# -----------
OBJECTS := $(addprefix $(BUILD_DIR)/,$(notdir $(C_SOURCES:.c=.o))) \
           $(addprefix $(BUILD_DIR)/,$(notdir $(CXX_SOURCES:.cpp=.o))) \
           $(addprefix $(BUILD_DIR)/,$(notdir $(ASM_SOURCES:.S=.o)))

# VPATH for source files
vpath %.c   $(sort $(dir $(C_SOURCES)))
vpath %.cpp $(sort $(dir $(CXX_SOURCES)))
vpath %.S   $(sort $(dir $(ASM_SOURCES)))

# Build Targets
# ------------
all: $(BIN_DIR)/$(TARGET).elf $(BIN_DIR)/$(TARGET).hex $(BIN_DIR)/$(TARGET).bin
	@echo "Build complete"
	$(SIZE) $(BIN_DIR)/$(TARGET).elf

$(BUILD_DIR)/%.o: %.c | $(BUILD_DIR)
	@echo "Compiling C: $<"
	$(CC) -c $(CFLAGS) $(INCLUDES) -MMD -MP -MF"$(@:%.o=%.d)" $< -o $@

$(BUILD_DIR)/%.o: %.cpp | $(BUILD_DIR)
	@echo "Compiling C++: $<"
	$(CXX) -c $(CXXFLAGS) $(INCLUDES) -MMD -MP -MF"$(@:%.o=%.d)" $< -o $@

# $(BUILD_DIR)/%.o: %.s | $(BUILD_DIR)
# 	@echo "Assembling: $<"
# 	$(AS) -c $(ASFLAGS) -MMD -MP -MF"$(@:%.o=%.d)" $< -o $@

#Replace with .S assembly file build rule
$(BUILD_DIR)/%.o: %.S | $(BUILD_DIR)
	@echo "Assembling (with CPP): $<"
	$(AS) -c $(ASFLAGS) -MMD -MP -MF"$(@:%.o=%.d)" $< -o $@

$(BIN_DIR)/$(TARGET).elf: $(OBJECTS) | $(BIN_DIR)
	@echo "Linking: $@"
	$(CXX) $(LDFLAGS) $(OBJECTS) -Wl,--start-group COMPONENT_TFLM/COMPONENT_CM4P/COMPONENT_SOFTFP/TOOLCHAIN_GCC_ARM/libtensorflow-microlite.a -Wl,--end-group -o $@

$(BIN_DIR)/%.hex: $(BIN_DIR)/%.elf | $(BIN_DIR)
	@echo "Generating HEX: $@"
	$(OBJCOPY) -O ihex $< $@

$(BIN_DIR)/%.bin: $(BIN_DIR)/%.elf | $(BIN_DIR)
	@echo "Generating BIN: $@"
	$(OBJCOPY) -O binary -S $< $@

$(BUILD_DIR):
	@mkdir -p $@

$(BIN_DIR):
	@mkdir -p $@

# Clean Target
# -----------
clean:
	@echo "Cleaning build files"
	rm -rf $(BUILD_DIR) $(BIN_DIR)
flash:
    

print:
	$(info 123)
	$(info $(CXX_SOURCES))

# Include Dependency Files
# -----------------------
DEPS := $(OBJECTS:.o=.d)
-include $(DEPS)

.PHONY: all clean flash debug print