/* @k10d check_condition_with_virtual_call @ 0x10494db4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Evaluates a boolean condition based on object fields and a virtual method call.
 * summary:
 *   The function checks a byte at offset 0xac of the input object. If zero, it calls
 *   read_byte_at_offset_8 and, if that returns non-zero and another byte at 0xa0 is non-
 *   zero, it performs a virtual call via a pointer chain from offset 0x60. If the byte at
 *   0xac is non-zero, it calls iterate_object_list_and_call_virtual. The result is combined
 *   with the return value of any_item_predicate_true to produce a boolean.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_condition_with_virtual_call(int param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  
  iVar1 = any_item_predicate_true(__frv_reg_unset(4));
  bVar3 = iVar1 != 0;
  if (*(char *)(param_1 + 0xac) == '\0') {
    iVar1 = read_byte_at_offset_8(param_1);
    bVar2 = bVar3;
    if ((iVar1 != 0) && (*(char *)(param_1 + 0xa0) != '\0')) {
      iVar1 = *(int *)(**(int **)(param_1 + 0x60) + 0xc);
      iVar1 = (**(code **)(iVar1 + 0x4c))
                        (**(int **)(param_1 + 0x60) + (int)*(short *)(iVar1 + 0x48));
      bVar2 = true;
      if (iVar1 == 0 && !bVar3) {
        bVar2 = false;
      }
    }
  }
  else {
    iVar1 = iterate_object_list_and_call_virtual(__frv_reg_unset(4));
    bVar2 = true;
    if (iVar1 == 0 && !bVar3) {
      bVar2 = false;
    }
  }
  return bVar2;
}
