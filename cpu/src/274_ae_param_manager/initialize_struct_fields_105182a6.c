/* @k10d initialize_struct_fields_105182a6 @ 0x105182a6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Initializes multiple fields of a structure by calling helper functions on specific
 *   offsets.
 * summary:
 *   The function takes a pointer to a structure and calls four instances of
 *   iterate_and_invoke_virtual_method on offsets 0xc, 0x44, 0x7c, and 0xb4. It then calls
 *   call_with_field_at_offset_0x70 on offset 0x140, a function at 0x104a199c on offset
 *   0x1b4, and release_two_handles on offset 0x1e4. The specific roles of these callees are
 *   unknown, but the pattern suggests a standard initialization routine for a complex
 *   object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_struct_fields_105182a6(int param_1)

{
  iterate_and_invoke_virtual_method(param_1 + 0xc);
  iterate_and_invoke_virtual_method(param_1 + 0x44);
  iterate_and_invoke_virtual_method(param_1 + 0x7c);
  iterate_and_invoke_virtual_method(param_1 + 0xb4);
  iterate_and_invoke_virtual_method(*(uint32_t *)(param_1 + 0xf0));
  call_with_field_at_offset_0x70(param_1 + 0x140);
  (*(code *)0x104a199c/*ROM*/)(param_1 + 0x1b4);
  release_two_handles(param_1 + 0x1e4);
  return;
}
