/* @k10d load_system_parameter_entry_10535c68 @ 0x10535c68
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 293_system_parameter_manager (unit names are model-proposed)
 * purpose:
 *   Loads a system parameter entry from the store, returning 1 on success or 9 on failure.
 * summary:
 *   This is virtual method slot 2 of class cls_1062190c within the system_parameter_store
 *   module. It calls release_object_members to prepare the object, then
 *   validate_sequence_counter to check a condition. If the condition is non-zero, it
 *   retrieves a value via get_object_field_at_offset_0x14; if that value is 0xffffffff or
 *   the subsequent call to store_parameter_value fails, it calls
 *   initialize_linked_struct_fields with argument 0x2009 and returns 9. On success, it
 *   returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t load_system_parameter_entry_10535c68(cls_1062190c *param_1)

{
  int iVar1;
  uint uVar2;
  uint32_t uVar3;
  
  release_object_members((int *)param_1);
  iVar1 = validate_sequence_counter(param_1);
  uVar3 = 9;
  if (iVar1 == 0) {
    uVar3 = 9;
  }
  else {
    uVar2 = get_object_field_at_offset_0x14(param_1->field_0x0);
    if (uVar2 == 0xffffffff) {
      initialize_linked_struct_fields(param_1,0x2009);
      uVar3 = 9;
    }
    else {
      iVar1 = store_parameter_value((int)param_1,uVar2);
      if (iVar1 == 0) {
        initialize_linked_struct_fields(param_1,0x2009);
      }
      else {
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}
