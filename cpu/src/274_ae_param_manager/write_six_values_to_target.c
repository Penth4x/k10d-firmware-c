/* @k10d write_six_values_to_target @ 0x1051a726
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Writes six values to a target via a helper, alternating between 0x100 and fields from a
 *   pointer in param_1.
 * summary:
 *   Calls write_to_dynamic_array six times with param_2 as the first argument and indices
 *   0-5 as the second. Odd indices (1,3,5) pass 16-bit values read from offsets 8, 0xc, and
 *   0xe of the pointer stored at param_1+0x68. Even indices (0,2,4) pass the constant
 *   0x100. The role of write_to_dynamic_array and the data structure are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_six_values_to_target(int param_1,int param_2)

{
  write_to_dynamic_array(param_2,0,0x100);
  write_to_dynamic_array(param_2,1,(uint)*(ushort *)(*(int *)(param_1 + 0x68) + 8));
  write_to_dynamic_array(param_2,2,0x100);
  write_to_dynamic_array(param_2,3,(uint)*(ushort *)(*(int *)(param_1 + 0x68) + 0xc));
  write_to_dynamic_array(param_2,4,0x100);
  write_to_dynamic_array(param_2,5,(uint)*(ushort *)(*(int *)(param_1 + 0x68) + 0xe));
  return;
}
