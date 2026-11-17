/* @k10d sdhc_send_command_209 @ 0x10448042
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Sends SDHC command 0x209 and, on success, invokes a follow-up handler with a context
 *   pointer.
 * summary:
 *   Calls sdhc_send_command with command index 0x209 and zero arguments. If the command
 *   succeeds, it selects a context pointer based on the value at param_1+0x3c4 (calling
 *   return_r4_passthrough_1044ba22 if zero, otherwise a function at 0x10446fb6 with
 *   param_1+0x194) and passes it to copy_indirect_byte_table. Returns 1 on success, 0 on
 *   failure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t sdhc_send_command_209(void *param_1)

{
  int iVar1;
  void *pvVar2;
  uint32_t uVar3;
  
  iVar1 = sdhc_send_command(param_1,0x209,0,0);
  uVar3 = 0;
  if (iVar1 != 0) {
    if (*(int *)((int)param_1 + 0x3c4) == 0) {
      pvVar2 = (void *)return_r4_passthrough_1044ba22();
    }
    else {
      pvVar2 = (void *)(*(code *)0x10446fb6/*ROM*/)((int)param_1 + 0x194);
    }
    copy_indirect_byte_table(param_1,pvVar2);
    uVar3 = 1;
  }
  return uVar3;
}
