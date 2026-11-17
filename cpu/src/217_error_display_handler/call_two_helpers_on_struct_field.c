/* @k10d call_two_helpers_on_struct_field @ 0x104b4ef8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Reads a pointer from offset 0x5c of param_1 and passes it to two helper functions with
 *   param_2 and param_4.
 * summary:
 *   The function dereferences param_1 at offset 0x5c to obtain a pointer. It calls
 *   parse_quoted_path_segment with that pointer, param_2, a local stack buffer, and
 *   param_4. It then calls increment_and_call_with_struct_fields with the same pointer and
 *   the stack buffer. Finally, it returns 1. The specific roles of the callees and the
 *   struct at param_1 are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_two_helpers_on_struct_field(int param_1,void *param_2,void *param_3,void *param_4)

{
  uintptr_t sp;
  uint8_t auStack_58 [80];
  
  parse_quoted_path_segment(*(void **)(param_1 + 0x5c),(int)param_2,auStack_58,param_4);
  increment_and_call_with_struct_fields(*(int *)(param_1 + 0x5c),auStack_58);
  return 1;
}
