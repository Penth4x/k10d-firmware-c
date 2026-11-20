/* @k10d toggle_bit_18_in_dat_00000061 @ 0x000dae44
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Waits for two bits in DAT_00000060, then clears bit 18 of DAT_00000061.
 * summary:
 *   Calls write_initial_state_to_dat_block, then busy-waits until bit 3 (value 8) and bit 4
 *   (value 0x10) of DAT_00000060 are set. It then clears bit 18 of DAT_00000061 by ANDing
 *   with 0xfffcffff. The function also performs a byte swap between DAT_0003c217 and
 *   DAT_0003c215, though the final state of DAT_0003c217 is overwritten by the value of
 *   DAT_00000061.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void toggle_bit_18_in_dat_00000061(void)

{
  uint8_t uVar1;
  
  write_initial_state_to_dat_block();
  uVar1 = DAT_0003c217;
  DAT_0003c215 = (char)_DAT_00000061;
  do {
  } while ((DAT_00000060 & 8) == 0);
  do {
  } while ((DAT_00000060 & 0x10) == 0);
  DAT_0003c217 = (char)_DAT_00000061;
  _DAT_00000061 = CONCAT13(uVar1,(int3)_DAT_00000061) & 0xfffcffff;
  return;
}
