/* @k10d deactivate_object_with_wait @ 0x10468b26
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Deactivates an object by calling conditional and unconditional helpers on its fields,
 *   then waits for a status field to clear.
 * summary:
 *   The function takes an object pointer and a flag. If the flag is zero, it calls
 *   release_pointer_at_offset_c_1046601a on the object's field at offset 0x240; otherwise
 *   it calls release_pointer_at_offset_c_1046602c on the same field. It then
 *   unconditionally calls release_three_struct_fields on that field and
 *   release_struct_fields_10466d06 on the field at offset 0x244. Finally, it enters a busy-
 *   wait loop calling check_transaction_context_flag on the 0x244 field until it returns
 *   zero. The specific subsystem is not identifiable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void deactivate_object_with_wait(void *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    release_pointer_at_offset_c_1046601a(*(int *)((int)param_1 + 0x240));
  }
  else {
    release_pointer_at_offset_c_1046602c(*(int *)((int)param_1 + 0x240));
  }
  release_three_struct_fields(*(uint32_t *)((int)param_1 + 0x240));
  release_struct_fields_10466d06(*(void **)((int)param_1 + 0x244));
  iVar1 = check_transaction_context_flag(*(int *)((int)param_1 + 0x244));
  while (iVar1 != 0) {
    iVar1 = check_transaction_context_flag(*(int *)((int)param_1 + 0x244));
  }
  return;
}
