/* @k10d toggle_bit_flags_and_wait_000ee246 @ 0x000ee246
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Saves state, toggles specific bits in multiple global variables, calls helper
 *   functions, waits for a condition, and restores state.
 * summary:
 *   The function saves the values of several global variables (DAT_00000004-0000000c,
 *   DAT_00000401-0000042c) to local variables. It then modifies these globals by clearing
 *   or setting specific bits (e.g., DAT_00000401 & 0xbf, DAT_00000403 | 0xfc). It calls
 *   clear_bit_5_of_dat_00000005, then loops calling increment_counter_and_update_registers
 *   five times. It sets a bit in DAT_0000000a, waits in a loop calling
 *   increment_counter_and_update_registers until bit 2 of DAT_00000005 is set, then waits
 *   until it is cleared. Finally, it calls FUN_000ed6c8 and restores all saved global
 *   values.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void toggle_bit_flags_and_wait_000ee246(void)

{
  uint uVar1;
  uint8_t uVar2;
  uint8_t uVar3;
  uint8_t uVar4;
  uint8_t uVar5;
  uint8_t uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  uint8_t uVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  uint8_t uVar16;
  byte bVar17;
  
  bVar15 = DAT_0000042c;
  bVar14 = DAT_00000425;
  bVar13 = DAT_00000424;
  bVar12 = DAT_0000040c;
  uVar11 = DAT_00000406;
  bVar10 = DAT_00000405;
  bVar9 = DAT_00000404;
  bVar8 = DAT_00000403;
  bVar7 = DAT_00000401;
  uVar6 = DAT_00000009;
  uVar5 = DAT_00000008;
  uVar4 = DAT_00000007;
  uVar3 = DAT_00000006;
  uVar2 = DAT_00000004;
  uVar1 = (uint)_DAT_0000000c >> 0x18;
  uVar16 = (uint8_t)_DAT_0000000c;
  DAT_00000401 = DAT_00000401 & 0xbf;
  DAT_00000403 = DAT_00000403 | 0xfc;
  DAT_00000425 = DAT_00000425 & 0x5f;
  DAT_00000405 = DAT_00000405 | 0xa0;
  DAT_0000042c = DAT_0000042c & 0xe7;
  DAT_0000040c = DAT_0000040c | 0x18;
  DAT_00000424 = DAT_00000424 & 0xf5;
  DAT_00000404 = DAT_00000404 | 8;
  DAT_0000000b = DAT_0000000b | 2;
  _DAT_0003c1e8 = 0;
  clear_bit_5_of_dat_00000005();
  bVar17 = 0;
  do {
    increment_counter_and_update_registers();
    bVar17 = bVar17 + 1;
  } while (bVar17 < 5);
  DAT_0000000a = DAT_0000000a | 0x80;
  while ((DAT_00000005 & 4) == 0) {
    increment_counter_and_update_registers();
  }
  while ((DAT_00000005 & 4) != 0) {
    increment_counter_and_update_registers();
  }
  DAT_0000000a = DAT_0000000a & 0x7f;
  FUN_000ed6c8();
  DAT_0000000b = DAT_0000000b & 0xfd;
  DAT_00000401 = bVar7;
  DAT_00000001 = uVar2;
  DAT_00000403 = bVar8;
  DAT_00000003 = uVar3;
  DAT_00000404 = bVar9;
  DAT_00000004 = uVar4;
  DAT_00000424 = bVar13;
  DAT_00000405 = bVar10;
  DAT_00000005 = uVar5;
  DAT_00000425 = bVar14;
  DAT_00000406 = uVar11;
  DAT_00000006 = uVar6;
  DAT_00000009 = (char)uVar1;
  DAT_0000040c = bVar12;
  _DAT_0000000c = CONCAT13(uVar16,_DAT_0000000d);
  DAT_0000042c = bVar15;
  return;
}
