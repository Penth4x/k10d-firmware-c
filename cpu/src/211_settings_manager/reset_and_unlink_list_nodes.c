/* @k10d reset_and_unlink_list_nodes @ 0x104ac0b0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 211_settings_manager (unit names are model-proposed)
 * purpose:
 *   Clears a status field, frees a pointer at offset 0x20, and unlinks two doubly-linked
 *   list nodes at offsets 0x18 and 0x1c.
 * summary:
 *   The function zeroes the 4-byte field at param_1+0x24. If the pointer at param_1+0x20 is
 *   non-null, it calls init_struct_with_two_helpers on it, likely freeing or destroying
 *   that object. It then calls call_helper_with_param_and_field5 on the pointer at
 *   param_1+0x18, and manually updates the next/prev pointers of the nodes at param_1+0x18
 *   and param_1+0x1c to bypass them in a linked list. Finally, it zeroes the field at
 *   param_1+0x34 and returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t reset_and_unlink_list_nodes(cls_105b7288 *param_1)

{
  param_1->field_0x24 = 0;
  if ((uint32_t *)param_1->field_0x20 != (uint32_t *)0x0) {
    init_struct_with_two_helpers((uint32_t *)param_1->field_0x20);
  }
  call_helper_with_param_and_field5((uint32_t *)(param_1->field_0x18));
  **(uint32_t **)param_1->field_0x18 = ((uint32_t *)param_1->field_0x18)[1];
  **(uint32_t **)param_1->field_0x1c = ((uint32_t *)param_1->field_0x1c)[1];
  param_1->field_0x34 = 0;
  return 1;
}
