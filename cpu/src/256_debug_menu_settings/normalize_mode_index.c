/* @k10d normalize_mode_index @ 0x104f05e6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t normalize_mode_index(uint32_t param_1,uint32_t param_2)

{
  switch(param_2) {
  case 6:
  case 7:
  case 8:
    param_2 = 5;
    break;
  case 10:
  case 0xb:
  case 0xc:
    param_2 = 9;
    break;
  case 0xe:
  case 0xf:
  case 0x10:
    param_2 = 0xd;
    break;
  case 0x12:
  case 0x13:
  case 0x14:
    param_2 = 0x11;
    break;
  case 0x16:
  case 0x17:
  case 0x18:
    param_2 = 0x15;
  }
  return param_2;
}
