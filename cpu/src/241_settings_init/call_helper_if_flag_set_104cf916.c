/* @k10d call_helper_if_flag_set_104cf916 @ 0x104cf916
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 241_settings_init (unit names are model-proposed)
 * purpose:
 *   Calls a helper with three args if a status check passes, then clears a byte at offset
 *   0x24.
 * summary:
 *   First calls invoke_virtual_method_on_allocated_object to get a status; if non-zero,
 *   calls return_constant_one_104cfa16 with the three parameters. If that also returns non-
 *   zero, writes 0 to the byte at param_2+0x24 and returns 1, otherwise returns 0. The
 *   specific subsystem is not identifiable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_if_flag_set_104cf916(uint32_t param_1,int param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  iVar1 = invoke_virtual_method_on_allocated_object(__frv_reg_unset(4), __frv_reg_unset(5), __frv_reg_unset(6));
  if ((iVar1 != 0) && (iVar1 = return_constant_one_104cfa16(param_1,param_2,param_3), iVar1 != 0)) {
    *(uint8_t *)(param_2 + 0x24) = 0;
    uVar2 = 1;
  }
  return uVar2;
}
