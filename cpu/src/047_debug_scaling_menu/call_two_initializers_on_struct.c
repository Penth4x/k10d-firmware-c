/* @k10d call_two_initializers_on_struct @ 0x103aa55c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 047_debug_scaling_menu (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions on a base pointer and a pointer offset by 0x40.
 * summary:
 *   The function takes a single pointer argument and passes it to
 *   init_subobject_at_offset_8. It then passes the same pointer plus an offset of 0x40 to
 *   create_kernel_object. No other operations or side effects are visible in the
 *   pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_initializers_on_struct(cls_10565770 *param_1)

{
  init_subobject_at_offset_8((cls_105992d4 *)param_1);
  create_kernel_object((void *)&param_1->field_0x40);
  return;
}
