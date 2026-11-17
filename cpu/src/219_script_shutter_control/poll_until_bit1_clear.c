/* @k10d poll_until_bit1_clear @ 0x104b6fea
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 219_script_shutter_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t poll_until_bit1_clear(int *param_1)

{
  uint uVar1;
  
  do {
    script_dispatcher(param_1,0,1);
    uVar1 = read_state_at_offset_16(*param_1);
  } while ((uVar1 >> 1 & 1) != 0);
  return 1;
}
