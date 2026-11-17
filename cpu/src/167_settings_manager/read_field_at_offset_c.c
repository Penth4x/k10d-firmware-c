/* @k10d read_field_at_offset_c @ 0x10476bd0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_field_at_offset_c(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = read_bounded_array_element_10477358(param_1 + 0xc, __frv_reg_unset(5));
  return uVar1;
}
