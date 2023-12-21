#include <stdint.h>
#include <stdio.h>
#include <crt_config.h>
#include <tvm_runtime.h>
#include <tvmgen_cls.h>

#include "inputs.h"
#include "outputs.h"
#include "stdout_USART.h"

#if defined (__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050)
__asm("  .global __ARM_use_no_argv\n");
#endif

int main(){
	stdout_init();
	printf("Hello World!\r\n");
	struct tvmgen_cls_inputs cls_inputs = {
			.x = input,
	};
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
  printf("%d,%f\n", index, output[index]);
	printf("EXITTHESIM\r\n");
}
