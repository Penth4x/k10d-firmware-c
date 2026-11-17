/* @k10d set_flag_and_notify_object @ 0x10449c02
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Conditionally calls a helper with a constant argument and passes a boolean derived from
 *   param_2 to a function via an object field.
 * summary:
 *   The function checks if param_2 is non-zero. If so, it calls
 *   toggle_and_wait_for_subsystem with param_1 and the constant 1. It then dereferences the
 *   pointer at offset 0x110 of the param_1 object and calls toggle_bit2_in_struct_field
 *   with that pointer and a boolean value (1 if param_2 is non-zero, else 0). The specific
 *   roles of the callees and the object at offset 0x110 are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_and_notify_object(void *param_1,int param_2)

{
  if (param_2 != 0) {
    toggle_and_wait_for_subsystem(param_1,1);
  }
  toggle_bit2_in_struct_field(*(void **)((int)param_1 + 0x110),(uint)(param_2 != 0));
  return;
}
