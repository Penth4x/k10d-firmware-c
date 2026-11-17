/* @k10d check_and_set_object_flag_10499c7a @ 0x10499c7a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 203_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Retrieves an object via a helper, checks three fields, and conditionally sets a status
 *   flag.
 * summary:
 *   Calls compute_struct_array_offset with a pointer offset and constant 2 to obtain a
 *   structure pointer. Checks if offsets 0x30 and 0x18 are non-zero and offset 0x1c equals
 *   1. If conditions are met, writes 0xffffffff to offset 0x20, 1 to offset 0x28, and 1 to
 *   offset 0x34. Returns the value at offset 0x34.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t check_and_set_object_flag_10499c7a(int param_1)

{
  int iVar1;
  
  iVar1 = compute_struct_array_offset(*(int *)(param_1 + 4),2);
  if (((*(int *)(iVar1 + 0x30) != 0) && (*(int *)(iVar1 + 0x18) != 0)) &&
     (*(int *)(iVar1 + 0x1c) == 1)) {
    *(uint32_t *)(iVar1 + 0x20) = 0xffffffff;
    *(uint32_t *)(iVar1 + 0x28) = 1;
    *(uint8_t *)(iVar1 + 0x34) = 1;
  }
  return *(uint8_t *)(iVar1 + 0x34);
}
