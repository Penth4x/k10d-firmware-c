/* @k10d init_object_with_status_check @ 0x104e10c0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling two helpers and setting fields based on the second
 *   helper's return value.
 * summary:
 *   Calls release_object_members on the object, then calls validate_sequence_counter. If
 *   the second call returns 0, returns 9. Otherwise, writes 0x100d to a sub-object field,
 *   copies a value from the object's first pointer to another field, sets a field to 2, and
 *   returns 1. The specific subsystem is not identifiable from the provided code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_with_status_check(cls_105bd454 *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  release_object_members((int *)param_1);
  iVar1 = validate_sequence_counter((int *)param_1);
  if (iVar1 == 0) {
    uVar2 = 9;
  }
  else {
    *(uint16_t *)(param_1->field_0x10 + 4) = 0x100d;
    uVar2 = 1;
    *(uint32_t *)(param_1->field_0x10 + 0xc) = *(uint32_t *)(param_1->field_0x0 + 0xc);
    *(uint32_t *)(param_1->field_0x4 + 0x34) = 2;
  }
  return uVar2;
}
