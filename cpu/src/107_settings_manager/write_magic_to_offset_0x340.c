/* @k10d write_magic_to_offset_0x340 @ 0x104282b8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 107_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_magic_to_offset_0x340(int param_1,int param_2)

{
  uint32_t uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0xa55a5aa5;
  }
  *(uint32_t *)(param_1 + 0x340) = uVar1;
  return;
}
