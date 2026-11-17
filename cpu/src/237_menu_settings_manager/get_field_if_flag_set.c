/* @k10d get_field_if_flag_set @ 0x104ce520
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 237_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns the 32-bit value at offset 0x10 of the object if the byte at offset 0xc is non-
 *   zero, otherwise returns 0.
 * summary:
 *   The function performs a simple conditional read from a structure passed in param_1. It
 *   checks if the byte at offset 0xc is zero; if so, it returns 0. If the byte is non-zero,
 *   it returns the 32-bit integer located at offset 0x10. No other side effects or memory
 *   writes occur.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_field_if_flag_set(int param_1)

{
  uint32_t uVar1;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint32_t *)(param_1 + 0x10);
  }
  return uVar1;
}
