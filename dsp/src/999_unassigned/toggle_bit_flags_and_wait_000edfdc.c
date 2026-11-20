/* @k10d toggle_bit_flags_and_wait_000edfdc @ 0x000edfdc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Sets and clears specific bits in global flag variables while polling a status bit with
 *   a delay loop.
 * summary:
 *   The function saves the current state of several global bytes (DAT_00000004-0x0000000b,
 *   DAT_00000401-0x00000427), then modifies them by ORing and ANDing specific bit masks. It
 *   calls clear_bit2_of_dat_00000005, executes a fixed 5-iteration loop calling
 *   increment_counter_and_toggle_flags, and then polls DAT_00000005 bit 2 (value 4) in two
 *   separate while loops, calling increment_counter_and_toggle_flags during the wait.
 *   Finally, it restores the original values of the modified globals and calls
 *   FUN_000ed66c.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void toggle_bit_flags_and_wait_000edfdc(void)

{
  uint8_t uVar1;
  byte bVar2;
  uint8_t uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint8_t uVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  uint8_t uVar12;
  uint8_t uVar13;
  uint8_t uVar14;
  byte bVar15;
  
  uVar13 = DAT_00000427;
  uVar12 = DAT_00000426;
  bVar11 = DAT_00000424;
  bVar10 = DAT_00000422;
  bVar9 = DAT_00000407;
  uVar8 = DAT_00000406;
  bVar7 = DAT_00000404;
  bVar6 = DAT_00000402;
  bVar5 = DAT_00000401;
  bVar4 = DAT_0000000a;
  uVar3 = DAT_00000007;
  bVar2 = DAT_00000005;
  uVar1 = DAT_00000004;
  uVar14 = (uint8_t)_DAT_00000008;
  DAT_00000401 = DAT_00000401 | 0xfb;
  DAT_00000402 = DAT_00000402 | 0x78;
  DAT_00000006 = DAT_00000006 | 0x20;
  DAT_00000407 = DAT_00000407 | 0xf;
  DAT_00000422 = DAT_00000422 & 0x97;
  DAT_00000424 = DAT_00000424 & 0xf7;
  DAT_00000404 = DAT_00000404 | 8;
  DAT_0000000b = DAT_0000000b | 1;
  _DAT_0003c1e8 = 0;
  clear_bit2_of_dat_00000005();
  bVar15 = 0;
  do {
    increment_counter_and_toggle_flags();
    bVar15 = bVar15 + 1;
  } while (bVar15 < 5);
  DAT_0000000a = DAT_0000000a | 0x80;
  while ((DAT_00000005 & 4) == 0) {
    increment_counter_and_toggle_flags();
  }
  while ((DAT_00000005 & 4) != 0) {
    increment_counter_and_toggle_flags();
  }
  DAT_0000000a = DAT_0000000a & 0x7f;
  FUN_000ed66c();
  DAT_0000000b = DAT_0000000b & 0xfe;
  DAT_00000401 = bVar5;
  DAT_00000001 = uVar1;
  DAT_00000402 = bVar6;
  DAT_00000002 = bVar2;
  DAT_00000422 = bVar10;
  DAT_00000404 = bVar7;
  DAT_00000004 = uVar3;
  DAT_00000424 = bVar11;
  DAT_00000406 = uVar8;
  DAT_00000006 = uVar14;
  DAT_00000426 = uVar12;
  DAT_00000407 = bVar9;
  DAT_00000007 = bVar4;
  DAT_00000427 = uVar13;
  return;
}
