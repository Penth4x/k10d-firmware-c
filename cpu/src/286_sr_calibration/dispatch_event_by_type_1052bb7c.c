/* @k10d dispatch_event_by_type_1052bb7c @ 0x1052bb7c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 286_sr_calibration (unit names are model-proposed)
 * purpose:
 *   Routes an event object to a handler based on its type code, returning a status code.
 * summary:
 *   Calls release_object_members and validate_sequence_counter on the input object. If the
 *   second call returns non-zero, it checks the type via get_object_field_at_offset_0x14.
 *   If the type is 0x5011, it calls build_string_from_rodata_segments, passes the result to
 *   dispatch_virtual_slot_two_104df936, sets a field at offset 0x48 to 3, and returns 1.
 *   Otherwise, it calls initialize_linked_struct_fields with 0x200a and returns 9. If the
 *   initial check is zero, it returns 9.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_event_by_type_1052bb7c(cls_105f9e98 *param_1)

{
  int iVar1;
  short sVar2;
  uint32_t uVar3;
  
  release_object_members((int *)param_1);
  iVar1 = validate_sequence_counter(param_1);
  uVar3 = 9;
  if (iVar1 == 0) {
    uVar3 = 9;
  }
  else {
    sVar2 = get_object_field_at_offset_0x14(param_1->field_0x0);
    if (sVar2 == 0x5011) {
      iVar1 = build_string_from_rodata_segments(__frv_reg_unset(4));
      dispatch_virtual_slot_two_104df936(param_1,0x1015,iVar1 + 0xc);
      *(uint32_t *)(param_1->field_0x10 + 0x48) = 3;
      uVar3 = 1;
    }
    else {
      initialize_linked_struct_fields(param_1,0x200a);
    }
  }
  return uVar3;
}
