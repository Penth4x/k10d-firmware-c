/* @k10d initialize_state_variables_000e0f4a @ 0x000e0f4a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Writes a set of small integer constants to global variables and calls several
 *   initialization routines.
 * summary:
 *   The function checks the lower two bits of DAT_00000484 to conditionally call
 *   busy_wait_on_mode_flag and set _DAT_00000064 to either 0x7f or 7. It unconditionally
 *   calls set_two_byte_state_pair_000d5828, wait_for_flag_and_store_byte, and
 *   poll_status_flag_and_set_ready, and writes specific values to globals like
 *   DAT_00000063, DAT_00000062, DAT_00000060, DAT_00000420, and DAT_00000067. It also
 *   clears bit 3 of bRam00000000 and conditionally increments DAT_0003c122 before calling
 *   reset_state_block_by_mode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char initialize_state_variables_000e0f4a(void)

{
  uint32_t uVar1;
  
  if ((DAT_00000484 & 3) == 2) {
    busy_wait_on_mode_flag(0x9e);
  }
  set_two_byte_state_pair_000d5828();
  DAT_00000063 = 0xb2;
  DAT_00000062 = 0x13;
  DAT_00000060 = 4;
  if ((DAT_00000484 & 3) == 2) {
    _DAT_00000064 = 0x7f;
  }
  else {
    _DAT_00000064 = 7;
  }
  DAT_00000420 = 6;
  DAT_00000067 = 2;
  bRam00000000 = bRam00000000 & 0xf7;
  if (((DAT_0003f505 & 4) == 0) && ((DAT_0003f505 & 8) == 0)) {
    uVar1 = 0xc9;
  }
  else {
    uVar1 = 200;
  }
  wait_for_flag_and_store_byte(uVar1);
  poll_status_flag_and_set_ready();
  if (DAT_0003c122 != '\0') {
    DAT_0003c122 = DAT_0003c122 + ' ';
    reset_state_block_by_mode(4);
  }
  return DAT_0003c122;
}
