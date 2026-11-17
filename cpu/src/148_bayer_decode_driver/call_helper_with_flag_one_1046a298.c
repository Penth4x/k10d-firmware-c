/* @k10d call_helper_with_flag_one_1046a298 @ 0x1046a298
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Calls render_display_layer_content with param_1, constant 1, and param_2, returning the
 *   boolean result as uint.
 * summary:
 *   Thin wrapper that forwards its two arguments to render_display_layer_content, inserting
 *   the constant 1 as the second argument. The callee's role is unknown, so no subsystem
 *   can be inferred. Returns the callee's boolean result cast to uint.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint call_helper_with_flag_one_1046a298(void *param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = render_display_layer_content(param_1,1,param_2);
  return (uint)bVar1;
}
