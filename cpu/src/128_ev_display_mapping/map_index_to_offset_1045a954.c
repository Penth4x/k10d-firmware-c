/* @k10d map_index_to_offset_1045a954 @ 0x1045a954
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 128_ev_display_mapping (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_index_to_offset_1045a954(uint32_t unused,int enabled,uint32_t index)

{
  uint32_t result;

  result = 0;
  if (enabled != 0) {
    switch(index) {
    case 0:
      result = 0;
      break;
    default:
      result = 0;
      break;
    case 3:
      result = 3;
      break;
    case 4:
      result = 5;
      break;
    case 5:
      result = 7;
      break;
    case 8:
      result = 10;
      break;
    case 0xb:
      result = 0xd;
      break;
    case 0xc:
      result = 0xf;
      break;
    case 0xd:
      result = 0x11;
      break;
    case 0x10:
      result = 0x14;
    }
  }
  return result;
}
