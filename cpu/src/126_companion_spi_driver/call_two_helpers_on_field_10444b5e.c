/* @k10d call_two_helpers_on_field_10444b5e @ 0x10444b5e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions using the value stored at offset 0x10 of the object passed
 *   in param_1.
 * summary:
 *   Reads the 32-bit value at param_1 + 0x10 and passes it as the first argument to
 *   initialize_struct_defaults_1043fc40. It then passes the same value plus param_2 to
 *   set_object_field_and_pointer. No other side effects or global accesses are visible in
 *   this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_on_field_10444b5e(int param_1,uint32_t param_2)

{
  initialize_struct_defaults_1043fc40(*(uint32_t *)(param_1 + 0x10));
  set_object_field_and_pointer(*(uint32_t *)(param_1 + 0x10),param_2);
  return;
}
