/* @k10d map_mode_index_to_code_1045b3aa @ 0x1045b3aa
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 128_ev_display_mapping (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_mode_index_to_code_1045b3aa(uint32_t unused_first_arg,
                                         uint32_t mode_index,
                                         int mode_subindex)
{
  uint32_t mode_code;

  switch (mode_index) {
    case 1:
      mode_code = 1;
      break;
    case 2:
      mode_code = 8;
      break;
    case 3:
      mode_code = 9;
      break;
    case 4:
      mode_code = 10;
      break;
    case 5:
      mode_code = 2;
      break;
    case 6:
      mode_code = 3;
      break;
    case 7:
      mode_code = 10;
      break;
    case 8:
      if (mode_subindex == 0) {
        return 5;
      }
      if (mode_subindex == 1) {
        return 6;
      }
    default:
      mode_code = 0;
      break;
  }

  return mode_code;
}
