/* @k10d allocate_and_init_buffer_1047a5b8 @ 0x1047a5b8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a buffer via a helper, initializes it with a size parameter, and registers it
 *   with a second helper.
 * summary:
 *   Calls allocate_200k_heap_block to obtain a pointer or handle. If non-zero, it invokes a
 *   function at 0x10478e4c with the value at param_1+4, the handle, and the constant
 *   0x32000 (204800). It then calls write_data_to_stream_object with the value at param_1+4
 *   and passes the original param_1 and the handle to release_heap_block_1047a6ec. Returns
 *   the result of write_data_to_stream_object or 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t allocate_and_init_buffer_1047a5b8(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  iVar1 = allocate_200k_heap_block();
  if (iVar1 != 0) {
    (*(code *)0x10478e4c/*ROM*/)(*(uint32_t *)(param_1 + 4),iVar1,0x32000);
    uVar2 = write_data_to_stream_object(*(uint32_t *)(param_1 + 4));
    release_heap_block_1047a6ec(param_1,(void *)iVar1);
  }
  return uVar2;
}
