/* @k10d call_virtual_with_six_short_args @ 0x104ed416
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object, passing six 16-bit values gathered from an array
 *   of pointers.
 * summary:
 *   The function takes an object pointer (param_1), an index (param_2), and an array of six
 *   pointers (param_3). It doubles the index and uses it to read six 16-bit values from the
 *   memory locations pointed to by the array elements. It then calls a virtual function
 *   (slot 0) on the object located at param_1 + 8, passing these six values as arguments.
 *   The specific role of the data or the virtual method is not determinable from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_virtual_with_six_short_args(int param_1,int param_2,int *param_3)

{
  param_2 = param_2 * 2;
  (*(code *)0x1044e5f2/*ROM*/)
            (*(uint32_t *)(param_1 + 8),*(uint16_t *)(*param_3 + param_2),
             *(uint16_t *)(param_3[1] + param_2),*(uint16_t *)(param_3[2] + param_2),
             *(uint16_t *)(param_3[3] + param_2),*(uint16_t *)(param_3[4] + param_2));
  return;
}
