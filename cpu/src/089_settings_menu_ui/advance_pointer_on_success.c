/* @k10d advance_pointer_on_success @ 0x103fdc8c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 089_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Reads the byte at the dereferenced pointer, advances the pointer on success, or resets
 *   it to a saved value on failure.
 * summary:
 *   The function dereferences param_1 to get a pointer, reads the first byte from that
 *   location, and calls check_counter_at_limit. If check_counter_at_limit returns 0, the
 *   pointer is incremented by 1; otherwise, it is reset to the value stored at param_1[2].
 *   The original byte value is returned. The specific role of check_counter_at_limit is
 *   unknown, so the broader context (e.g., buffer parsing, state machine) cannot be
 *   determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t advance_pointer_on_success(int *param_1)

{
  uint8_t uVar1;
  int iVar2;
  
  uVar1 = *(uint8_t *)*param_1;
  iVar2 = check_counter_at_limit(__frv_reg_unset(4), __frv_reg_unset(5));
  if (iVar2 == 0) {
    *param_1 = *param_1 + 1;
  }
  else {
    *param_1 = param_1[2];
  }
  return uVar1;
}
