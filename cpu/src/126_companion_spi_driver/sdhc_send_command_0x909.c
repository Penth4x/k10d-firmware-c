/* @k10d sdhc_send_command_0x909 @ 0x104481a0
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Issues SD command 0x909 via sdhc_send_command and, on success, invokes a follow-up
 *   handler.
 * summary:
 *   Calls sdhc_send_command(param_1, 0x909, param_2<<0x10, 0). If the command succeeds
 *   (non-zero return), it selects a handler: return_r4_passthrough_1044bb2e when
 *   *(param_1+0x3c4)==0, otherwise a function pointer at 0x104470cc applied to
 *   param_1+0x1a4, and passes the result to copy_indirect_byte_table. Returns 1 on success,
 *   0 otherwise. The specific SD command 0x909 and the role of copy_indirect_byte_table are
 *   not identified in the brief.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t sdhc_send_command_0x909(void *param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  uint32_t uVar3;
  
  iVar1 = sdhc_send_command(param_1,0x909,param_2 << 0x10,0);
  uVar3 = 0;
  if (iVar1 != 0) {
    if (*(int *)((int)param_1 + 0x3c4) == 0) {
      pvVar2 = (void *)return_r4_passthrough_1044bb2e();
    }
    else {
      pvVar2 = (void *)(*(code *)0x104470cc/*ROM*/)((int)param_1 + 0x1a4);
    }
    copy_indirect_byte_table(param_1,pvVar2);
    uVar3 = 1;
  }
  return uVar3;
}
