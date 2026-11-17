/* @k10d dispatch_two_param_calls @ 0x10408242
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 091_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Calls two helper functions with fields from a struct, gated by a check function.
 * summary:
 *   Reads a 32-bit value at offset 0x28 and several bytes at offsets 0x54-0x5c from the
 *   object pointed to by param_1. Calls set_mode_dependent_settings unconditionally with
 *   the 0x28 value and bytes at 0x55, 0x56, and 0x54. Then calls check_mode_byte_is_special
 *   on the object; if the result is non-zero, calls set_setting_by_mode_and_index with the
 *   0x28 value and bytes at 0x5c and 0x5a. The specific subsystem is not identifiable from
 *   the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_two_param_calls(void *param_1)

{
  int iVar1;
  
  set_mode_dependent_settings(*(uint32_t *)((int)param_1 + 0x28),*(uint8_t *)((int)param_1 + 0x55),
               *(uint8_t *)((int)param_1 + 0x56),*(uint8_t *)((int)param_1 + 0x54));
  iVar1 = check_mode_byte_is_special(param_1);
  if (iVar1 != 0) {
    set_setting_by_mode_and_index(*(uint32_t *)((int)param_1 + 0x28),*(uint8_t *)((int)param_1 + 0x5c),
                 *(uint8_t *)((int)param_1 + 0x5a));
  }
  return;
}
