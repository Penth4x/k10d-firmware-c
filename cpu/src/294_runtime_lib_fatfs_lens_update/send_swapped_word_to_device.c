/* @k10d send_swapped_word_to_device @ 0x1053cf9c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Byte-swaps a 32-bit word from a source buffer and sends it via a communication routine
 *   if the update state is active.
 * summary:
 *   Checks if the state flag at param_1+0x78 is zero. If so, it reads a 32-bit word from
 *   param_2+0x18, byte-swaps it to big-endian, and passes it to write_two_buffer_blocks
 *   with a length of 4 and a flag of 0x1e8. On success, it advances the source pointer
 *   (param_2+0x20) to match the read pointer. The module context suggests this is part of a
 *   firmware update process, but the specific target (lens) is not confirmed by the code
 *   itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int send_swapped_word_to_device(int param_1,void *param_2)

{
  int iVar1;
  uint uVar2;
  uintptr_t sp;
  uint uStack_10;
  
  if (*(int *)(param_1 + 0x78) == 0) {
    uVar2 = *(uint *)((int)param_2 + 0x18);
    if (uVar2 == *(uint *)((int)param_2 + 0x20)) {
      iVar1 = 0;
    }
    else {
      uStack_10 = (uVar2 & 0xff0000) >> 8 | uVar2 >> 0x18 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
      iVar1 = write_two_buffer_blocks(param_1,*(uint32_t *)(param_1 + 0x2c),*(uint32_t *)(param_1 + 0x2c),
                           &uStack_10,4,0x1e8);
      if (iVar1 == 0) {
        *(uint32_t *)((int)param_2 + 0x20) = *(uint32_t *)((int)param_2 + 0x18);
      }
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}
