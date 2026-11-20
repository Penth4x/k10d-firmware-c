/* @k10d clear_status_flags_and_reset_counters @ 0x000e166c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Clears specific bits in global status registers and resets several counter/flag
 *   variables to zero.
 * summary:
 *   The function performs a series of bitwise AND operations on global variables
 *   (DAT_00000400, bRam00000000) to clear specific bits (0x05 and 0x40 respectively). It
 *   also sets several other global variables (DAT_00000067, DAT_00000420, DAT_00000060) to
 *   0 and initializes DAT_00000063 and DAT_00000062 to specific values. It calls
 *   FUN_000e32ec and update_ram_byte_bits with constant arguments, likely to reset internal
 *   state or hardware registers. The logic involving DAT_00000484 and the stack appears to
 *   be a complex bit-manipulation or state-check sequence that writes a result to
 *   _DAT_0003c014, but the primary observable side effect is the clearing of flags in the
 *   global variables.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clear_status_flags_and_reset_counters(void)

{
  uint uVar1;
  uintptr_t sp;
  uint8_t *puVar2;
  uint8_t *puVar3;
  uint in_ps;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  
  bVar9 = 0;
  bVar8 = 0;
  puVar2 = &stack0xfffffff8;
  uVar1 = DAT_00000484 & 3;
  bVar4 = uVar1 < 2;
  bVar5 = SBORROW4(uVar1,2);
  bVar7 = (int)(uVar1 - 2) < 0;
  bVar6 = uVar1 == 2;
  puVar3 = &stack0xfffffff8;
  if ((bool)bVar6) {
    busy_wait_on_mode_flag(0xa5);
    puVar3 = puVar2;
  }
  *(uint *)(puVar3 + -4) =
       in_ps & 0xffffffc0 | (uint)(bVar9 & 1) * 0x20 | (uint)(bVar8 & 1) * 0x10 |
       (uint)(bVar7 & 1) * 8 | (uint)(bVar6 & 1) * 4 | (uint)(bVar5 & 1) * 2 | (uint)(bVar4 & 1);
  _DAT_0003c014 = *(uint32_t *)(puVar3 + -4);
  FUN_000e32ec(0x10);
  update_ram_byte_bits(0x1f);
  DAT_00000067 = 0;
  DAT_00000063 = 0xb8;
  DAT_00000062 = 0x13;
  DAT_00000060 = 0;
  DAT_00000420 = 0;
  DAT_00000400 = DAT_00000400 & 0xfa;
  bRam00000000 = bRam00000000 & 0xbf;
  return;
}
