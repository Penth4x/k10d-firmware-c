/* @k10d process_mode_transition @ 0x000e7714
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * purpose:
 *   Handles state changes based on a mode parameter, updating flags and calling
 *   initialization routines.
 * summary:
 *   The function checks a status flag in DAT_0003c00e. If bit 6 is clear, it performs a
 *   full initialization sequence involving multiple flag updates and calls to
 *   write_byte_to_ram_and_call_two_routines and write_masked_field_and_call_two_routines.
 *   If bit 6 is set, it compares the lower nibble of DAT_0003c00e with param_1 and updates
 *   state if they differ. It returns 0, 1, or 2 indicating the action taken.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t process_mode_transition(uint param_1)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if ((_DAT_0003c00e & 0x40) == 0) {
    DAT_00000006 = DAT_00000006 | 0x70;
    write_byte_to_ram_and_call_two_routines(9,0);
    DAT_00000006 = DAT_00000006 | 0x80;
    DAT_0000040c = DAT_0000040c & 0xe1;
    DAT_0000042c = 0x1e;
    if ((DAT_00000484 & 3) == 2) {
      DAT_000000ac = 0xb;
    }
    else {
      DAT_000000ac = 8;
    }
    DAT_00000405 = DAT_00000405 & 0x7f;
    DAT_00000402 = DAT_00000402 & 0xef;
    write_masked_field_and_call_two_routines(0xc,DAT_0003c00d | 4);
    if ((DAT_0000000a & 8) == 0) {
      DAT_0000000a = DAT_0000000a | 8;
    }
    write_byte_to_ram_and_call_two_routines(0xd,0x289);
    write_masked_field_and_call_two_routines(0x1d,0x2c0);
    DAT_0000000b = DAT_0000000b | 8;
    DAT_000000ac = 0xb;
    if ((DAT_0003c021 & 0x80) != 0) {
      DAT_0000000d = DAT_0000000d | 1;
    }
    busy_wait_on_mode_flag(0x14);
    infinite_loop_000e79ec();
    write_masked_field_and_call_two_routines(0xd,param_1);
    call_subroutine_with_arg_5();
    DAT_00000004 = DAT_00000004 & 0x8f;
    set_flags_and_call_helpers();
    initialize_subsystem_once();
    uVar1 = 2;
  }
  else if ((_DAT_0003c00e & 0xf) != param_1) {
    write_masked_field_and_call_two_routines(0xd,(uint)(_DAT_0003c00e & 0x10) | param_1 & 0xffff);
    uVar1 = 1;
  }
  return uVar1;
}
