/* @k10d map_index_to_0x50b0003_offset @ 0x1039ac40
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_index_to_0x50b0003_offset(int param_1)

{
  uint32_t uVar1;
  
  switch(*(uint32_t *)(param_1 + 0x24)) {
  case 0:
    uVar1 = 0x50b0003;
    break;
  case 1:
    uVar1 = 0x50b0005;
    break;
  case 2:
    uVar1 = 0x50b0007;
    break;
  case 3:
    uVar1 = 0x50b0009;
    break;
  case 4:
    uVar1 = 0x50b000b;
    break;
  case 5:
    uVar1 = 0x50b000d;
    break;
  case 6:
    uVar1 = 0x50b000f;
    break;
  case 7:
    uVar1 = 0x50b0011;
    break;
  case 8:
    uVar1 = 0x50b0013;
    break;
  case 9:
    uVar1 = 0x50b0015;
    break;
  case 10:
    uVar1 = 0x50b0017;
    break;
  case 0xb:
    uVar1 = 0x50b0019;
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}
