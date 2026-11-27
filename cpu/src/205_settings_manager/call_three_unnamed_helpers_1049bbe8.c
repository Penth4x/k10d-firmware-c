/* @k10d call_three_unnamed_helpers_1049bbe8 @ 0x1049bbe8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes three consecutive helper functions, passing the two input parameters to the
 *   last two.
 * summary:
 *   The function acts as a simple wrapper or dispatcher. It first calls
 *   store_index_plus_one with no arguments, then calls store_mapped_index_value_1049bc80
 *   and store_mapped_status_code_1049bd00, forwarding param_1 and param_2 to both. It is
 *   called as virtual method slot 4 of class cls_105b5834. No specific camera subsystem
 *   behavior is evident from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_three_unnamed_helpers_1049bbe8(uint32_t param_1,uint32_t param_2)

{
  store_index_plus_one((uint32_t)param_1, (uint32_t)param_2);
  store_mapped_index_value_1049bc80(param_1,param_2);
  store_mapped_status_code_1049bd00(param_1,param_2);
  return;
}
