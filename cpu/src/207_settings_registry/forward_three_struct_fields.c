/* @k10d forward_three_struct_fields @ 0x104aa18e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 207_settings_registry (unit names are model-proposed)
 * purpose:
 *   Passes three fields from a struct to a helper function.
 * summary:
 *   The function reads a pointer from offset 0x1c of the input struct and passes it along
 *   with pointers to offsets 8 and 0x34 to dispatch_cpucom_command_1046111e. It acts as a
 *   thin wrapper that forwards specific struct members to a callee. No other side effects
 *   or global state modifications are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_three_struct_fields(int param_1)

{
  dispatch_cpucom_command_1046111e(*(uint32_t *)(param_1 + 0x1c),param_1 + 8,param_1 + 0x34);
  return;
}
