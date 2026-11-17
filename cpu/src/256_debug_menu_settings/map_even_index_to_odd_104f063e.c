/* @k10d map_even_index_to_odd_104f063e @ 0x104f063e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_even_index_to_odd_104f063e(uint32_t param_1,uint32_t param_2)

{
  switch(param_2) {
  case 6:
    param_2 = 5;
    break;
  case 8:
    param_2 = 7;
    break;
  case 10:
    param_2 = 9;
    break;
  case 0xc:
    param_2 = 0xb;
    break;
  case 0xe:
    param_2 = 0xd;
    break;
  case 0x10:
    param_2 = 0xf;
    break;
  case 0x12:
    param_2 = 0x11;
    break;
  case 0x14:
    param_2 = 0x13;
    break;
  case 0x16:
    param_2 = 0x15;
    break;
  case 0x18:
    param_2 = 0x17;
  }
  return param_2;
}
