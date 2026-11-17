/* @k10d toggle_two_subsystems_on_param @ 0x100f16b2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_two_subsystems_on_param(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    set_bit_2_in_dat_800482d4_100f1d40(0);
    set_bit_in_dat_800482d4_100f1dce(0);
  }
  else {
    set_bit_in_dat_800482d4_100f1dce(1);
    iVar1 = test_bit_1_of_dat_800482d4_2c();
    if (iVar1 != 0) {
      set_bit_2_in_dat_800482d4_100f1d40(1);
    }
  }
  return;
}
