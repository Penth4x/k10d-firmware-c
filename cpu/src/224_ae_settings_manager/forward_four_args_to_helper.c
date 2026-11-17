/* @k10d forward_four_args_to_helper @ 0x104be7d2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes four incoming register arguments to a single callee and returns its result.
 * summary:
 *   The function is a thin trampoline that forwards in_r4, in_r5, in_r6, and in_r7 to
 *   init_event_handler_context and returns the callee's r4 value. No local computation,
 *   memory access, or branching is performed. The caller at 0x104cc18c invokes this
 *   wrapper, but the callee's role is unknown, so no camera subsystem can be inferred.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t forward_four_args_to_helper(void)

{
  int r4_in;
  uint32_t extraout_r4;
  int r5_in;
  uint r6_in;
  int *r7_in;
  
  init_event_handler_context(r4_in,r5_in,r6_in,r7_in);
  return extraout_r4;
}
