/* @k10d gpio_input_item_2b @ 0x1046be2c
 * name: verified (structural evidence: decomp test_flag_clear(screen mgr +0x68); flag object resolved at runtime: reg 0x50000107 mask 0x20)
 * unit: 149_screen_manager (unit names are model-proposed)
 * purpose:
 *   True when main-CPU input GPIO 0x50000107 bit 0x20 reads 0 (reported as status item
 *   0x2b).
 * summary:
 *   VERIFIED: decomp test_flag_clear(screen mgr +0x68); flag object resolved at runtime:
 *   reg 0x50000107 mask 0x20
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint gpio_input_item_2b(int param_1)

{
  bool bVar1;
  
  bVar1 = test_flag_clear(*(void **)(param_1 + 0x68));
  return (uint)bVar1;
}
