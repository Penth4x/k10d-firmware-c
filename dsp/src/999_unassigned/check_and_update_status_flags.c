/* @k10d check_and_update_status_flags @ 0x000f2a2c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Checks two specific bits in status registers and, if set, executes a sequence of
 *   hardware operations and updates a result byte.
 * summary:
 *   The function first checks if bit 5 of DAT_0003c126 and bit 6 of DAT_0003c143 are set.
 *   If both conditions are met, it calls a series of functions
 *   (write_masked_field_and_call_two_routines, busy_wait_on_mode_flag, etc.) with various
 *   parameters, likely configuring or triggering hardware components. It then reads values
 *   from DAT_0003c100 and DAT_0003c10f, processes them via subtract_popcount, and sets
 *   DAT_0003c122 to 0x11 if the results are non-zero. Finally, it sets bit 6 of
 *   DAT_0003c143 and returns the value of DAT_0003c122. The function also preserves the
 *   value of DAT_00000420 across the operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t check_and_update_status_flags(void)

{
  uint8_t uVar1;
  int iVar2;
  
  uVar1 = DAT_00000420;
  if (((DAT_0003c126 & 0x20) != 0) && ((DAT_0003c143 & 0x40) != 0)) {
    write_masked_field_and_call_two_routines(7,DAT_0003c008 | 0xc);
    write_masked_field_and_call_two_routines(0x17,0xf0);
    if ((DAT_00000484 & 3) == 2) {
      busy_wait_on_mode_flag(0x41);
    }
    FUN_000e32ec(8);
    write_masked_field_and_call_two_routines(0x17,0xe0);
    busy_wait_on_mode_flag(0x14);
    update_ram_byte_bits(0x1f);
    write_ram_config_bytes();
    call_subroutine_with_0x1e();
    fill_buffer_with_repeated_byte((void *)&DAT_0003c100,0x20);
    fill_buffer_with_repeated_byte((void *)&DAT_0003c140,8);
    iVar2 = subtract_popcount(DAT_0003c100 >> 3,2);
    if ((iVar2 != 0) || (iVar2 = subtract_popcount(DAT_0003c10f & 7,2), iVar2 != 0)) {
      DAT_0003c122 = 0x11;
    }
    configure_two_parameter_state(1,0);
    DAT_0003c143 = DAT_0003c143 | 0x40;
  }
  DAT_00000420 = uVar1;
  return DAT_0003c122;
}
