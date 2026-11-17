/* @k10d call_helper_on_struct_field_104718d0 @ 0x104718d0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 165_sr_calibration_control (unit names are model-proposed)
 * purpose:
 *   Passes the pointer stored at offset 0x2c of the input object to a single helper
 *   function.
 * summary:
 *   The function dereferences the input pointer, reads the 4-byte value at offset 0x2c, and
 *   passes it as the sole argument to set_flag_with_notify. It performs no other operations
 *   or side effects. The role of the helper and the struct field is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_struct_field_104718d0(int param_1)

{
  set_flag_with_notify(*(void **)(param_1 + 0x2c));
  return;
}
