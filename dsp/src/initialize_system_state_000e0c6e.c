/* @k10d initialize_system_state_000e0c6e @ 0x000e0c6e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Resets multiple global state variables and calls initialization routines to prepare the
 *   system for operation.
 * summary:
 *   The function calls write_masked_field_and_call_two_routines with specific parameters,
 *   conditionally calls busy_wait_on_mode_flag based on DAT_00000484, and invokes
 *   FUN_000e32ec and toggle_ram_flag_bit5. It then sets several global variables
 *   (DAT_00000067, DAT_00000063, DAT_00000062, DAT_00000060, _DAT_00000064) to specific
 *   values and modifies bit flags in DAT_00000420, bRam00000000, and DAT_00000400. The
 *   logic branches on the lower two bits of DAT_00000484 to determine specific register
 *   values.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void initialize_system_state_000e0c6e(void)

{
  uint8_t uVar1;
  
  write_masked_field_and_call_two_routines(0x17,0x30);
  write_masked_field_and_call_two_routines(0x17,0xf0);
  if ((DAT_00000484 & 3) == 2) {
    busy_wait_on_mode_flag(0x41);
  }
  FUN_000e32ec(8);
  write_masked_field_and_call_two_routines(0x17,0xe0);
  uVar1 = DAT_00000420;
  DAT_00000420 = 0;
  bRam00000000 = bRam00000000 & 0xe0 | 0x1f;
  toggle_ram_flag_bit5();
  DAT_00000067 = 0;
  DAT_00000063 = 0xb2;
  DAT_00000062 = 0x13;
  DAT_00000060 = 4;
  if ((DAT_00000484 & 3) == 2) {
    _DAT_00000064 = 0xff;
    DAT_00000420 = uVar1;
    busy_wait_on_mode_flag(0xdc);
  }
  else {
    _DAT_00000064 = 0xf;
  }
  DAT_00000420 = 6;
  DAT_00000067 = 2;
  DAT_00000400 = DAT_00000400 & 0xfe | 4;
  bRam00000000 = bRam00000000 & 0xbf;
  return;
}
