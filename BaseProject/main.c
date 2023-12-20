#include <stdint.h>
#include <stdio.h>
#include "stdout_USART.h"

#if defined (__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050)
__asm("  .global __ARM_use_no_argv\n");
#endif

int main(){
	stdout_init();
    printf("Hello World!\r\n");
    printf("EXITTHESIM\r\n");
}
