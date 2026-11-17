/* @k10d call_inner_with_lock_pair @ 0x1048110e
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 175_sd_file_settings (unit names are model-proposed)
 * purpose:
 *   Calls an inner function while bracketing it with two helper calls on a field at offset
 *   0xc.
 * summary:
 *   The function calls call_kernel_with_short_id on the pointer (param_1 + 0xc), then
 *   invokes dispatch_param_if_valid with param_1 through param_5 (passing param_5 via a
 *   stack slot), and finally calls check_kernel_call_success_10459d88 on the same (param_1
 *   + 0xc) pointer. It returns the value produced by dispatch_param_if_valid. The paired
 *   calls on the 0xc field resemble a lock/unlock or enter/exit pair around the inner
 *   operation, but the specific role of those helpers is not established.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t
call_inner_with_lock_pair(int param_1,void *param_2,char *param_3,uint32_t param_4,uint32_t param_5)

{
  uint32_t uVar1;
  uintptr_t sp;
  uint32_t *puVar2;
  uint8_t auStack_20 [4];
  
  puVar2 = (uint32_t *)auStack_20;
  call_kernel_with_short_id((uint32_t *)(param_1 + 0xc));
  *puVar2 = param_5;
  uVar1 = dispatch_param_if_valid(param_1,param_2,param_3,param_4,(uint32_t *)*puVar2);
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0xc));
  return uVar1;
}
