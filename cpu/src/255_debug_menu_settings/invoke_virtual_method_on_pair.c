/* @k10d invoke_virtual_method_on_pair @ 0x104ed51e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Calls a virtual method on an object at param_1+8, passing two 16-bit values from arrays
 *   indexed by param_2.
 * summary:
 *   The function performs a single indirect call through a function pointer at 0x1044e772.
 *   It passes the object pointer located at param_1+8 as the first argument, and two 16-bit
 *   values retrieved from the arrays pointed to by param_3 and param_3[1] (both indexed by
 *   param_2) as the second and third arguments. No other side effects or memory writes are
 *   visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_method_on_pair(cls_105c2c2c *param_1,int param_2,int *param_3)

{
  (*(code *)0x1044e772/*ROM*/)
            (param_1->field_0x8,*(uint16_t *)(*param_3 + param_2 * 2),
             *(uint16_t *)(param_3[1] + param_2 * 2));
  return;
}
