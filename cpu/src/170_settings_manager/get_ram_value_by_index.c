/* @k10d get_ram_value_by_index @ 0x1047f04e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 170_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_ram_value_by_index(uint32_t param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = uRam80010010;
  if (((param_2 != 0xc) && (uVar1 = uRam80010014, param_2 != 0x10)) &&
     (uVar1 = uRam80010018, param_2 != 0x20)) {
    uVar1 = 0;
  }
  return uVar1;
}
