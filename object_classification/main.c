#include <stdint.h>
#include <stdio.h>
#include <crt_config.h>
#include <tvm_runtime.h>
#include <tvmgen_cls.h>

#include "labels.h"

#include "inputs.h"
#include "outputs.h"
#include "stdout_USART.h"

#if defined (__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050)
__asm("  .global __ARM_use_no_argv\n");
#endif

int main(){
  stdout_init();
#if USE_MOBILENETV3 || USE_PP_LCNET
	struct tvmgen_cls_inputs cls_inputs = {
		.x = input,
	};
#endif
	struct tvmgen_cls_outputs cls_outputs = {
		.output = output,
	};
		
	tvmgen_cls_run(&cls_inputs, &cls_outputs);
	int index = 0;
	for(int i = 0; i < output_len;i++){
		if(output[i] > output[index]){
			index = i;
		}
	}
  printf("Index is %d; Confidence is %f; Label is %s\n", index, output[index], labels[index]);
	printf("EXITTHESIM\r\n");
}
