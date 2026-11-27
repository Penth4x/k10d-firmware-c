/* @k10d call_three_helpers_in_sequence_103968d6 @ 0x103968d6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes three helper functions in order, passing param_1 and param_2 to the second and
 *   param_1 to the third.
 * summary:
 *   The function is a thin wrapper that calls forward_two_ram_values_103968f0 with no
 *   arguments, then read_two_values_and_store_10396926 with param_1 and param_2, and
 *   finally update_object_flag_from_query with param_1. It performs no local computation or
 *   state modification beyond these calls. The specific subsystem role cannot be determined
 *   from the pseudocode alone as the callees are unnamed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_three_helpers_in_sequence_103968d6(void *param_1,int param_2)

{
  forward_two_ram_values_103968f0((uint32_t)param_1);
  read_two_values_and_store_10396926((int)param_1,param_2);
  update_object_flag_from_query((int)param_1);
  return;
}
