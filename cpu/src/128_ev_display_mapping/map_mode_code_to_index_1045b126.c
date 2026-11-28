/* @k10d map_mode_code_to_index_1045b126 @ 0x1045b126
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 128_ev_display_mapping (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_mode_code_to_index_1045b126(uint32_t ignored_current_index, uint32_t mode_code)
{
  uint32_t mapped_index;

  /*
   * Original: if mode_code == 0xfe, fall through to the 0x1045b160 path and
   * return 8. Otherwise, index a 32-bit jump table at 0x105a564c by
   * (mode_code << 2) and jump to the selected branch. Each selected branch
   * loads r4 in its delay slot and branches to ret.
   */
  switch (mode_code) {
  case 0:
    mapped_index = 8;
    break;
  default:
    mapped_index = 8;
    break;
  case 3:
  case 4:
    mapped_index = 9;
    break;
  case 5:
    mapped_index = 0xb;
    break;
  case 8:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0x10:
    mapped_index = 0xc;
    break;
  case 0xf0:
    mapped_index = 0;
    break;
  case 0xf3:
    mapped_index = 1;
    break;
  case 0xf4:
  case 0xf5:
    mapped_index = 3;
    break;
  case 0xf8:
    mapped_index = 4;
    break;
  case 0xfb:
    mapped_index = 5;
    break;
  case 0xfc:
  case 0xfd:
    mapped_index = 7;
    break;
  }

  return mapped_index;
}
