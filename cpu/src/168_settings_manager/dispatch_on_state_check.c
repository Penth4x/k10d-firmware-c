/* @k10d dispatch_on_state_check @ 0x1047d652
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks a state value via a helper and branches to one of two handlers based on the
 *   result.
 * summary:
 *   The function calls read_virtual_property_field with the value at offset 0x14 of param_1
 *   and argument 1. If the result is 2, it calls read_virtual_property_field again with
 *   argument 5. If that second call does not return 1, it invokes read_field_at_offset_0xc
 *   with param_1; otherwise, it invokes get_next_node_pointer with param_1 and param_2. The
 *   return value is passed through from the selected handler.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int dispatch_on_state_check(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = read_virtual_property_field((void *)(*(uint32_t *)(param_1 + 0x14)),1);
  if ((iVar1 == 2) && (iVar1 = read_virtual_property_field((void *)(*(uint32_t *)(param_1 + 0x14)),5), iVar1 != 1)) {
    iVar1 = read_field_at_offset_0xc((void *)param_1);
  }
  else {
    iVar1 = get_next_node_pointer((void *)param_1,param_2);
  }
  return iVar1;
}
