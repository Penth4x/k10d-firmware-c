/* @k10d update_state_and_wait_flag @ 0x000e1a34
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Updates two global state variables and waits for a flag bit to be set.
 * summary:
 *   The function modifies the global variables at 0x62 and 0x61, storing param_1 into the
 *   low byte of 0x61. It calls wait_if_flag_is_two and set_two_byte_state_pair_000d5828. It
 *   then enters a loop waiting for bit 2 of DAT_00000057 to be set, or checks bit 4 of
 *   DAT_00000060. Finally, it sets DAT_0003c122 to 3 and updates DAT_00000062 before
 *   calling wait_if_flag_is_two again.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_state_and_wait_flag(uint8_t param_1)

{
  _DAT_00000062 = CONCAT12(0x13,_DAT_00000063);
  wait_if_flag_is_two();
  DAT_0003c215 = (uint8_t)_DAT_00000061;
  _DAT_00000061 = CONCAT13(param_1,_DAT_00000062);
  set_two_byte_state_pair_000d5828();
  do {
    if ((DAT_00000060 & 0x10) != 0) goto LAB_000e1a7c;
  } while ((DAT_00000057 & 4) == 0);
  DAT_0003c122 = 3;
LAB_000e1a7c:
  wait_if_flag_is_two();
  _DAT_00000062 = CONCAT12(0x10,_DAT_00000063);
  return;
}
