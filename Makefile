###############################################################################
#
#  	    File        : Makefile
#
#       Abstract    : Example Makefile for a C Project
#
#       Environment : Atollic TrueSTUDIO(R)
#
###############################################################################

SHELL=cmd

# System configuration
CC = arm-atollic-eabi-gcc
RM=rm -rf

# Assembler, Compiler and Linker flags and linker script settings
LINKER_FLAGS=-lm -mthumb -mcpu=cortex-m0  -Wl,--gc-sections -T$(LINK_SCRIPT) -static  -Wl,--start-group -lc -lm -Wl,--end-group -Wl,-cref "-Wl,-Map=$(BIN_DIR)/Zapper_Start.map" -Wl,--defsym=malloc_getpagesize_P=0x1000
LINK_SCRIPT="stm32_flash.ld"
ASSEMBLER_FLAGS=-c -g -O0 -mcpu=cortex-m0  -mthumb  -x assembler-with-cpp  -Isrc -ILibraries\CMSIS\Include -ILibraries\CMSIS\Device\ST\STM32F0xx\Include -ILibraries\STM32F0xx_StdPeriph_Driver\inc -IUtilities\STM32F0-Discovery
COMPILER_FLAGS=-c -g -mcpu=cortex-m0  -O0 -Wall -ffunction-sections -fdata-sections -mthumb -D"USE_STM32F0_DISCOVERY" -D"HSI_VALUE=8000000" -D"STM32F0XX" -D"USE_STDPERIPH_DRIVER"   -Isrc -ILibraries\CMSIS\Include -ILibraries\CMSIS\Device\ST\STM32F0xx\Include -ILibraries\STM32F0xx_StdPeriph_Driver\inc -IUtilities\STM32F0-Discovery -Isrc\graphic

# Define output directory
OBJECT_DIR = Debug
BIN_DIR = $(OBJECT_DIR)

# Define sources and objects
#SRC := $(wildcard */*/*/*/*/*/*/*.c) \
#	$(wildcard */*/*/*/*/*/*.c) \
#	$(wildcard */*/*/*/*/*.c) \
#	$(wildcard */*/*/*/*.c) \
#	$(wildcard */*/*/*.c) \
#	$(wildcard */*/*.c) \
#	$(wildcard */*.c)
SRC = src/main.c \
	src/system_stm32f0xx.c \
	src/stm32f0xx_it.c \
	src/tiny_printf.c \
	Utilities/STM32F0-Discovery/stm32f0_discovery.c \
	Libraries/STM32F0xx_StdPeriph_Driver/src/stm32f0xx_gpio.c \
	Libraries/STM32F0xx_StdPeriph_Driver/src/stm32f0xx_rcc.c \
	Libraries/STM32F0xx_StdPeriph_Driver/src/stm32f0xx_usart.c \
	src/graphic/ST7565R.c \

SRCSASM := 	$(wildcard */*/*/*/*/*/*/*/*.s) \
	$(wildcard */*/*/*/*/*/*/*.s) \
	$(wildcard */*/*/*/*/*/*.s) \
	$(wildcard */*/*/*/*/*.s) \
	$(wildcard */*/*/*/*.s) \
	$(wildcard */*/*/*.s) \
	$(wildcard */*/*.s) \
	$(wildcard */*.s)
OBJS := $(SRC:%.c=$(OBJECT_DIR)/%.o) $(SRCSASM:%.s=$(OBJECT_DIR)/%.o)
OBJS := $(OBJS:%.S=$(OBJECT_DIR)/%.o)  

###############
# Build project
# Major targets
###############
all: buildelf

buildelf: $(OBJS) 
	$(CC) -o "$(BIN_DIR)/Zapper_Start.elf" $(OBJS) $(LINKER_FLAGS)

clean:
	$(RM) $(OBJS) "$(BIN_DIR)/Zapper_Start.elf" "$(BIN_DIR)/Zapper_Start.map"


##################
# Specific targets
##################
$(OBJECT_DIR)/src/main.o: src/main.c
	@mkdir $(subst /,\,$(dir $@)) 2> NUL || echo off
	$(CC) $(COMPILER_FLAGS) src/main.c -o $(OBJECT_DIR)/src/main.o 


##################
# Implicit targets
##################
$(OBJECT_DIR)/%.o: %.c
	@mkdir $(subst /,\,$(dir $@)) 2> NUL || echo off
	$(CC) $(COMPILER_FLAGS) $< -o $@

$(OBJECT_DIR)/%.o: %.s
	@mkdir $(subst /,\,$(dir $@)) 2> NUL || echo off
	$(CC) $(ASSEMBLER_FLAGS) $< -o $@
	
$(OBJECT_DIR)/%.o: %.S
	@mkdir $(subst /,\,$(dir $@)) 2> NUL || echo off
	$(CC) $(ASSEMBLER_FLAGS) $< -o $@
