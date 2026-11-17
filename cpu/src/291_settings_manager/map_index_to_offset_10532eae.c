/* @k10d map_index_to_offset_10532eae @ 0x10532eae
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 291_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_index_to_offset_10532eae(uint32_t param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  uVar1 = 7;
  switch(param_2) {
  case 0:
    uVar1 = 7;
    break;
  case 1:
    uVar1 = 8;
    break;
  case 2:
    uVar1 = 9;
    break;
  case 3:
    uVar1 = 10;
    break;
  case 4:
    uVar1 = 0xb;
    break;
  case 5:
    uVar1 = 0xc;
    break;
  case 6:
    uVar1 = 0xd;
    break;
  case 7:
    uVar1 = 0xe;
    break;
  case 0xfffffff9:
    uVar1 = 0;
    break;
  case 0xfffffffa:
    uVar1 = 1;
    break;
  case 0xfffffffb:
    uVar1 = 2;
    break;
  case 0xfffffffc:
    uVar1 = 3;
    break;
  case 0xfffffffd:
    uVar1 = 4;
    break;
  case 0xfffffffe:
    uVar1 = 5;
    break;
  case 0xffffffff:
    uVar1 = 6;
  }
  return uVar1;
}
