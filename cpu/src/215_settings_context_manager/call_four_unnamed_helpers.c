/* @k10d call_four_unnamed_helpers @ 0x104b4594
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Invokes four sequential helper functions with no arguments.
 * summary:
 *   The function acts as a simple wrapper that calls get_or_init_sram_block_104b3d52,
 *   call_two_unnamed_helpers_104b3dda, get_sram_buffer_pointer, and
 *   call_single_helper_on_object_104b0406 in that order. It is virtual slot 5 of class
 *   cls_105b8204. No side effects or data manipulation are visible in this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_four_unnamed_helpers(void)

{
  get_or_init_sram_block_104b3d52();
  call_two_unnamed_helpers_104b3dda();
  get_sram_buffer_pointer();
  call_single_helper_on_object_104b0406((uint32_t *)__frv_reg_unset(4));
  return;
}
