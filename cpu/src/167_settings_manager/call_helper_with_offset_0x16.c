/* @k10d call_helper_with_offset_0x16 @ 0x10476876
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls process_object_via_virtual_call with a field at offset 8, param_2, and
 *   param_1+0x16, returning 0 on success.
 * summary:
 *   The function extracts a 32-bit value from param_1+8 and passes it, along with param_2
 *   and the address param_1+0x16, to process_object_via_virtual_call. If the callee returns
 *   0, this function returns 0; otherwise it returns the original offset value
 *   (param_1+0x16). The specific role of process_object_via_virtual_call is unknown, so the
 *   subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_helper_with_offset_0x16(int param_1,uint32_t param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x16;
  iVar1 = process_object_via_virtual_call(*(uint32_t *)(param_1 + 8),param_2,(void *)iVar2);
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  return iVar2;
}
