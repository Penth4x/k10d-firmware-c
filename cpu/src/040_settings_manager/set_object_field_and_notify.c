/* @k10d set_object_field_and_notify @ 0x10398c3a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Selects one of four offsets in an object based on an index, calls a helper with the
 *   field value, and stores a status byte.
 * summary:
 *   The function maps param_2 (0-3) to offsets 0x80-0x8c relative to param_1. It reads the
 *   int at that offset and passes it, along with param_3, to
 *   invoke_virtual_slot_14_1039cab4. Finally, it writes the low byte of param_3 to the
 *   object at offset 0x38 + param_2. The specific role of the object and the helper is not
 *   determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_object_field_and_notify(void *param_1,int param_2,uint32_t param_3)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = 0x80;
  }
  else if (param_2 == 1) {
    iVar1 = 0x84;
  }
  else if (param_2 == 2) {
    iVar1 = 0x88;
  }
  else {
    if (param_2 != 3) goto LAB_10398c76;
    iVar1 = 0x8c;
  }
  invoke_virtual_slot_14_1039cab4(param_1,*(int *)(iVar1 + (int)param_1),param_3);
LAB_10398c76:
  *(char *)((int)param_1 + param_2 + 0x38) = (char)param_3;
  return;
}
