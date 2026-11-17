/* @k10d write_two_scaled_shorts @ 0x104a57ce
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_scaled_shorts(int param_1,int param_2)

{
  write_word_to_dynamic_array(param_2,0,
               (short)((*(int *)(*(int *)(param_1 + 0xc) + 0x10) *
                       (uint)*(ushort *)(*(int *)(param_1 + 0x58) + 0x4e4)) / 2000));
  write_word_to_dynamic_array(param_2,1,
               (short)((*(int *)(*(int *)(param_1 + 0xc) + 0x14) *
                       (uint)*(ushort *)(*(int *)(param_1 + 0x58) + 0x4e4)) / 2000));
  return;
}
