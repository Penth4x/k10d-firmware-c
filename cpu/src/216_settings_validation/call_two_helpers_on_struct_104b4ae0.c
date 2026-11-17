/* @k10d call_two_helpers_on_struct_104b4ae0 @ 0x104b4ae0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 216_settings_validation (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions using fields at offsets 0x5c and 0x40 of the object in
 *   param_1.
 * summary:
 *   The function dereferences param_1+0x5c and passes it to clear_struct_field_at_0x6c,
 *   then passes the pointer param_1+0x40 along with param_2 to check_heap_alloc_success. It
 *   performs no other operations or state modifications. The specific roles of the callees
 *   and the object structure are not provided.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_on_struct_104b4ae0(int param_1,int param_2)

{
  clear_struct_field_at_0x6c(*(uint32_t *)(param_1 + 0x5c));
  check_heap_alloc_success((int *)(param_1 + 0x40),param_2);
  return;
}
