/* @k10d dispatch_event_with_state_update @ 0x104e19ac
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Processes an event object by calling a helper, conditionally updating a global counter,
 *   and dispatching a result via a callee.
 * summary:
 *   The function takes an object pointer, calls release_object_members, then checks two
 *   fields at offsets 8 and 0xc against a global counter _DAT_80010908. If conditions are
 *   met, it calls initialize_linked_struct_fields with argument 0x2004 and resets the
 *   counter. It then calls serialize_variable_length_record to get a value, passes it to
 *   dispatch_virtual_slot_two_104df936 with flags 0x1001, sets a field at offset 0x48 to 3,
 *   and returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t dispatch_event_with_state_update(cls_105be0a0 *param_1)

{
  int iVar1;
  int iVar2;
  
  release_object_members((int *)param_1);
  iVar2 = _DAT_80010908/*SDRAM*/;
  if (((*(int *)(param_1->field_0x0 + 8) != 0) &&
      (iVar1 = *(int *)(param_1->field_0x0 + 0xc), iVar1 != 0)) &&
     (iVar2 = _DAT_80010908/*SDRAM*/ + 1, iVar1 != _DAT_80010908/*SDRAM*/ + 1)) {
    initialize_linked_struct_fields(param_1,0x2004);
    iVar2 = _DAT_80010908/*SDRAM*/;
  }
  _DAT_80010908/*SDRAM*/ = iVar2;
  iVar2 = serialize_variable_length_record(param_1);
  dispatch_virtual_slot_two_104df936(param_1,0x1001,iVar2);
  *(uint32_t *)(param_1->field_0x10 + 0x48) = 3;
  return 1;
}
