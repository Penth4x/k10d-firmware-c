/* @k10d wait_for_flag_transition @ 0x000eef1c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Polls a status flag until it clears and then until it sets, calling a helper routine
 *   during each wait.
 * summary:
 *   The function saves and modifies a byte at DAT_00000401 (ORing with 0xdb) and a word at
 *   DAT_00000001. It calls FUN_000eef82 five times in a loop. It then sets bit 7 of
 *   DAT_0000000a and enters two polling loops: first waiting for bit 2 of DAT_00000005 to
 *   clear, then waiting for it to set, calling FUN_000eef82 in each iteration. Finally, it
 *   restores the original values of DAT_00000401, DAT_00000001, and clears bit 7 of
 *   DAT_0000000a.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wait_for_flag_transition(void)

{
  uint32_t uVar1;
  byte bVar2;
  byte bVar3;
  
  bVar2 = DAT_00000401;
  uVar1 = _DAT_00000001;
  DAT_00000401 = DAT_00000401 | 0xdb;
  bVar3 = 0;
  do {
    FUN_000eef82();
    bVar3 = bVar3 + 1;
  } while (bVar3 < 5);
  DAT_0000000a = DAT_0000000a | 0x80;
  while ((DAT_00000005 & 4) == 0) {
    FUN_000eef82();
  }
  while ((DAT_00000005 & 4) != 0) {
    FUN_000eef82();
  }
  DAT_00000401 = bVar2;
  _DAT_00000001 = CONCAT13((char)uVar1,(undefined3)_DAT_00000001);
  DAT_0000000a = DAT_0000000a & 0x7f;
  return;
}
