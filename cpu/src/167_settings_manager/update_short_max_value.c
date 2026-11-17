/* @k10d update_short_max_value @ 0x10476ed8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Updates a 16-bit field at offset 0x2e in a structure to a new value if it is greater
 *   than the current value.
 * summary:
 *   The function reads a 16-bit unsigned value from param_1 + 0x2e. If this value is less
 *   than param_2, it writes param_2 to that location, effectively maintaining a maximum
 *   value. No other side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_short_max_value(int param_1,int param_2)

{
  if ((int)(uint)*(ushort *)(param_1 + 0x2e) < param_2) {
    *(short *)(param_1 + 0x2e) = (short)param_2;
  }
  return;
}
