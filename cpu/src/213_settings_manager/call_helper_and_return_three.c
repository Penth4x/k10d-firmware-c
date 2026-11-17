/* @k10d call_helper_and_return_three @ 0x104af9b4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_and_return_three(int param_1)

{
  call_with_offset_c_field_104af9be(param_1);
  return 3;
}
