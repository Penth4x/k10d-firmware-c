/* @k10d compute_adjusted_value @ 0x103feca4
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 089_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Calculates a value based on param_2 and a callee result, applying a divisor and odd-
 *   value correction.
 * summary:
 *   The function branches on param_3. If param_3 is 1, it calls
 *   sum_character_widths_from_tables and divides the difference (param_2 - result) by 2. If
 *   param_3 is 2, it subtracts the callee result from param_2. Finally, it ensures the
 *   result is even by decrementing it if it is odd. The specific role of
 *   sum_character_widths_from_tables is unknown, preventing a more specific camera-domain
 *   naming.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint compute_adjusted_value(void *param_1,int param_2,int param_3,void *param_4)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (param_3 == 1) {
    iVar2 = sum_character_widths_from_tables(param_1,param_4);
    uVar1 = (param_2 - iVar2) / 2;
  }
  else if (param_3 == 2) {
    iVar2 = sum_character_widths_from_tables(param_1,param_4);
    uVar1 = param_2 - iVar2;
  }
  if (uVar1 != (uVar1 & 0xfffffffe)) {
    uVar1 = uVar1 - 1;
  }
  return uVar1;
}
