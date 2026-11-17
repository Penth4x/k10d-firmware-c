/* @k10d decode_mode_index_to_flags @ 0x104baf24
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 223_menu_display_context (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t
decode_mode_index_to_flags(uint32_t param_1,uint32_t param_2,uint8_t *param_3,uint8_t *param_4,
            uint8_t *param_5)

{
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  switch(param_2) {
  case 0:
    *param_3 = 0;
    break;
  case 1:
    *param_3 = 1;
    break;
  case 2:
    *param_4 = 1;
    break;
  case 3:
    *param_4 = 2;
    break;
  case 4:
    *param_5 = 2;
    break;
  case 5:
    *param_5 = 1;
  }
  return 1;
}
