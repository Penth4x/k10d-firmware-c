/* @k10d call_two_helpers_in_sequence_10394600 @ 0x10394600
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls an unnamed helper, passes its return value to a second unnamed helper, and
 *   returns.
 * summary:
 *   The function invokes get_or_create_sram_object_1040a240 with no arguments and stores
 *   the returned pointer in a local variable. It then passes that pointer as the sole
 *   argument to initialize_object_subfields_1040a490. No other operations, memory accesses,
 *   or state changes are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_in_sequence_10394600(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)get_or_create_sram_object_1040a240();
  initialize_object_subfields_1040a490(pvVar1);
  return;
}
