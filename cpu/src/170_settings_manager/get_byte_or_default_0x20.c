/* @k10d get_byte_or_default_0x20 @ 0x1047ee68
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 170_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t get_byte_or_default_0x20(int param_1)

{
  uint8_t uVar1;
  
  if (*(short *)(param_1 + 0x28) == 0x20) {
    uVar1 = *(uint8_t *)(param_1 + 0x1c);
  }
  else {
    uVar1 = 0x20;
  }
  return uVar1;
}
