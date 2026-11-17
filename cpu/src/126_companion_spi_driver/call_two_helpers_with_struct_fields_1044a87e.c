/* @k10d call_two_helpers_with_struct_fields_1044a87e @ 0x1044a87e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Reads two fields from a struct and passes them to two helper functions, then returns 1.
 * summary:
 *   The function takes a pointer to a struct, extracts a byte at offset 0xf8 and a word at
 *   offset 0x110 to call set_object_flag_bit2_1044ad88, then extracts a word at offset 0xec
 *   to call update_object_field_with_guard with the struct pointer. It unconditionally
 *   returns 1. The specific roles of the callees and struct fields are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_two_helpers_with_struct_fields_1044a87e(void *param_1)

{
  set_object_flag_bit2_1044ad88(*(uint32_t *)((int)param_1 + 0x110),*(uint8_t *)((int)param_1 + 0xf8));
  update_object_field_with_guard(param_1,*(uint *)((int)param_1 + 0xec));
  return 1;
}
