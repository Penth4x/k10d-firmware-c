/* @k10d call_helper_on_field_0x10_10444b86 @ 0x10444b86
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Passes the 32-bit value at offset 0x10 of the object pointed to by param_1 to
 *   initialize_struct_defaults_1043fc40.
 * summary:
 *   A one-line wrapper that dereferences param_1 + 0x10 and forwards that value as the sole
 *   argument to initialize_struct_defaults_1043fc40. No other side effects or state changes
 *   are visible in this function. The role of initialize_struct_defaults_1043fc40 is
 *   unknown, so the camera subsystem cannot be inferred.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_field_0x10_10444b86(int param_1)

{
  initialize_struct_defaults_1043fc40(*(uint32_t *)(param_1 + 0x10));
  return;
}
