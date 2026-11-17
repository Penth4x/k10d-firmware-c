/* @k10d write_nibble_to_ram_region @ 0x000e304e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Writes a 4-bit value to a byte in RAM at 0x3c000, masking existing bits based on the
 *   input index.
 * summary:
 *   The function takes an index (param_1) and a 4-bit value (derived from the low nibble of
 *   a global at 0x00000000). It calculates a byte offset (param_1 & 0xf) into the 0x3c000
 *   region. It reads the existing byte, masks out the relevant nibble (high or low
 *   depending on if param_1 >= 0x10), and writes the new value. It calls two unknown
 *   functions (toggle_ram_flag_bit5, empty_stub_000e33c4) which likely handle
 *   synchronization or hardware updates, and manipulates a global flag at DAT_00000400.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint write_nibble_to_ram_region(uint param_1)

{
  uint8_t uVar1;
  uint uVar2;
  byte bVar3;
  
  uVar1 = DAT_00000420;
  DAT_00000420 = 0;
  if ((int)param_1 < 0x10) {
    bVar3 = 0xf0;
  }
  else {
    bVar3 = 0xf;
  }
  uRam00000000 = (uRam00000000 & ~(0xffULL << 0)) | ((((uint64_t)((byte)_DAT_00000001 & 0xe0 | (byte)param_1 & 0x1f)) & 0xffULL) << 0);
  toggle_ram_flag_bit5();
  DAT_00000400 = DAT_00000400 & 0xf0;
  uRam00000000 = CONCAT13(((uint8_t)((uint64_t)(uRam00000000) >> 0)),_DAT_00000001) & 0xbfffffff;
  empty_stub_000e33c4();
  uVar2 = uRam00000000 & 0xf;
  uRam00000000 = uRam00000000 | 0x40000000;
  DAT_00000400 = DAT_00000400 | 0xf;
  if (0xf < (int)param_1) {
    uVar2 = uVar2 << 4;
  }
  *(byte *)((param_1 & 0xf) + 0x3c000) = *(byte *)((param_1 & 0xf) + 0x3c000) & bVar3 | (byte)uVar2;
  DAT_00000420 = uVar1;
  return uVar2;
}
