/* @k10d map_index_to_byte_count @ 0x104f1bb0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_index_to_byte_count(uint32_t param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  switch(param_2) {
  case 0:
  case 1:
  case 2:
    uVar1 = 8;
    break;
  case 3:
    uVar1 = 10;
    break;
  case 4:
    uVar1 = 0xe;
    break;
  case 5:
  case 7:
  case 10:
    uVar1 = 6;
    break;
  case 6:
    uVar1 = 0xe;
    break;
  case 8:
    uVar1 = 0x1e;
    break;
  case 9:
    uVar1 = 0x1c;
    break;
  case 0xb:
    uVar1 = 0x1e;
    break;
  case 0xc:
    uVar1 = 0x1c;
    break;
  case 0xd:
    uVar1 = 0x16;
    break;
  case 0xe:
    uVar1 = 0x16;
    break;
  case 0xf:
    uVar1 = 0xc;
    break;
  case 0x10:
    uVar1 = 0x18;
    break;
  case 0x11:
    uVar1 = 0x18;
  }
  return uVar1;
}
