/* @k10d map_mode_code_to_index_104bb5c4 @ 0x104bb5c4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_mode_code_to_index_104bb5c4(int param_1)

{
  uint32_t uVar1;
  
  if (param_1 == 1) {
    uVar1 = 0;
  }
  else if (param_1 == 8) {
    uVar1 = 1;
  }
  else if (param_1 == 3) {
    uVar1 = 2;
  }
  else if (param_1 == 6) {
    uVar1 = 3;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
