/* @k10d set_param_via_object @ 0x1046fd44
 * name: model (proposed by the local model from the decompile, confidence 0.80)
 * unit: 160_sr_dust_removal (unit names are model-proposed)
 * purpose:
 *   Sets a value on an object by calling a helper with a derived parameter.
 * summary:
 *   The function takes two parameters. It initializes a local variable to 10, but sets it
 *   to 0xff if the second parameter is zero. It then calls
 *   call_helper_with_stack_param_10462cb2, passing a pointer dereferenced from the first
 *   parameter's offset 0x2c and the local variable. The specific role of the object and the
 *   helper function is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_param_via_object(int param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = 10;
  if (param_2 == 0) {
    uVar1 = 0xff;
  }
  call_helper_with_stack_param_10462cb2(*(int **)(param_1 + 0x2c),uVar1);
  return;
}
