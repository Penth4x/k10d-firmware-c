/* @k10d iterate_and_release_entry_list @ 0x10516584
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Iterates over a 16-entry array of 16-bit IDs, calling a handler for each non-zero
 *   entry, then releases the associated resource.
 * summary:
 *   Checks if the pointer at offset 0x2bc (700) is non-null. If so, loops through 16 16-bit
 *   values starting at offset 0x2c8, calling release_buffer_slot_by_index with the object,
 *   the pointer at 0x2bc, and the current ID for each non-zero ID. After the loop, calls
 *   forward_param_to_callee_10515fbc with the pointer at 0x2bc and
 *   zero_initialize_struct_fields with the address of the field at offset 0x2b8. The
 *   specific subsystem is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void iterate_and_release_entry_list(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 700) != 0) {
    iVar2 = 0;
    do {
      uVar1 = (uint)*(ushort *)(param_1 + 0x2c8 + iVar2);
      if (uVar1 == 0) break;
      release_buffer_slot_by_index(param_1,*(int *)(param_1 + 700),uVar1);
      iVar2 = iVar2 + 2;
    } while (iVar2 < 0x20);
    forward_param_to_callee_10515fbc(param_1,*(void **)(param_1 + 700));
    zero_initialize_struct_fields((void *)(param_1 + 0x2b8));
  }
  return;
}
