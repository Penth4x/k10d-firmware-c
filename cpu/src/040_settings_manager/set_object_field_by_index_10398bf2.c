/* @k10d set_object_field_by_index_10398bf2 @ 0x10398bf2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Selects a field offset from a small index table, calls a helper with the field value,
 *   and stores a byte at a computed offset.
 * summary:
 *   Maps param_2 (0-3) to one of four offsets (0x70, 0x74, 0x78, 0x7c) added to param_1.
 *   Calls invoke_virtual_slot_14_1039cab4 with param_1, the integer at that computed
 *   address, and param_3. Finally writes the low byte of param_3 to the object at offset
 *   0x34 + param_2. The callee invoke_virtual_slot_14_1039cab4 is not named, so the
 *   specific subsystem role is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_object_field_by_index_10398bf2(void *param_1,int param_2,uint32_t param_3)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = 0x70;
  }
  else if (param_2 == 1) {
    iVar1 = 0x74;
  }
  else if (param_2 == 2) {
    iVar1 = 0x78;
  }
  else {
    if (param_2 != 3) goto LAB_10398c2e;
    iVar1 = 0x7c;
  }
  invoke_virtual_slot_14_1039cab4(param_1,*(int *)(iVar1 + (int)param_1),param_3);
LAB_10398c2e:
  *(char *)((int)param_1 + param_2 + 0x34) = (char)param_3;
  return;
}
