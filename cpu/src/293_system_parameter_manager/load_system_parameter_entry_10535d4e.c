/* @k10d load_system_parameter_entry_10535d4e @ 0x10535d4e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 293_system_parameter_manager (unit names are model-proposed)
 * purpose:
 *   Loads a system parameter entry from the store, validating its type and size before
 *   committing it.
 * summary:
 *   This is virtual slot 2 of class cls_10621c08 in the system_parameter_store module. It
 *   calls release_object_members to prepare the object, then checks a status via
 *   validate_sequence_counter. If valid, it retrieves a value
 *   (get_object_field_at_offset_0x14) and a type indicator (get_field_at_offset_0x18),
 *   rejecting types other than 0 or 1 with error code 0x201d. It then calls
 *   call_slot_handler_if_index_valid with the object's third member, the value, and the
 *   type, returning 1 on success or 9 on failure (with error 0x2009 if the final call
 *   fails).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t load_system_parameter_entry_10535d4e(cls_10621c08 *param_1)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  
  release_object_members((int *)param_1);
  iVar1 = validate_sequence_counter(param_1);
  if (iVar1 == 0) {
    uVar2 = 9;
  }
  else {
    uVar2 = get_object_field_at_offset_0x14(param_1->field_0x0);
    iVar1 = get_field_at_offset_0x18(param_1->field_0x0);
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      if (iVar1 != 1) {
        initialize_linked_struct_fields(param_1,0x201d);
        return 9;
      }
      uVar3 = 1;
    }
    iVar1 = call_slot_handler_if_index_valid(param_1->field_0x8,uVar2,uVar3);
    if (iVar1 == 0) {
      initialize_linked_struct_fields(param_1,0x2009);
    }
    uVar2 = 1;
  }
  return uVar2;
}
