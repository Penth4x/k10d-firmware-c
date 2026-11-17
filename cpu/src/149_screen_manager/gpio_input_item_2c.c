/* @k10d gpio_input_item_2c @ 0x1046be3e
 * name: verified (structural evidence: runtime flag object: reg 0x50000107 mask 0x80; asserted, every status update sends the mode controller to mode 0)
 * unit: 149_screen_manager (unit names are model-proposed)
 * purpose:
 *   True when main-CPU input GPIO 0x50000107 bit 0x80 reads 0 (status item 0x2c).
 * summary:
 *   VERIFIED: runtime flag object: reg 0x50000107 mask 0x80; asserted, every status update
 *   sends the mode controller to mode 0
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint gpio_input_item_2c(int param_1)

{
  bool bVar1;
  
  bVar1 = test_flag_clear(*(void **)(param_1 + 0x6c));
  return (uint)bVar1;
}
