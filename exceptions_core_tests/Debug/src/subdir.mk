################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/exceptions_core_tests.c \
../src/exceptions_core_tests_functions.c \
../src/stdafx.c 

OBJS += \
./src/exceptions_core_tests.o \
./src/exceptions_core_tests_functions.o \
./src/stdafx.o 

C_DEPS += \
./src/exceptions_core_tests.d \
./src/exceptions_core_tests_functions.d \
./src/stdafx.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -I"/home/bhart/git/exceptions_core/exceptions_core" -I"/home/bhart/git/common_core/common_core" -I"/home/bhart/git/api_core/api_core" -I"/home/bhart/git/exceptions_core/exceptions_core_tests/include" -O0 -g3 -Wall -c -fmessage-length=0 -fPIC -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


