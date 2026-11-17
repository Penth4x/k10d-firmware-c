/* @k10d map_index_to_next_value @ 0x104f067c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_index_to_next_value(uint32_t param_1,uint32_t param_2)

{
  switch(param_2) {
  case 3:
    param_2 = 4;
    break;
  case 7:
    param_2 = 8;
    break;
  case 0xb:
    param_2 = 0xc;
    break;
  case 0xf:
    param_2 = 0x10;
    break;
  case 0x13:
    param_2 = 0x14;
    break;
  case 0x17:
    param_2 = 0x18;
  }
  return param_2;
}
