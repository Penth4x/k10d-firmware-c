/* @k10d map_index_to_offset_1045a954 @ 0x1045a954
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 128_ev_display_mapping (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_index_to_offset_1045a954(uint32_t unused,int enabled,uint32_t index)

{
  uint32_t offset;

  offset = 0;
  if (enabled != 0) {
    switch(index) {
    case 0:
      offset = 0;
      break;
    default:
      offset = 0;
      break;
    case 3:
      offset = 3;
      break;
    case 4:
      offset = 5;
      break;
    case 5:
      offset = 7;
      break;
    case 8:
      offset = 10;
      break;
    case 0xb:
      offset = 0xd;
      break;
    case 0xc:
      offset = 0xf;
      break;
    case 0xd:
      offset = 0x11;
      break;
    case 0x10:
      offset = 0x14;
    }
  }
  return offset;
}
