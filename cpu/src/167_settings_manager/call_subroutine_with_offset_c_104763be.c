/* @k10d call_subroutine_with_offset_c_104763be @ 0x104763be
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes the 4-byte value at param_1+0xc to iterate_and_invoke_slot_two and returns.
 * summary:
 *   One-line trampoline that dereferences the field at offset 0xc of the object pointed to
 *   by param_1 and forwards it as the sole argument to iterate_and_invoke_slot_two. No
 *   other side effects, no globals touched, no camera subsystem indicated by the code or
 *   the single unnamed callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_with_offset_c_104763be(int param_1)

{
  iterate_and_invoke_slot_two(*(uint32_t *)(param_1 + 0xc));
  return;
}
