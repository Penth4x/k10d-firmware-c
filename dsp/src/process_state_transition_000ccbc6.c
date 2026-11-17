/* @k10d process_state_transition_000ccbc6 @ 0x000ccbc6
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Updates state flags and calls a sequence of handlers based on the value of DAT_0003c128
 *   and param_1.
 * summary:
 *   The function checks bit 6 of DAT_0003c128. If clear, it restores saved state from
 *   DAT_0003ce02/10, and if param_1 is non-zero, it modifies bits in DAT_0003ce02, stores
 *   param_1 to _DAT_0003ce32, and calls a series of functions (clear_bits_and_shift_global,
 *   update_state_flags_and_offset, FUN_000cc4cc, update_state_counters, FUN_000cc5a8,
 *   FUN_000cc938, clear_bit1_of_dat_0003ce01) while polling DAT_0003ce01 and DAT_0000005f.
 *   If bit 6 is set, it calls check_flag_and_call_subroutine_000f6eac and loops calling
 *   check_and_update_byte_flag and check_status_and_return_code until a condition is met,
 *   then clears bit 1 of DAT_0003ce01.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void process_state_transition_000ccbc6(int param_1)

{
  byte bVar1;
  uint8_t uVar2;
  int iVar3;
  
  uVar2 = DAT_0003ce10;
  bVar1 = DAT_0003ce02;
  if ((DAT_0003c128 & 0x40) == 0) {
    DAT_0003ce02 = bVar1;
    DAT_0003ce10 = uVar2;
    if (param_1 != 0) {
      DAT_0003ce02 = (byte)((((DAT_0003ce02 & 0x3f) >> 4 ^ 0xffffffff) & 3) << 2) |
                     DAT_0003ce02 & 0xf3;
      clear_bits_and_shift_global();
      _DAT_0003ce32 = (uint16_t)param_1;
      update_state_flags_and_offset(param_1);
      FUN_000cc4cc();
      iVar3 = update_state_counters();
      if (iVar3 == 0) {
        FUN_000cc5a8();
      }
      FUN_000cc938();
      do {
        if ((DAT_0003ce01 & 1) == 0) break;
      } while ((DAT_0000005f & 4) == 0);
      clear_bit1_of_dat_0003ce01();
      _DAT_0003cc6a = 0;
      if (((DAT_0003ce00 & 0x40) != 0) && (DAT_0003ce10 = uVar2, (DAT_0003ce04 & 8) != 0)) {
        DAT_0003ce01 = DAT_0003ce01 & 0xf7;
        DAT_0003ce02 = bVar1;
      }
    }
  }
  else {
    check_flag_and_call_subroutine_000f6eac();
    do {
      if ((DAT_0003c122 == '\b') || (DAT_0003c122 == '\t')) break;
      check_and_update_byte_flag();
      iVar3 = check_status_and_return_code();
    } while (iVar3 != 7);
    DAT_0003ce01 = DAT_0003ce01 & 0xf7;
  }
  return;
}
