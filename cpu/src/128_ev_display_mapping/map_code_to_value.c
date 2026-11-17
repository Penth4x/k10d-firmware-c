/* @k10d map_code_to_value @ 0x1045a8ea
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 128_ev_display_mapping (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_code_to_value(uint32_t param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  switch(param_2) {
  case 0:
    uVar1 = 0;
    break;
  default:
    uVar1 = 0;
    break;
  case 3:
    uVar1 = 0xfffffffd;
    break;
  case 4:
    uVar1 = 0xfffffffb;
    break;
  case 5:
    uVar1 = 0xfffffff9;
    break;
  case 8:
    uVar1 = 0xfffffff6;
    break;
  case 0xb:
    uVar1 = 0xfffffff3;
    break;
  case 0xc:
    uVar1 = 0xfffffff1;
    break;
  case 0xd:
    uVar1 = 0xffffffef;
    break;
  case 0x10:
    uVar1 = 0xffffffec;
    break;
  case 0xf0:
    uVar1 = 0x14;
    break;
  case 0xf3:
    uVar1 = 0x11;
    break;
  case 0xf4:
    uVar1 = 0xf;
    break;
  case 0xf5:
    uVar1 = 0xd;
    break;
  case 0xf8:
    uVar1 = 10;
    break;
  case 0xfb:
    uVar1 = 7;
    break;
  case 0xfc:
    uVar1 = 5;
    break;
  case 0xfd:
    uVar1 = 3;
  }
  return uVar1;
}
