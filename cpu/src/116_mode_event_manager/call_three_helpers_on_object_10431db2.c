/* @k10d call_three_helpers_on_object_10431db2 @ 0x10431db2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 116_mode_event_manager (unit names are model-proposed)
 * purpose:
 *   Invokes three helper functions on fields of param_1 and param_2, then returns 1.
 * summary:
 *   The function calls read_first_word_10433098 with a pointer to offset 0x14 of param_2.
 *   It then calls write_param_to_buffer and write_struct_field_with_optional_value, both
 *   passing the value at offset 0x30 of param_1, param_2, and the constant 1. It returns 1
 *   unconditionally. The roles of the callees and the objects are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_three_helpers_on_object_10431db2(int param_1,void *param_2)

{
  read_first_word_10433098((uint32_t *)((int)param_2 + 0x14));
  write_param_to_buffer(*(uint32_t *)(param_1 + 0x30),param_2,1);
  write_struct_field_with_optional_value(*(uint32_t *)(param_1 + 0x30),param_2,1);
  return 1;
}
