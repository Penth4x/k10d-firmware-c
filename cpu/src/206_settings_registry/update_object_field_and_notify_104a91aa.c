/* @k10d update_object_field_and_notify_104a91aa @ 0x104a91aa
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Stores a value into an object field, adjusts a related offset based on a flag, and
 *   calls a helper on a linked object.
 * summary:
 *   The function writes param_2 to offset 8 of the object pointed to by param_1. It calls
 *   read_two_bytes_from_heap_offset to get a value, then writes that value (plus 0 or
 *   param_2 depending on a byte at offset 0xc) to offset 0x28 of the object pointed to by
 *   the pointer at offset 4 of param_1. Finally, it calls layout_list_items_sequentially
 *   with the pointer at offset 4 as an argument. The specific roles of the objects and
 *   helpers are not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_object_field_and_notify_104a91aa(cls_105b6aa0 *param_1,int param_2)

{
  int iVar1;
  
  param_1->field_0x8 = param_2;
  iVar1 = read_two_bytes_from_heap_offset((int)(param_1)/* B-3: stock r4 = param_1 */);
  if (param_1->field_0xc != '\0') {
    param_2 = 0;
  }
  *(int *)(param_1->field_0x4 + 0x28) = iVar1 + param_2;
  layout_list_items_sequentially(param_1->field_0x4);
  return;
}
