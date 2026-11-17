/* @k10d update_max_value_if_larger @ 0x10475620
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Updates a 16-bit field at offset 0x68 in a structure to param_2 if param_2 is greater
 *   than the current value.
 * summary:
 *   The function reads a 16-bit unsigned value from param_1 + 0x68 and compares it to
 *   param_2. If param_2 is larger, it writes param_2 (truncated to 16 bits) back to that
 *   location. This is a standard 'max' update operation on a structure field, likely
 *   tracking a peak or maximum value for some parameter.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_max_value_if_larger(int param_1,int param_2)

{
  if ((int)(uint)*(ushort *)(param_1 + 0x68) < param_2) {
    *(short *)(param_1 + 0x68) = (short)param_2;
  }
  return;
}
