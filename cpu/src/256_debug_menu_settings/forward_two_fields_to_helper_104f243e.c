/* @k10d forward_two_fields_to_helper_104f243e @ 0x104f243e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Passes two 32-bit fields from a struct (offsets 0x20 and 0xc) to a single helper
 *   function.
 * summary:
 *   The function reads two undefined4 values from the object pointed to by param_1 at
 *   offsets 0x20 and 0xc, then calls call_single_helper_with_two_args_104baeec with them as
 *   its first and second arguments. It performs no other operations and returns void. The
 *   role of the helper and the struct fields is not determinable from the available
 *   information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_two_fields_to_helper_104f243e(int param_1)

{
  call_single_helper_with_two_args_104baeec(*(uint32_t *)(param_1 + 0x20),(void *)(*(uint32_t *)(param_1 + 0xc)));
  return;
}
