/* @k10d update_byte_flags_from_condition_bits @ 0x000f6742
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * purpose:
 *   Modifies byte flags at 0x3c4b3-0x3c4bf based on condition bits in 0x3c003, 0x3c028, and
 *   0x3c02f.
 * summary:
 *   The function calls clear_state_flags_and_set_bit and clears bit 3 of DAT_0003c4bf. It
 *   branches on bit 3 of DAT_0003f326: if clear, it calls
 *   or_bytes_into_four_globals_000f6ad6 three times; if set, it sets bit 7 of DAT_0003c4bf
 *   and potentially bits in DAT_0003c4be based on bits 0-1 of DAT_0003c028, then calls
 *   or_bytes_into_four_globals_000f6a7a twice. Finally, if bit 4 of DAT_0003c003 is set, it
 *   performs bitwise AND/OR operations on DAT_0003c4b3, DAT_0003c4b7, and DAT_0003c4bf,
 *   conditioned on bits 0-2 of DAT_0003c02f and bits 0-1 of DAT_0003c028.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_byte_flags_from_condition_bits(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  
  clear_state_flags_and_set_bit();
  DAT_0003c4bf = DAT_0003c4bf & 0xf7;
  if ((DAT_0003f326 & 8) == 0) {
    or_bytes_into_four_globals_000f6ad6(4,4,0xc,0);
    or_bytes_into_four_globals_000f6ad6(0,0x10,0,0x10);
    or_bytes_into_four_globals_000f6ad6(0xc0,0x40,0,0);
  }
  else {
    if (((DAT_0003c028 & 2) == 0) && ((DAT_0003c028 & 1) == 0)) {
      DAT_0003c4bf = DAT_0003c4bf | 0x80;
    }
    else if (((DAT_0003c028 & 2) == 0) && ((DAT_0003c028 & 1) != 0)) {
      DAT_0003c4bf = DAT_0003c4bf | 0x80;
      DAT_0003c4be = DAT_0003c4be | 2;
    }
    else if (((DAT_0003c028 & 2) != 0) && ((DAT_0003c028 & 1) == 0)) {
      DAT_0003c4bf = DAT_0003c4bf | 0x80;
      DAT_0003c4be = DAT_0003c4be | 6;
    }
    or_bytes_into_four_globals_000f6a7a(0x30,0,0x30,0x10);
    or_bytes_into_four_globals_000f6a7a(0xc0,0xc0,0,0x40);
  }
  bVar1 = DAT_0003c4b7;
  if ((DAT_0003c003 & 0x10) != 0) {
    bVar1 = DAT_0003c4b3 | 1;
    bVar2 = DAT_0003c4b7 | 5;
    bVar3 = DAT_0003c4bf | 1;
    if (((DAT_0003c02f & 4) != 0) && (bVar1 = DAT_0003c4b3 & 0xfe, (DAT_0003c028 & 2) == 0)) {
      bVar2 = DAT_0003c4b7 & 0xfa;
      bVar3 = DAT_0003c4bf & 0xfe;
    }
    DAT_0003c4bf = bVar3;
    DAT_0003c4b7 = bVar2;
    DAT_0003c4b3 = bVar1;
    bVar1 = DAT_0003c4b7;
    if ((DAT_0003c02f & 2) != 0) {
      DAT_0003c4b3 = DAT_0003c4b3 & 0xfe;
      bVar1 = DAT_0003c4b7 & 0xfe;
      if ((DAT_0003c028 & 1) == 0) {
        DAT_0003c4bf = DAT_0003c4bf & 0xfe;
        bVar1 = DAT_0003c4b7 & 0xfa;
      }
    }
    DAT_0003c4b7 = bVar1;
    bVar1 = DAT_0003c4b7;
    if ((DAT_0003c02f & 1) != 0) {
      DAT_0003c4b3 = DAT_0003c4b3 & 0xfe;
      bVar1 = DAT_0003c4b7 & 0xfe;
      if ((DAT_0003c028 & 1) == 0) {
        DAT_0003c4bf = DAT_0003c4bf & 0xfe;
        bVar1 = DAT_0003c4b7 & 0xfa;
      }
    }
  }
  DAT_0003c4b7 = bVar1;
  return;
}
