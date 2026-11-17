/* @k10d populate_global_state_from_index @ 0x000d49c6
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * purpose:
 *   Copies a 160-byte block to the stack and populates a series of global variables with
 *   derived values based on param_1.
 * summary:
 *   The function initializes a local 160-byte array by copying data from 0xfb368. It calls
 *   load_two_byte_pair_from_table with param_1 to obtain a base pointer, then uses this
 *   pointer to read various bytes and words into global variables (DAT_0003ccxx,
 *   DAT_0003cdxx). It calculates an offset (iVar5) based on specific ranges of param_1
 *   (0,3,6; 0xb,0xd,0xf; 0x11-0x13) and adds it to values from the local array to update
 *   globals. It also calls FUN_000d42d6 with a value derived from the base pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void populate_global_state_from_index(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uintptr_t sp;
  int aiStack_bc [41];
  
  iVar3 = 0xa0;
  do {
    iVar5 = iVar3 + -4;
    bVar1 = 3 < iVar3;
    *(uint32_t *)((int)aiStack_bc + iVar3) = *(uint32_t *)(iVar3 + 0xfb368);
    iVar3 = iVar5;
  } while (bVar1 && iVar5 != 0);
  _DAT_0003ce82 = _DAT_0003ce82 | (&DAT_000fb008)[(byte)(&DAT_000fb334)[param_1]];
  iVar3 = load_two_byte_pair_from_table(param_1);
  DAT_0003cc93 = *(uint8_t *)(iVar3 + 0x3f464);
  DAT_0003cd47 = (&DAT_0003f274)[iVar3];
  if (((param_1 == 0) || (param_1 == 3)) || (param_1 == 6)) {
    iVar5 = 0x26 - (uint)DAT_0003cd47;
  }
  else if (((param_1 == 0xb) || (param_1 == 0xd)) || (param_1 == 0xf)) {
    iVar5 = 0x2c - (uint)DAT_0003cd47;
  }
  else if (((param_1 == 0x11) || (param_1 == 0x12)) || (param_1 == 0x13)) {
    iVar5 = 0x2c - (uint)(DAT_0003cd47 >> 1);
  }
  else {
    iVar5 = 0;
  }
  _DAT_0003cc88 = aiStack_bc[param_1 * 2 + 1] + iVar5 * 2;
  _DAT_0003cc8c = aiStack_bc[param_1 * 2 + 2] + iVar5 * 2;
  param_1 = param_1 * 2;
  _DAT_0003cd40 = *(uint16_t *)(param_1 + 0x3f1c0);
  DAT_0003cd2a = *(uint8_t *)(param_1 + 0x3f1e8);
  DAT_0003cd2b = *(uint8_t *)(param_1 + 0x3f1e9);
  if (((DAT_0003cbef & 0x20) != 0) || (cVar4 = DAT_0003f1bd, (DAT_0003c4dd & 4) != 0)) {
    cVar4 = '\0';
  }
  DAT_0003cd48 = *(char *)(iVar3 + 0x3f268) + cVar4;
  DAT_0003cd49 = *(char *)(iVar3 + 0x3f25c) + cVar4;
  DAT_0003cd4c = *(uint8_t *)(iVar3 + 0x3f408);
  _DAT_0003cd4a = (ushort)*(byte *)(iVar3 + 0x3f414) << 2;
  DAT_0003cd43 = *(uint8_t *)(iVar3 + 0x3f434);
  DAT_0003cd42 = *(uint8_t *)(iVar3 + 0x3f428);
  iVar5 = (uint)(byte)(&DAT_000fb35c)[iVar3] * 2;
  _DAT_0003cc2a = *(uint16_t *)(&DAT_0003cc70 + iVar5);
  _DAT_0003cc2e = *(uint16_t *)(&DAT_0003cc78 + iVar5);
  _DAT_0003cd7a = FUN_000d42d6(*(uint8_t *)((byte)(&DAT_000fb35c)[iVar3] + 0x3f1b6));
  bVar2 = DAT_0003cd47 >> 1;
  DAT_0003cd4d = bVar2 - 2;
  DAT_0003cd4e = bVar2 - 7;
  DAT_0003cd4f = bVar2 - 6;
  return;
}
