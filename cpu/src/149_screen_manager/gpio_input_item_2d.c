/* @k10d gpio_input_item_2d @ 0x1046be50
 * name: verified (structural evidence: runtime flag object: reg 0x50000107 mask 0x40)
 * unit: 149_screen_manager (unit names are model-proposed)
 * purpose:
 *   True when main-CPU input GPIO 0x50000107 bit 0x40 reads 0 (status item 0x2d).
 * summary:
 *   VERIFIED: runtime flag object: reg 0x50000107 mask 0x40
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint gpio_input_item_2d(int param_1)

{
  bool bVar1;
  
  bVar1 = test_flag_clear(*(void **)(param_1 + 0x70));
  return (uint)bVar1;
}
