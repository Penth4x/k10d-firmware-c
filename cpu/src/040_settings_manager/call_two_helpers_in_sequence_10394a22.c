/* @k10d call_two_helpers_in_sequence_10394a22 @ 0x10394a22
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls get_or_create_sram_object_1040a240 and passes its return value to
 *   call_two_helpers_on_object_1040a6e4.
 * summary:
 *   The function retrieves a pointer from get_or_create_sram_object_1040a240 and
 *   immediately passes it as the sole argument to call_two_helpers_on_object_1040a6e4. It
 *   does not perform any local computation or memory access beyond this two-step call
 *   chain. The specific roles of the callees are unknown, so the operation is described
 *   mechanically as a sequential call with data forwarding.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_in_sequence_10394a22(uint32_t param_x0)

{
  void *pvVar1;
  
  pvVar1 = (void *)get_or_create_sram_object_1040a240();
  call_two_helpers_on_object_1040a6e4(pvVar1);
  return;
}
