/* @k10d read_field_at_offset_0x14 @ 0x10484d60
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 177_module_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_field_at_offset_0x14(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = read_offset_0x18_field(param_1 + 0x14);
  return uVar1;
}
