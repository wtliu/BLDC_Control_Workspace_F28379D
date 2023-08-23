################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
F2837xD_common/third_party/fatfs/src/%.obj: ../F2837xD_common/third_party/fatfs/src/%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccs1230/ccs/tools/compiler/ti-cgt-c2000_22.6.0.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla1 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu2 --include_path="E:/CCS_CurrentSlope/BLDC_V0" --include_path="E:/CCS_CurrentSlope/TMS320F28379D_V0_Blinky/CLAmath/v4_00_01_00/include" --include_path="E:/CCS_CurrentSlope/BLDC_V0/F2837xD_common/include" --include_path="E:/CCS_CurrentSlope/BLDC_V0/F2837xD_headers/include" --include_path="C:/ti/ccs1230/ccs/tools/compiler/ti-cgt-c2000_22.6.0.LTS/include" --advice:performance=all --define=CPU1 -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=coffabi --preproc_with_compile --preproc_dependency="F2837xD_common/third_party/fatfs/src/$(basename $(<F)).d_raw" --obj_directory="F2837xD_common/third_party/fatfs/src" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


