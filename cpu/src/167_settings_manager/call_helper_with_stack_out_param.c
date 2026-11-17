/* @k10d call_helper_with_stack_out_param @ 0x10474cce
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls check_and_fetch_value_10476550 with a field from param_1 and a stack out-
 *   parameter, returning the out value.
 * summary:
 *   Reads the 4-byte field at param_1+8 and passes it, along with param_2, to
 *   check_and_fetch_value_10476550. A local stack variable is initialized to 0 and passed
 *   as a third argument, then returned. If the callee returns 0, the local is reset to 0
 *   before returning. The role of check_and_fetch_value_10476550 is unknown, so the
 *   subsystem is not identifiable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_stack_out_param(int param_1,uint32_t param_2)

{
  int iVar1;
  uintptr_t sp;
  uint32_t uStack_c;
  
  uStack_c = 0;
  iVar1 = check_and_fetch_value_10476550(*(uint32_t *)(param_1 + 8),param_2,&uStack_c);
  if (iVar1 == 0) {
    uStack_c = 0;
  }
  return uStack_c;
}
