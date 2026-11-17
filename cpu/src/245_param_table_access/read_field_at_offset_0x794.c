/* @k10d read_field_at_offset_0x794 @ 0x104d6436
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 245_param_table_access (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_field_at_offset_0x794(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = read_array_element_104d63c8(param_1,*(uint32_t *)(param_1 + 0x794));
  return uVar1;
}
