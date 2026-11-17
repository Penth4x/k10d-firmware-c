/* @k10d store_second_field_result @ 0x1051ce6e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 276_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t store_second_field_result(uint32_t *param_1)

{
  uint32_t uVar1;
  
  uVar1 = read_struct_field_by_index_104a2a78((void *)*param_1,2);
  param_1[0xc] = uVar1;
  return 1;
}
