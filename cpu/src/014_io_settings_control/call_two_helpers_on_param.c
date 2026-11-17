/* @k10d call_two_helpers_on_param @ 0x1036a5e8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 014_io_settings_control (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions, passing param_1+0x14 to the first and param_1 to the
 *   second.
 * summary:
 *   The function takes a single pointer-like argument and forwards it to two callees. It
 *   first calls dispatch_virtual_slot_two_10382654 with param_1+0x14 and the constant 1,
 *   then calls update_two_short_fields_and_flag with param_1. No local state is modified
 *   and no return value is produced.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_on_param(int param_1)

{
  dispatch_virtual_slot_two_10382654(param_1 + 0x14,1);
  update_two_short_fields_and_flag(param_1);
  return;
}
