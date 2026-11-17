/* @k10d clear_byte_array_fields @ 0x000d4d4e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Masks specific bits in a 20-byte region and zeroes three adjacent globals.
 * summary:
 *   The function first calls zero_memory_bytes with arguments 0x55 and a pointer to
 *   DAT_0003cb80. It then iterates four times, masking bytes at offsets 0x3cbd5 through
 *   0x3cbd9 with 0xf2 and then 0xf, effectively zeroing all but the lowest nibble of each
 *   byte. Finally, it sets DAT_0003cbef, DAT_0003cc6c, and DAT_0003cc6f to 0 and calls
 *   clear_six_word_globals_000d41b0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_byte_array_fields(void)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  
  zero_memory_bytes(0x55,(void *)&DAT_0003cb80);
  iVar2 = 0;
  iVar3 = 4;
  do {
    pbVar1 = (byte *)(iVar2 + 0x3cbd5);
    *pbVar1 = *pbVar1 & 0xf2;
    *pbVar1 = *pbVar1 & 0xf;
    pbVar1 = (byte *)(iVar2 + 0x3cbd6);
    *pbVar1 = *pbVar1 & 0xf2;
    *pbVar1 = *pbVar1 & 0xf;
    pbVar1 = (byte *)(iVar2 + 0x3cbd7);
    *pbVar1 = *pbVar1 & 0xf2;
    *pbVar1 = *pbVar1 & 0xf;
    pbVar1 = (byte *)(iVar2 + 0x3cbd8);
    *pbVar1 = *pbVar1 & 0xf2;
    *pbVar1 = *pbVar1 & 0xf;
    pbVar1 = (byte *)(iVar2 + 0x3cbd9);
    *pbVar1 = *pbVar1 & 0xf2;
    *pbVar1 = *pbVar1 & 0xf;
    iVar2 = iVar2 + 5;
    iVar3 = iVar3 + -1;
  } while (0 < iVar3);
  DAT_0003cbef = 0;
  DAT_0003cc6c = 0;
  DAT_0003cc6f = 0;
  clear_six_word_globals_000d41b0();
  return;
}
