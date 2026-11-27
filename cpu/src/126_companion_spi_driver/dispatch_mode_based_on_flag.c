/* @k10d dispatch_mode_based_on_flag @ 0x1044938a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Sets a boolean flag at offset 0x160 based on param_3, then branches to one of two
 *   handlers based on that flag.
 * summary:
 *   The function writes a boolean to param_1+0x160 derived from the lower two bits of
 *   param_3. If param_1+0x3c4 is 1, it calls sdhc_send_cmd_0xd1a. It then checks the flag
 *   at 0x160: if false, it copies a value from 0x114 to 0x11c and calls
 *   sdhc_command_transfer_with_timeout; if true, it copies from 0x118 to 0x11c and calls
 *   sdhc_wait_error_interrupt. The return value comes from the final callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int dispatch_mode_based_on_flag(void *param_1,uint32_t param_2,uint param_3)

{
  int iVar1;
  
  *(bool *)((int)param_1 + 0x160) = (param_3 & 3) == 0;
  if (*(int *)((int)param_1 + 0x3c4) == 1) {
    sdhc_send_cmd_0xd1a(param_1,*(uint16_t *)((int)param_1 + 0xe0));
  }
  if (*(char *)((int)param_1 + 0x160) == '\0') {
    *(uint32_t *)((int)param_1 + 0x11c) = *(uint32_t *)((int)param_1 + 0x114);
    iVar1 = sdhc_command_transfer_with_timeout((void *)(uint32_t)param_1,(uint32_t)param_2,(uint32_t)param_3);
  }
  else {
    *(uint32_t *)((int)param_1 + 0x11c) = *(uint32_t *)((int)param_1 + 0x118);
    iVar1 = sdhc_wait_error_interrupt(param_1,param_2,param_3);
  }
  return iVar1;
}
