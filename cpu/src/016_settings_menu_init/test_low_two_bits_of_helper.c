/* @k10d test_low_two_bits_of_helper @ 0x1036b028
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 016_settings_menu_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool test_low_two_bits_of_helper(void *param_1)

{
  uint uVar1;
  
  uVar1 = init_sram_block_and_store_param(param_1);
  return (uVar1 & 3) != 0;
}
