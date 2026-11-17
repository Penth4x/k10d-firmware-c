/* @k10d read_until_sentinel @ 0x103fdcc0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 089_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Copies bytes from a source buffer into a destination until a sentinel condition is met,
 *   then null-terminates.
 * summary:
 *   The function calls compare_first_two_ints to check a condition (initially without
 *   arguments, then with param_1). While the condition is false, it calls
 *   advance_pointer_on_success(param_1) to retrieve a byte, stores it in param_2, and
 *   increments param_2. Once the condition becomes true, it writes 0 to the current
 *   position in param_2. This pattern is characteristic of a string or buffer copy loop
 *   that terminates on a specific state or sentinel value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void read_until_sentinel(int *param_1,uint8_t *param_2)

{
  int iVar1;
  uint8_t uVar2;
  
  iVar1 = compare_first_two_ints((int *)__frv_reg_unset(4));
  while (iVar1 == 0) {
    uVar2 = advance_pointer_on_success(param_1);
    *param_2 = uVar2;
    iVar1 = compare_first_two_ints(param_1);
    param_2 = param_2 + 1;
  }
  *param_2 = 0;
  return;
}
