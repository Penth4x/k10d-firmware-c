/* @k10d build_status_word_and_dispatch @ 0x000db11a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Constructs a status word from global flags and calls a sequence of handler functions.
 * summary:
 *   The function reads DAT_0003c493 to determine if it is 8 or 10, setting bits in a local
 *   status word. It also checks DAT_0003c396 and DAT_0003f3e1 to set additional bits and
 *   potentially call set_two_byte_state_flags and
 *   update_status_flags_and_counters_000de274. It stores the constructed status word to the
 *   stack and calls FUN_000db218, busy_wait_on_mode_flag, and set_ram_flag_bits, with
 *   conditional second calls to busy_wait_on_mode_flag and set_ram_flag_bits if the initial
 *   condition was met.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void build_status_word_and_dispatch(void)

{
  uint uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uintptr_t sp;
  uint8_t *puVar4;
  uint in_ps;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  
  bVar10 = 0;
  bVar9 = 0;
  puVar4 = &stack0xffffffec;
  uVar3 = 0;
  uVar2 = clamp_and_scale_value_000c4a26(1);
  uVar1 = (uint)DAT_0003c493;
  bVar5 = uVar1 < 8;
  bVar6 = SBORROW4(uVar1,8);
  if (uVar1 != 8) {
    uVar1 = (uint)DAT_0003c493;
    bVar5 = uVar1 < 10;
    bVar6 = SBORROW4(uVar1,10);
    if (uVar1 != 10) goto LAB_000db14a;
  }
  uVar3 = clamp_and_scale_value_000c4a26(2);
LAB_000db14a:
  bVar8 = 0;
  bVar7 = 0;
  if ((DAT_0003c396 & 0x10) == 0) {
    bVar8 = 0;
    bVar7 = (DAT_0003f3e1 & 0x40) == 0;
    if ((bool)bVar7) {
      _DAT_000000d8 = CONCAT31(_DAT_000000d8,0x11);
      _DAT_0003c262 = (uint16_t)_DAT_000000d8;
      set_two_byte_state_flags();
      update_status_flags_and_counters_000de274(_DAT_0003c262);
    }
  }
  *(uint *)(puVar4 + -4) =
       in_ps & 0xffffffc0 | (uint)(bVar10 & 1) * 0x20 | (uint)(bVar9 & 1) * 0x10 |
       (uint)(bVar8 & 1) * 8 | (uint)(bVar7 & 1) * 4 | (uint)(bVar6 & 1) * 2 | (uint)(bVar5 & 1);
  FUN_000db218();
  busy_wait_on_mode_flag(uVar2);
  set_ram_flag_bits();
  if ((DAT_0003c493 == 8) || (DAT_0003c493 == 10)) {
    busy_wait_on_mode_flag(uVar3);
    set_ram_flag_bits();
  }
  return;
}
