/* @k10d call_single_helper_104dec7a @ 0x104dec7a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 248_menu_parser (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper function with the provided parameter and returns.
 * summary:
 *   This function acts as a thin wrapper or thunk that passes its single integer argument
 *   directly to set_flag_on_object_at_offset_0x70_104ded7a. It performs no other
 *   operations, calculations, or state modifications. The specific role of the underlying
 *   helper is unknown as it is not named.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_104dec7a(int param_1)

{
  set_flag_on_object_at_offset_0x70_104ded7a(param_1);
  return;
}
