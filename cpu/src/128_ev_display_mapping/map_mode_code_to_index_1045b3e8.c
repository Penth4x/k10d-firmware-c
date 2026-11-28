/* @k10d map_mode_code_to_index_1045b3e8 @ 0x1045b3e8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 128_ev_display_mapping (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_mode_code_to_index_1045b3e8(uint32_t mode_code, uint32_t mode_code_lo, uint32_t sub_mode_code)

{
  uint32_t mapped_index;

  switch (mode_code_lo) {
  default:
switchD_1045b3f6_caseD_0:
    mapped_index = 0;
    break;
  case 1:
    mapped_index = 1;
    break;
  case 2:
    mapped_index = 5;
    break;
  case 3:
    mapped_index = 6;
    break;
  case 5:
    mapped_index = 8;
    break;
  case 6:
    mapped_index = 8;
    break;
  case 8:
    mapped_index = 2;
    break;
  case 9:
    mapped_index = 3;
    break;
  case 10:
    switch (sub_mode_code) {
    case 0:
    case 1:
    case 2:
    case 5:
    case 7:
    case 10:
    case 0xf:
      mapped_index = 4;
      break;
    default:
      goto switchD_1045b3f6_caseD_0;
    case 4:
    case 6:
    case 8:
    case 9:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
      mapped_index = 7;
    }
  }
  return mapped_index;
}
