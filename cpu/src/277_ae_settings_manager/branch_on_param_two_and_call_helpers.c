/* @k10d branch_on_param_two_and_call_helpers @ 0x1051d3bc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Selects between two pairs of function calls based on param_2 and sets a global flag.
 * summary:
 *   If param_2 is zero, it calls functions at 0x10440eb0 and 0x104411bc with the value at
 *   param_1+8, then sets DAT_0000044b to 0x1f. Otherwise, it calls 0x10440ec0 with no
 *   arguments and 0x104411cc with the value at param_1+8, then sets DAT_0000044b to 0x1c.
 *   The specific roles of the called functions and the global variable are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void branch_on_param_two_and_call_helpers(int param_1,int param_2)

{
  if (param_2 == 0) {
    (*(code *)0x10440eb0/*ROM*/)(*(uint32_t *)(param_1 + 8));
    (*(code *)0x104411bc/*ROM*/)(*(uint32_t *)(param_1 + 8));
    DAT_0000044b = 0x1f;
  }
  else {
    (*(code *)0x10440ec0/*ROM*/)();
    (*(code *)0x104411cc/*ROM*/)(*(uint32_t *)(param_1 + 8));
    DAT_0000044b = 0x1c;
  }
  return;
}
