/* @k10d dispatch_two_callbacks @ 0x10484aac
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a fixed function pointer at 0x104283aa twice with different argument sets.
 * summary:
 *   The function calls the code at 0x104283aa first with param_1 + 0x14, then again with
 *   the value at param_1 + 0xc, param_2, and param_3. No other operations or side effects
 *   are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_two_callbacks(int param_1,uint32_t param_2,uint32_t param_3)

{
  (*(code *)0x104283aa/*ROM*/)(param_1 + 0x14);
  (*(code *)0x104283aa/*ROM*/)(*(uint32_t *)(param_1 + 0xc),param_2,param_3);
  return;
}
