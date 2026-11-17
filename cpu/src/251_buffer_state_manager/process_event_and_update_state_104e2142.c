/* @k10d process_event_and_update_state_104e2142 @ 0x104e2142
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Processes an event object, updates internal state fields, and returns a status code.
 * summary:
 *   The function calls an initialization or reset routine on the object, then checks a
 *   status via validate_sequence_counter. If the status is non-zero, it retrieves a value
 *   from get_object_field_at_offset_0x14 and calls dispatch_param_by_index_104e4d00 with
 *   parameters from the object. Depending on the result, it either logs an error (0x2009)
 *   or updates multiple fields in the object and related structures (param_1[1],
 *   param_1[4], param_1[6], param_1[7]). It returns 0, 1, or 2 based on the outcome and a
 *   specific value (0x3801) read from param_1[6].
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_event_and_update_state_104e2142(int *param_1)

{
  short sVar1;
  int iVar2;
  uint32_t uVar3;
  int iVar4;
  
  release_object_members(param_1);
  iVar2 = validate_sequence_counter(param_1);
  if (iVar2 == 0) {
    uVar3 = 9;
  }
  else {
    uVar3 = get_object_field_at_offset_0x14(*param_1);
    iVar4 = param_1[4];
    iVar2 = dispatch_param_by_index_104e4d00(param_1[2],uVar3,param_1[6]);
    if (iVar2 == 0) {
      initialize_linked_struct_fields(param_1,0x2009);
      uVar3 = 9;
    }
    else {
      *(uint32_t *)(param_1[1] + 0x34) = 4;
      dispatch_virtual_slot_two_104df936(param_1,0x1009,*(int *)(param_1[6] + 0x2c0) + 0xc);
      *(uint32_t *)(iVar4 + 0x28) = uVar3;
      sVar1 = *(short *)(param_1[6] + 700);
      advance_state_machine((int *)param_1[7],uVar3);
      *(uint32_t *)(param_1[1] + 0x34) = 4;
      *(uint32_t *)(param_1[1] + 0x38) = uVar3;
      uVar3 = 0;
      if (sVar1 != 0x3801) {
        uVar3 = 2;
      }
      *(uint32_t *)(iVar4 + 0x48) = uVar3;
      uVar3 = 1;
    }
  }
  return uVar3;
}
