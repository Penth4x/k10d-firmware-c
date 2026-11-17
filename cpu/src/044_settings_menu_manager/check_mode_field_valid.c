/* @k10d check_mode_field_valid @ 0x1039fa6c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Returns 1 if the integer at offset 200 of the given structure is one of the values 1,
 *   2, 4, 5, 6, 7, or 8.
 * summary:
 *   The function reads a 32-bit integer from offset 200 of the object pointed to by
 *   param_1. It checks if this value matches any of the specific set {1, 2, 4, 5, 6, 7, 8}.
 *   If a match is found, it returns 1; otherwise, it returns 0. No other side effects or
 *   memory writes occur.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_mode_field_valid(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 200);
  uVar1 = 0;
  if ((((iVar2 == 2) || (iVar2 == 1)) || (iVar2 == 4)) ||
     (((iVar2 == 5 || (iVar2 == 8)) || ((iVar2 == 7 || (iVar2 == 6)))))) {
    uVar1 = 1;
  }
  return uVar1;
}
