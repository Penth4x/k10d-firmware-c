/* @k10d clear_fourteen_word_blocks @ 0x104be178
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper on 12 offsets within a 3-iteration loop and zeroes a trailing 8-byte
 *   region.
 * summary:
 *   Iterates 3 times, advancing a base pointer by 0x2cd0 each pass, and calls
 *   initialize_three_block_struct on four offsets (0, 0xb34, 0x1668, 0x219c) relative to
 *   param_1+0x2c4c. After the loop it writes zeros to param_1+0xeb8a through
 *   param_1+0xeb91. The callee initialize_three_block_struct is unnamed, so the specific
 *   data being cleared is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_fourteen_word_blocks(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 3;
  iVar1 = 0;
  do {
    iVar2 = param_1 + 0x2c4c;
    initialize_three_block_struct((uint16_t *)(iVar2 + iVar1));
    initialize_three_block_struct((uint16_t *)(iVar2 + iVar1 + 0xb34));
    initialize_three_block_struct((uint16_t *)(iVar2 + iVar1 + 0x1668));
    initialize_three_block_struct((uint16_t *)(iVar2 + iVar1 + 0x219c));
    iVar1 = iVar1 + 0x2cd0;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  *(uint16_t *)(param_1 + 0xeb8a) = 0;
  *(uint16_t *)(param_1 + 0xeb8c) = 0;
  *(uint8_t *)(param_1 + 0xeb8e) = 0;
  *(uint8_t *)(param_1 + 0xeb8f) = 0;
  *(uint8_t *)(param_1 + 0xeb90) = 0;
  *(uint8_t *)(param_1 + 0xeb91) = 0;
  return;
}
