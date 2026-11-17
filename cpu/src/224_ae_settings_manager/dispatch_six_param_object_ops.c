/* @k10d dispatch_six_param_object_ops @ 0x104bb540
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes five helper functions on param_1, passing subsets of the six input parameters
 *   to each.
 * summary:
 *   The function takes an object pointer (param_1) and five additional values, then calls
 *   five callees in sequence: zero_struct_fields_0x38_to_0x52 with the object,
 *   write_two_words_to_struct_104bc2b8 with the object and two 16-bit halves of
 *   param_2/param_3, call_two_param_setters with the object, param_4, and param_5,
 *   swap_two_short_fields with just the object, and set_field_and_call_helper_104bb58a with
 *   the object and param_6. No local state is modified; all work is delegated to the
 *   callees. The pattern suggests a composite operation on a data structure where each
 *   callee handles a distinct field or sub-operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_six_param_object_ops(void *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint16_t param_5,uint16_t param_6)

{
  zero_struct_fields_0x38_to_0x52((int)param_1);
  write_two_words_to_struct_104bc2b8((int)param_1,((uint16_t)((uint64_t)(param_2) >> 16)),((uint16_t)((uint64_t)(param_3) >> 16)));
  call_two_param_setters(param_1,param_4,param_5);
  swap_two_short_fields(param_1);
  set_field_and_call_helper_104bb58a((int)param_1,param_6);
  return;
}
