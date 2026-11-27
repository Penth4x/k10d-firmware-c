/* @k10d init_object_and_check_flag @ 0x104be7e0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object via three helper calls and returns a status based on a flag byte.
 * summary:
 *   Calls clear_fourteen_word_blocks, then initialize_three_block_struct with a pointer
 *   calculated from param_1 and an offset stored at param_1+0x8d0. Calls
 *   update_entry_pair_and_notify with param_1, 0, and -1. If the byte at param_1+0xeba2 is
 *   zero, returns 1; otherwise calls init_and_bind_object_slot with param_1 and two 16-bit
 *   values from param_1+0xeba4 and returns its result.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_and_check_flag(int param_1)

{
  uint32_t uVar1;
  
  clear_fourteen_word_blocks((uint32_t)param_1);
  initialize_three_block_struct((uint16_t *)(param_1 + 0x15e4 + *(int *)(param_1 + 0x8d0) * 0xb34));
  update_entry_pair_and_notify(param_1,0,0xffffffff);
  if (*(char *)(param_1 + 0xeba2) == '\0') {
    uVar1 = 1;
  }
  else {
    uVar1 = init_and_bind_object_slot(param_1,*(uint16_t *)(param_1 + 0xeba4),*(uint16_t *)(param_1 + 0xeba6)
                        );
  }
  return uVar1;
}
