/* @k10d call_two_helpers_on_struct_10433030 @ 0x10433030
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 118_event_context_manager (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions on fields of a struct passed as the first argument.
 * summary:
 *   The function takes a single pointer argument and calls check_kernel_object_id_valid
 *   with the pointer offset by 0x24, then calls eventflag_clr_flg with the pointer offset
 *   by 0x84 and a constant value of 1. No local computation or state modification occurs
 *   beyond these two calls. The roles of the callees and the struct are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_on_struct_10433030(int param_1)

{
  check_kernel_object_id_valid((void *)(param_1 + 0x24));
  eventflag_clr_flg((void *)(param_1 + 0x84), 1);
  return;
}
