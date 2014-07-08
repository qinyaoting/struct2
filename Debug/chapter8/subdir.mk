################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../chapter8/Main.cpp 

C_SRCS += \
../chapter8/main.c 

OBJS += \
./chapter8/Main.o \
./chapter8/main.o 

C_DEPS += \
./chapter8/main.d 

CPP_DEPS += \
./chapter8/Main.d 


# Each subdirectory must supply rules for building sources it contributes
chapter8/%.o: ../chapter8/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

chapter8/%.o: ../chapter8/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


