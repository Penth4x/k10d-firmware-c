/* @k10d handle_message_0xa005_104a7e30 @ 0x104a7e30
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Checks if param_2 equals 0xa005 and, if so, stores param_3 at offset 4 of param_1.
 * summary:
 *   The function performs a simple comparison of the integer parameter param_2 against the
 *   constant 0xa005. If the values match, it writes the pointer param_3 to the memory
 *   location at offset 4 of the object pointed to by param_1. It returns true if the
 *   message ID matches, false otherwise. No other side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool handle_message_0xa005_104a7e30(void *param_1,int param_2,void *param_3)

{
  if (param_2 == 0xa005) {
    *(void **)((int)param_1 + 4) = param_3;
  }
  return param_2 == 0xa005;
}
