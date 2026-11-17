/* @k10d allocate_buffer_or_store_error @ 0x1047fb9e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 171_settings_registry (unit names are model-proposed)
 * purpose:
 *   Calls a helper to get a size, allocates a buffer of that size plus 0x20, and stores the
 *   pointer or error code.
 * summary:
 *   Invokes map_mode_index_to_code_104806c4 with param_1 and param_3 to obtain a value.
 *   Calls the function at 0x1053fcb4 (likely a memory allocator) with param_2, the result,
 *   and 0x20. If the result is less than 1, stores the error code in *(param_1 + 4);
 *   otherwise, stores the allocated pointer in *param_4 and clears *(param_1 + 4). Returns
 *   true if the result is positive.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool allocate_buffer_or_store_error(int param_1,uint32_t param_2,uint32_t param_3,int *param_4)

{
  uint32_t uVar1;
  int iVar2;
  
  uVar1 = map_mode_index_to_code_104806c4(param_1,param_3);
  iVar2 = (*(code *)0x1053fcb4/*ROM*/)(param_2,uVar1,0x20);
  if (iVar2 < 1) {
    *(int *)(param_1 + 4) = iVar2;
  }
  else {
    *param_4 = iVar2;
    *(uint32_t *)(param_1 + 4) = 0;
  }
  return 0 < iVar2;
}
