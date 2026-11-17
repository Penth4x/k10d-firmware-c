/* @k10d call_helper_on_field_0x34 @ 0x10433ef4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 120_sr_menu_driver (unit names are model-proposed)
 * purpose:
 *   Reads the 32-bit value at offset 0x34 of the object in param_1 and passes it to
 *   init_and_check_object.
 * summary:
 *   Single-statement wrapper that dereferences param_1 + 0x34 and forwards the result as
 *   the sole argument to init_and_check_object. No other side effects, no return value
 *   used. The role of init_and_check_object and the meaning of the 0x34 field are unknown,
 *   so no camera-subsystem term is applied.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_field_0x34(int param_1)

{
  init_and_check_object(*(uint32_t *)(param_1 + 0x34));
  return;
}
