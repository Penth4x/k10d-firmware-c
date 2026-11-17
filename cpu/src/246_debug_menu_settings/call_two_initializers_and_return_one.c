/* @k10d call_two_initializers_and_return_one @ 0x104d87ce
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_two_initializers_and_return_one(void)

{
  return_r4_passthrough_104d800e();
  (*(code *)0x104d6dbc/*ROM*/)();
  return 1;
}
