/* @k10d call_two_unnamed_helpers_104b3dc4 @ 0x104b3dc4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Invokes two unknown helper functions sequentially with no arguments.
 * summary:
 *   The function is a thin wrapper that calls get_or_init_ram_buffer_104b172a followed by
 *   release_object_member_refs. It is invoked as virtual method slot 4 of class
 *   cls_105b8204. No side effects or data manipulation are visible in this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_unnamed_helpers_104b3dc4(uint32_t param_x0)

{
  get_or_init_ram_buffer_104b172a();
  release_object_member_refs((int *)__frv_reg_unset(4));
  return;
}
