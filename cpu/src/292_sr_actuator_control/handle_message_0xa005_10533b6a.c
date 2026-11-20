/* @k10d handle_message_0xa005_10533b6a @ 0x10533b6a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 292_sr_actuator_control (unit names are model-proposed)
 * purpose:
 *   Checks if param_2 equals 0xa005 and if so stores param_3 at offset 4 of param_1.
 * summary:
 *   The function performs a simple comparison of the integer parameter param_2 against the
 *   constant 0xa005. If the values match, it writes the pointer param_3 to the memory
 *   location at offset 4 of the object pointed to by param_1. It returns true if the
 *   condition is met, false otherwise. No other side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool handle_message_0xa005_10533b6a(cls_1061e3d0 *param_1,int param_2,void *param_3)

{
  if (param_2 == 0xa005) {
    *(void **)((char *)param_1 + 4) = param_3;
  }
  return param_2 == 0xa005;
}
