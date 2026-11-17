/* @k10d store_two_fields_and_call_helper @ 0x1049b7ce
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 204_settings_manager (unit names are model-proposed)
 * purpose:
 *   Writes param_3 and param_2 into object fields at offsets 4 and 0xc, then calls a helper
 *   with the new field value.
 * summary:
 *   The function stores param_3 at *(param_1+4) and param_2 at *(param_1+0xc). It then
 *   calls traverse_tree_with_virtual_handlers with the newly written field at offset 4, the
 *   value at *(param_2+4), and two zero arguments. No camera-specific subsystem is evident
 *   from the code or the single unnamed callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_two_fields_and_call_helper(int param_1,int param_2,uint32_t param_3)

{
  *(uint32_t *)(param_1 + 4) = param_3;
  *(int *)(param_1 + 0xc) = param_2;
  traverse_tree_with_virtual_handlers(param_1 + 4,*(uint32_t *)(param_2 + 4),0,0);
  return;
}
