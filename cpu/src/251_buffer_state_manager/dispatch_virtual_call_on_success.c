/* @k10d dispatch_virtual_call_on_success @ 0x104e2566
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Performs a virtual method call on a sub-object after a conditional check, storing
 *   results in the parent object.
 * summary:
 *   The function first calls release_object_members and checks the result of
 *   validate_sequence_counter. If the check fails (non-zero), it retrieves a value via
 *   get_object_field_at_offset_0x14, validates it with set_field_and_call_helper_104e25fc,
 *   and if valid, invokes a virtual method (slot 5) on the object at param_1[7]. It then
 *   updates fields at offsets 0x34 and 0x38 of param_1[1] and returns 1. If the initial
 *   check passes or validation fails, it returns 9.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_virtual_call_on_success(int *param_1)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  
  release_object_members(param_1);
  iVar1 = validate_sequence_counter(param_1);
  uVar3 = 9;
  if (iVar1 == 0) {
    uVar3 = 9;
  }
  else {
    uVar2 = get_object_field_at_offset_0x14(*param_1);
    iVar1 = set_field_and_call_helper_104e25fc((int)param_1,uVar2);
    if (iVar1 == 0) {
      initialize_linked_struct_fields(param_1,0x2009);
    }
    else {
      iVar1 = serialize_struct_to_buffer(__frv_reg_unset(4));
      dispatch_virtual_slot_two_104df936(param_1,0x1008,iVar1 + 0xc);
      iVar1 = *(int *)(param_1[7] + 0xc);
      (**(code **)(iVar1 + 0x2c))(param_1[7] + (int)*(short *)(iVar1 + 0x28),uVar2,param_1[6]);
      *(uint32_t *)(param_1[1] + 0x34) = 3;
      *(uint32_t *)(param_1[1] + 0x38) = uVar2;
      uVar3 = 1;
    }
  }
  return uVar3;
}
