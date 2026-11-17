/* @k10d menu_list_build @ 0x10495682
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed set_flag_after_helper_call)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper with four arguments and sets byte offset 9 of the first argument to 1.
 * summary:
 *   The function forwards its four parameters to store_three_field_record, then writes the
 *   value 1 to the byte at offset 9 of the object pointed to by param_1. The role of
 *   store_three_field_record is unknown, so the specific subsystem context cannot be
 *   determined from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* Menu list-entry builder (digit-width classify r6=1/2/3). */

void menu_list_build(int *param_1,uint16_t *param_2,uint8_t param_3,uint8_t param_4)

{
  store_three_field_record(*param_1,param_2,param_3,param_4);
  *(uint8_t *)((int)param_1 + 9) = 1;
  return;
}
