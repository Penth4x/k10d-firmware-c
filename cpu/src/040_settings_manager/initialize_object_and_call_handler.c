/* @k10d initialize_object_and_call_handler @ 0x10396848
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object via a helper, then invokes a handler on a pointer stored at
 *   offset 8 of the object.
 * summary:
 *   The function calls two unnamed initializers (get_or_create_sram_object_1040a240,
 *   poll_until_two_shorts_change), then calls call_three_helpers_in_sequence_103968d6 with
 *   the input pointer and 0. It dereferences the pointer at offset 8 of param_1 and passes
 *   it to request_ui_sync_code_4. It finishes by calling get_or_create_sram_object_1040a240
 *   again and init_object_flag_and_subobj. The specific subsystem is not identifiable from
 *   the available callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_object_and_call_handler(void *param_1)

{
  get_or_create_sram_object_1040a240();
  poll_until_two_shorts_change((void *)__frv_reg_unset(4));
  call_three_helpers_in_sequence_103968d6(param_1,0);
  request_ui_sync_code_4(*(void **)((int)param_1 + 8));
  get_or_create_sram_object_1040a240();
  init_object_flag_and_subobj(__frv_reg_unset(4));
  return;
}
