/* @k10d check_and_clear_flag_on_result @ 0x104ea5bc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Calls a helper with a field from param_1, clears another field if the result is 2 or 4,
 *   and returns the result.
 * summary:
 *   The function reads the integer at offset 0x8 of the object pointed to by param_1 and
 *   passes it to invoke_virtual_slot_4_104b27c8. If the returned value is 2 or 4, it writes
 *   0 to the field at offset 0xc of the object. The return value from the callee is passed
 *   back to the caller. The specific role of the fields and the callee is not determinable
 *   from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int check_and_clear_flag_on_result(int param_1)

{
  int iVar1;
  
  iVar1 = invoke_virtual_slot_4_104b27c8(*(int *)(param_1 + 8));
  if ((iVar1 == 2) || (iVar1 == 4)) {
    *(uint32_t *)(param_1 + 0xc) = 0;
  }
  return iVar1;
}
