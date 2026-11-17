/* @k10d write_two_word_pair_to_object @ 0x1048ff78
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 193_sr_state_machine (unit names are model-proposed)
 * purpose:
 *   Writes a 16-bit value and a 32-bit value derived from a lookup table to an object via
 *   helper functions.
 * summary:
 *   The function reads a pointer from offset 0x14 of param_1. It calls an unknown function
 *   at 0x10445b00 with this pointer, then calls store_param2_to_dat_400403d4 with the
 *   pointer and a 16-bit value constructed from param_2 and the low byte of the previous
 *   call's return value. It then constructs a 32-bit value: if param_3 is 0, it is 0;
 *   otherwise, it is a 24-bit value read from the table at DAT_105984dc indexed by (param_4
 *   & 0xffff) * 3, with the top bit set. Finally, it calls an unknown function at
 *   0x1044573c with the pointer and this 32-bit value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_word_pair_to_object(int param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (*(code *)0x10445b00/*ROM*/)(*(uint32_t *)(param_1 + 0x14));
  store_param2_to_dat_400403d4(*(uint32_t *)(param_1 + 0x14),uVar2 & 0xff | (param_2 & 0xff) << 8);
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = (param_4 & 0xffff) * 3;
    uVar2 = CONCAT21(CONCAT11((&DAT_105984dc/*ROM*/)[iVar1],(&DAT_105984de/*ROM*/)[iVar1]),(&DAT_105984dd/*ROM*/)[iVar1])
            | 0x80000000/*SDRAM*/;
  }
  (*(code *)0x1044573c/*ROM*/)(*(uint32_t *)(param_1 + 0x14),uVar2);
  return;
}
