/* @k10d call_on_array_element @ 0x104e49b0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Indexes an array at offset 0x54 in param_1 by param_3 and calls a helper on that
 *   element.
 * summary:
 *   Reads the 32-bit value at param_1 + 0x54 + param_3*4 and passes it as the sole argument
 *   to invoke_callback_if_param2_nonzero. param_2 is unused. The callee's role is unknown,
 *   so the operation is described mechanically as invoking a helper on a selected array
 *   entry.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_on_array_element(int param_1,uint32_t param_2,int param_3)
{
  invoke_callback_if_param2_nonzero(*(uint32_t *)(param_1 + 0x54 + param_3 * 4), (uint32_t)param_2);
  return;
}
