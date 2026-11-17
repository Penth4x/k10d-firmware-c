/* @k10d set_object_flag_from_bool @ 0x1046fd28
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 160_sr_dust_removal (unit names are model-proposed)
 * purpose:
 *   Converts a boolean parameter to 0xff or 1 and writes it to an object field via a
 *   helper.
 * summary:
 *   The function takes two parameters. It sets a local variable to 1, or to 0xff if the
 *   second parameter is zero. It then calls call_helper_with_stack_param_10462cd6, passing
 *   a pointer dereferenced from the first parameter at offset 0x2c and the computed value.
 *   The specific role of the object and the helper function is not determinable from the
 *   provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_object_flag_from_bool(int param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = 1;
  if (param_2 == 0) {
    uVar1 = 0xff;
  }
  call_helper_with_stack_param_10462cd6(*(int **)(param_1 + 0x2c),uVar1);
  return;
}
