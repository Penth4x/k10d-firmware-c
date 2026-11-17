/* @k10d dispatch_two_phase_write @ 0x10449340
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Performs a two-step write operation by calling a helper for the first part and a second
 *   helper for the remainder if the first succeeds.
 * summary:
 *   The function takes a base pointer and three integer parameters. It calculates an offset
 *   (param_2 + param_3 - 1) and a scaled value ((param_3 - 1) * 0x200 + param_4). If
 *   param_3 is 2, it calls dispatch_mode_based_on_flag with the original parameters;
 *   otherwise, it calls dispatch_mode_state_update_104494dc with param_3 decremented. In
 *   both cases, if the first call returns non-zero, it calls dispatch_mode_based_on_flag
 *   again with the calculated offset and scaled value. The return value is the result of
 *   the second call (or 0 if not reached).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_two_phase_write(void *param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  uint32_t uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = 0;
  iVar4 = param_2 + -1 + param_3;
  uVar3 = (param_3 - 1U) * 0x200 + param_4;
  if (param_3 == 2) {
    iVar1 = dispatch_mode_based_on_flag(param_1,param_2,param_4);
    if (iVar1 != 0) {
      uVar2 = dispatch_mode_based_on_flag(param_1,iVar4,uVar3);
    }
  }
  else {
    iVar1 = dispatch_mode_state_update_104494dc(param_1,param_2,param_3 - 1U,param_4);
    if (iVar1 != 0) {
      uVar2 = dispatch_mode_based_on_flag(param_1,iVar4,uVar3);
    }
  }
  return uVar2;
}
