/* @k10d dispatch_object_operation @ 0x104e30de
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Performs a conditional operation on an object, returning a status code (1, 9, or a
 *   computed value).
 * summary:
 *   Calls an initialization or setup routine (release_object_members) and checks a
 *   condition via validate_sequence_counter. If the condition is false, it returns 9.
 *   Otherwise, it computes a value from the object's first field, calls
 *   dispatch_param_by_index_104e4d00 with fields from the object, and handles
 *   success/failure by calling different helper functions (initialize_linked_struct_fields
 *   or dispatch_virtual_slot_two_104df936) and updating fields in a sub-object at
 *   param_1[4].
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_object_operation(cls_105bf838 *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  release_object_members((int *)param_1);
  iVar1 = validate_sequence_counter(param_1);
  if (iVar1 == 0) {
    uVar2 = 9;
  }
  else {
    uVar2 = get_object_field_at_offset_0x14(param_1->field_0x0);
    iVar1 = dispatch_param_by_index_104e4d00(param_1->field_0x8,uVar2,param_1->field_0x18);
    if (iVar1 == 0) {
      initialize_linked_struct_fields(param_1,0x2009);
      uVar2 = 9;
    }
    else {
      dispatch_virtual_slot_two_104df936(param_1,0x100a,*(int *)((int)param_1->field_0x18 + 0x2c8) + 0xc);
      *(uint32_t *)(param_1->field_0x10 + 0x28) = uVar2;
      *(uint32_t *)(param_1->field_0x10 + 0x48) = 1;
      uVar2 = 1;
    }
  }
  return uVar2;
}
