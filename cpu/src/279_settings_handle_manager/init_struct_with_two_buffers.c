/* @k10d init_struct_with_two_buffers @ 0x10521140
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 279_settings_handle_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a struct by zeroing fields, setting defaults, and clearing two embedded
 *   buffers.
 * summary:
 *   The function writes specific default values (0, 0xffff, 0x3002) to various offsets
 *   within the object pointed to by param_1. It sets a pointer at offset 0x224 to point to
 *   offset 0x228. It then calls fill_byte_array twice to clear memory regions at offsets
 *   0x200 (size 0x200) and 0x228 (size 0x80). Finally, it manually zeros the first 0x22
 *   bytes of the region at 0x200 and sets a byte at 0x2a8 to 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_struct_with_two_buffers(void *param_1)

{
  *(uint32_t *)((int)param_1 + 0x224) = 0;
  *(uint16_t *)((int)param_1 + 0x2aa) = 0xffff;
  *(uint16_t *)((int)param_1 + 0x2ac) = 0xffff;
  *(uint16_t *)((int)param_1 + 0x2ae) = 0xffff;
  *(uint16_t *)((int)param_1 + 0x2b0) = 0xffff;
  *(uint16_t *)((int)param_1 + 0x2b2) = 0xffff;
  *(uint16_t *)((int)param_1 + 0x2b4) = 0xffff;
  *(uint16_t *)((int)param_1 + 0x2b6) = 0xffff;
  *(uint32_t *)((int)param_1 + 0x2b8) = 0;
  *(uint16_t *)((int)param_1 + 700) = 0x3002;
  *(uint16_t *)((int)param_1 + 0x2be) = 0;
  *(uint32_t *)((int)param_1 + 0x2c0) = 0;
  *(uint16_t *)((int)param_1 + 0x2c4) = 0;
  *(uint32_t *)((int)param_1 + 0x2c8) = 0;
  *(uint32_t *)((int)param_1 + 0x2cc) = 0;
  *(uint32_t *)((int)param_1 + 0x2d0) = 0;
  *(uint32_t *)((int)param_1 + 0x2d4) = 0;
  *(uint32_t *)((int)param_1 + 0x2d8) = 0;
  *(uint32_t *)((int)param_1 + 0x2dc) = 0;
  *(uint32_t *)((int)param_1 + 0x2e0) = 0;
  *(uint16_t *)((int)param_1 + 0x2e4) = 0;
  *(uint32_t *)((int)param_1 + 0x2e8) = 0;
  *(uint32_t *)((int)param_1 + 0x2ec) = 0;
  *(uint32_t *)((int)param_1 + 0x2f0) = 0;
  *(void **)((int)param_1 + 0x224) = (void *)((int)param_1 + 0x228);
  fill_byte_array(param_1,0,0x200);
  *(uint8_t *)((int)param_1 + 0x200) = 0;
  *(uint8_t *)((int)param_1 + 0x201) = 0;
  *(uint8_t *)((int)param_1 + 0x202) = 0;
  *(uint8_t *)((int)param_1 + 0x203) = 0;
  *(uint8_t *)((int)param_1 + 0x204) = 0;
  *(uint8_t *)((int)param_1 + 0x205) = 0;
  *(uint8_t *)((int)param_1 + 0x206) = 0;
  *(uint8_t *)((int)param_1 + 0x207) = 0;
  *(uint8_t *)((int)param_1 + 0x208) = 0;
  *(uint8_t *)((int)param_1 + 0x209) = 0;
  *(uint8_t *)((int)param_1 + 0x20a) = 0;
  *(uint8_t *)((int)param_1 + 0x20b) = 0;
  *(uint8_t *)((int)param_1 + 0x20c) = 0;
  *(uint8_t *)((int)param_1 + 0x20d) = 0;
  *(uint8_t *)((int)param_1 + 0x20e) = 0;
  *(uint8_t *)((int)param_1 + 0x20f) = 0;
  *(uint8_t *)((int)param_1 + 0x210) = 0;
  *(uint8_t *)((int)param_1 + 0x211) = 0;
  *(uint8_t *)((int)param_1 + 0x212) = 0;
  *(uint8_t *)((int)param_1 + 0x213) = 0;
  *(uint8_t *)((int)param_1 + 0x214) = 0;
  *(uint8_t *)((int)param_1 + 0x215) = 0;
  *(uint8_t *)((int)param_1 + 0x216) = 0;
  *(uint8_t *)((int)param_1 + 0x217) = 0;
  *(uint8_t *)((int)param_1 + 0x218) = 0;
  *(uint8_t *)((int)param_1 + 0x219) = 0;
  *(uint8_t *)((int)param_1 + 0x21a) = 0;
  *(uint8_t *)((int)param_1 + 0x21b) = 0;
  *(uint8_t *)((int)param_1 + 0x21c) = 0;
  *(uint8_t *)((int)param_1 + 0x21d) = 0;
  *(uint8_t *)((int)param_1 + 0x21e) = 0;
  *(uint8_t *)((int)param_1 + 0x21f) = 0;
  *(uint8_t *)((int)param_1 + 0x220) = 0;
  *(uint8_t *)((int)param_1 + 0x221) = 0;
  fill_byte_array((void *)((int)param_1 + 0x228),0,0x80);
  *(uint8_t *)((int)param_1 + 0x2a8) = 0;
  return;
}
