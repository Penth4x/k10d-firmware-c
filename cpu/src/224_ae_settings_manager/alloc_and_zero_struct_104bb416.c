/* @k10d alloc_and_zero_struct_104bb416 @ 0x104bb416
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Heap-allocates a 0x5c-byte block and zero-initializes most of its fields, setting one
 *   field to 100.
 * summary:
 *   If param_1 is NULL, allocates 0x5c bytes via heap_alloc. Calls
 *   alloc_two_word_pair_1045c3dc four times on the first 24 bytes and
 *   alloc_and_zero_two_words_1045c3bc on offset 0x20. Explicitly zeros numerous
 *   byte/word/dword fields across the structure and sets the word at offset 0x32 to 100.
 *   Returns the pointer to the initialized block.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104bb430) overlaps instruction at (ram,0x104bb42e)
    */

uint32_t * alloc_and_zero_struct_104bb416(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x5c), param_1 != (uint32_t *)0x0)) {
    alloc_two_word_pair_1045c3dc(param_1,0,0);
    alloc_two_word_pair_1045c3dc(param_1 + 2,0,0);
    alloc_two_word_pair_1045c3dc(param_1 + 4,0,0);
    alloc_two_word_pair_1045c3dc(param_1 + 6,0,0);
    alloc_and_zero_two_words_1045c3bc(param_1 + 8);
    *(uint16_t *)(param_1 + 10) = 0;
    *(uint16_t *)((int)param_1 + 0x2a) = 0;
    param_1[0xb] = 0;
    *(uint8_t *)(param_1 + 0xc) = 0;
    *(uint16_t *)((int)param_1 + 0x32) = 100;
    *(uint8_t *)(param_1 + 0xd) = 0;
    *(uint8_t *)((int)param_1 + 0x35) = 0;
    *(uint8_t *)((int)param_1 + 0x36) = 0;
    *(uint8_t *)((int)param_1 + 0x37) = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *(uint16_t *)(param_1 + 0x14) = 0;
    *(uint16_t *)((int)param_1 + 0x52) = 0;
    param_1[0x15] = 0;
    *(uint16_t *)(param_1 + 0x16) = 0;
    *(uint16_t *)((int)param_1 + 0x5a) = 0;
  }
  return param_1;
}
