################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../chapter19/PayrollDatabase.cpp 

OBJS += \
./chapter19/PayrollDatabase.o 

CPP_DEPS += \
./chapter19/PayrollDatabase.d 


# Each subdirectory must supply rules for building sources it contributes
chapter19/%.o: ../chapter19/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


