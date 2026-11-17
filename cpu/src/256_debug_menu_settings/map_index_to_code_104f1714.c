/* @k10d map_index_to_code_104f1714 @ 0x104f1714
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_index_to_code_104f1714(uint32_t param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  switch(param_2) {
  case 0:
    uVar1 = 0;
    break;
  case 2:
    uVar1 = 3;
    break;
  case 4:
    uVar1 = 4;
    break;
  case 6:
    uVar1 = 7;
    break;
  case 8:
    uVar1 = 8;
    break;
  case 10:
    uVar1 = 9;
    break;
  case 0xc:
    uVar1 = 0xc;
  }
  return uVar1;
}
