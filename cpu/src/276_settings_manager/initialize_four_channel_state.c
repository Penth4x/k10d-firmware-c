/* @k10d initialize_four_channel_state @ 0x1051cd44
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 276_settings_manager (unit names are model-proposed)
 * purpose:
 *   Writes a fixed sequence of four values to a target when a flag is zero.
 * summary:
 *   Checks if param_3 is zero. If so, calls write_byte_to_struct_offset_104a8be2 four times
 *   with param_2 and hardcoded index/value pairs (0,0), (1,1), (2,1), (3,2). The callee
 *   write_byte_to_struct_offset_104a8be2 is not named, so the specific subsystem (e.g.,
 *   display channels, GPIO) is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_four_channel_state(uint32_t param_1,void *param_2,int param_3)

{
  if (param_3 == 0) {
    write_byte_to_struct_offset_104a8be2((int)param_2,0,0);
    write_byte_to_struct_offset_104a8be2((int)param_2,1,1);
    write_byte_to_struct_offset_104a8be2((int)param_2,2,1);
    write_byte_to_struct_offset_104a8be2((int)param_2,3,2);
  }
  return;
}
