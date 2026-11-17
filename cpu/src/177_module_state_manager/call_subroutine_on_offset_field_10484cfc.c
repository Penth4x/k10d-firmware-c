/* @k10d call_subroutine_on_offset_field_10484cfc @ 0x10484cfc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Passes the value at param_1+0x14 to get_field_at_offset_four_104282fe and returns.
 * summary:
 *   Single-statement wrapper that dereferences the field at offset 0x14 of the object
 *   pointed to by param_1 and forwards it as the sole argument to
 *   get_field_at_offset_four_104282fe. No other side effects, no flags touched, no camera
 *   subsystem indicated by the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_on_offset_field_10484cfc(int param_1)

{
  get_field_at_offset_four_104282fe(param_1 + 0x14);
  return;
}
