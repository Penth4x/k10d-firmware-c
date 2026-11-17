/* @k10d call_helper_with_struct_field_104b4fe0 @ 0x104b4fe0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Passes a pointer to a field at offset 0x5c of param_1 to a helper function.
 * summary:
 *   The function extracts a 32-bit value from the structure pointed to by param_1 at offset
 *   0x5c and passes it as the first argument to process_if_command_string. It also passes
 *   the value in register r5 as the second argument. The role of the structure and the
 *   helper function is not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_struct_field_104b4fe0(int param_1)

{
  char *r5_in;
  
  process_if_command_string(*(uint32_t **)(param_1 + 0x5c),r5_in);
  return;
}
