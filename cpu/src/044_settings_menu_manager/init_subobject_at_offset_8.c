/* @k10d init_subobject_at_offset_8 @ 0x1039fcb4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a sub-object located at offset 8 of the given structure pointer.
 * summary:
 *   The function takes a single pointer argument and calls two helper functions on the
 *   memory at offset 8 of that pointer. The first call passes the sub-object pointer and 0,
 *   while the second passes only the sub-object pointer. The specific roles of the callees
 *   are unknown, but the pattern suggests a two-step initialization or reset of a nested
 *   structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_subobject_at_offset_8(cls_105992d4 *param_1)

{
  return_one_constant_1049229a((int)&param_1->field_0x8,0);
  store_two_values_at_offsets((cls_105b4254 *)&param_1->field_0x8);
  return;
}
