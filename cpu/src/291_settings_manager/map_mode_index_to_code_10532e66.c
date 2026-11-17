/* @k10d map_mode_index_to_code_10532e66 @ 0x10532e66
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 291_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_mode_index_to_code_10532e66(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = 0xffffffff;
  switch(*(uint32_t *)(param_1 + 0x20)) {
  case 0:
    uVar1 = 0x11;
    break;
  case 1:
    uVar1 = 0x13;
    break;
  case 2:
    uVar1 = 0x15;
    break;
  case 4:
    uVar1 = 0x1f;
    break;
  case 5:
    uVar1 = 0x23;
    break;
  case 6:
    uVar1 = 0x19;
    break;
  case 7:
    uVar1 = 0x1b;
    break;
  case 8:
    uVar1 = 0x1d;
    break;
  case 9:
    uVar1 = 0x21;
    break;
  case 10:
    uVar1 = 0x17;
    break;
  case 0x11:
    uVar1 = 0x29;
  }
  return uVar1;
}
