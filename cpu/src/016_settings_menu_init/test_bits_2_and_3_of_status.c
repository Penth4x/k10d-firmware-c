/* @k10d test_bits_2_and_3_of_status @ 0x1036b010
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 016_settings_menu_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool test_bits_2_and_3_of_status(void *param_1)

{
  uint uVar1;
  
  uVar1 = init_sram_block_and_store_param(param_1);
  return (uVar1 & 0xc) != 0;
}
