/* @k10d read_state_at_offset_16 @ 0x104b7494
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 220_shutter_trigger (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_state_at_offset_16(int param_1)

{
  uint32_t uVar1;
  int r5_in;
  
  uVar1 = read_struct_field_at_index_1046c7ca(param_1 + 0x10,r5_in);
  return uVar1;
}
