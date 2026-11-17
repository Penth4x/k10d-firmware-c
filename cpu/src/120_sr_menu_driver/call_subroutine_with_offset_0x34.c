/* @k10d call_subroutine_with_offset_0x34 @ 0x10433ee2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 120_sr_menu_driver (unit names are model-proposed)
 * purpose:
 *   Reads a 32-bit value from offset 0x34 of the object pointed to by param_1 and passes it
 *   as an argument to init_and_start_timer_object.
 * summary:
 *   This is a one-line wrapper function. It dereferences the pointer in param_1, adds 0x34
 *   to it, loads the 32-bit value at that address, and passes it as the sole argument to
 *   the callee init_and_start_timer_object. The return value of the callee is ignored.
 *   Without knowledge of what init_and_start_timer_object does or what the structure at
 *   param_1 represents, the specific camera subsystem role cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_with_offset_0x34(int param_1)

{
  init_and_start_timer_object(*(uint32_t *)(param_1 + 0x34));
  return;
}
