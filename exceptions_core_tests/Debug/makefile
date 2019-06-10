################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: tests

dependents:
	-cd /home/bhart/git/api_core/api_core/Debug && $(MAKE) clean all
	-cd /home/bhart/git/common_core/common_core/Debug && $(MAKE) clean all
	-cd /home/bhart/git/exceptions_core/exceptions_core/Debug && $(MAKE) clean all

# Tool invocations
tests: $(OBJS) $(USER_OBJS) /home/bhart/git/api_core/api_core/Debug/libapi_core.so /home/bhart/git/common_core/common_core/Debug/libcommon_core.so /home/bhart/git/exceptions_core/exceptions_core/Debug/libexceptions_core.so
	@echo 'Building target: $@'
	@echo 'Invoking: GCC C Linker'
	gcc -L"/home/bhart/git/exceptions_core/exceptions_core/Debug" -L"/home/bhart/git/common_core/common_core/Debug" -L"/home/bhart/git/api_core/api_core/Debug" -L/home/bhart/lib -o "tests" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXECUTABLES)$(OBJS)$(C_DEPS) tests
	-@echo ' '

.PHONY: all clean dependents
/home/bhart/git/api_core/api_core/Debug/libapi_core.so:
/home/bhart/git/common_core/common_core/Debug/libcommon_core.so:
/home/bhart/git/exceptions_core/exceptions_core/Debug/libexceptions_core.so:

-include ../makefile.targets
