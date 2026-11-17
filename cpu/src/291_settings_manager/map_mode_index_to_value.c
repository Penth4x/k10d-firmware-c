/* @k10d map_mode_index_to_value @ 0x10532e1e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 291_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_mode_index_to_value(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = 0xffffffff;
  switch(*(uint32_t *)(param_1 + 0x20)) {
  case 0:
    uVar1 = 0x12;
    break;
  case 1:
    uVar1 = 0x14;
    break;
  case 2:
    uVar1 = 0x16;
    break;
  case 4:
    uVar1 = 0x20;
    break;
  case 5:
    uVar1 = 0x24;
    break;
  case 6:
    uVar1 = 0x1a;
    break;
  case 7:
    uVar1 = 0x1c;
    break;
  case 8:
    uVar1 = 0x1e;
    break;
  case 9:
    uVar1 = 0x22;
    break;
  case 10:
    uVar1 = 0x18;
    break;
  case 0x11:
    uVar1 = 0x2a;
  }
  return uVar1;
}
