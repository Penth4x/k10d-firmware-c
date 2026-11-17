/* @k10d dispatch_lens_update_step @ 0x1053d32c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Routes a lens firmware update operation to a handler based on the current state field,
 *   then increments a success counter.
 * summary:
 *   Reads a state integer from offset 0x48 of the context object and dispatches to one of
 *   three handlers (write_packed_nibble_to_buffer, write_swapped_word_to_buffer,
 *   store_swapped_word_at_offset) depending on whether the state is 1, 2, or 4. If the
 *   handler returns 0 (success), it increments a counter at offset 0x74 if param_3 matches
 *   the value at offset 0x50, or increments a field in the sub-object at offset 0x68 if
 *   param_3 is 0. Returns the handler's status code or -0x321 for unknown states.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int dispatch_lens_update_step(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(param_1 + 0x68);
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 == 4) {
    iVar1 = store_swapped_word_at_offset((void *)param_1,puVar2,param_2,param_3);
  }
  else if (iVar1 == 2) {
    iVar1 = write_swapped_word_to_buffer((void *)param_1,puVar2,param_2,param_3);
  }
  else if (iVar1 == 1) {
    iVar1 = write_packed_nibble_to_buffer(param_1,puVar2,param_2,param_3);
  }
  else {
    iVar1 = -0x321;
  }
  if (iVar1 == 0) {
    if (param_3 == 0) {
      puVar2[6] = puVar2[6] + 1;
    }
    else if (param_3 == *(int *)(param_1 + 0x50)) {
      *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
    }
  }
  return iVar1;
}
