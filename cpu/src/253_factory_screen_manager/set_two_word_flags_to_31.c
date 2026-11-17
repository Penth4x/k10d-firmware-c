/* @k10d set_two_word_flags_to_31 @ 0x104e722a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_two_word_flags_to_31(int param_1)

{
  forward_three_args_to_helper_10459d64((void *)(param_1 + 0x2c),1,0x1f);
  forward_three_args_to_helper_10459d64((void *)(param_1 + 0x34),1,0x1f);
  return 1;
}
