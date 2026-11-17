/* @k10d set_display_layer_b_frame_1048f96e @ 0x1048f96e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 193_sr_state_machine (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_display_layer_b_frame_1048f96e(int param_1)

{
  int r5_in;
  
  display_set_layer_b_frame(*(uint32_t *)(param_1 + 0x14),r5_in);
  return;
}
