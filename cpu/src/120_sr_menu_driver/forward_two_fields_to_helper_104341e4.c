/* @k10d forward_two_fields_to_helper_104341e4 @ 0x104341e4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 120_sr_menu_driver (unit names are model-proposed)
 * purpose:
 *   Reads two 32-bit fields from a struct at offsets 0x28 and 0xc and passes them to a
 *   helper.
 * summary:
 *   The function takes a pointer in param_1, dereferences the 32-bit values at offsets 0x28
 *   and 0xc, and forwards them as the first and second arguments to
 *   write_five_settings_from_object. It performs no other operations and returns void. The
 *   role of the struct and the callee is not determinable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_two_fields_to_helper_104341e4(int param_1)

{
  write_five_settings_from_object(*(uint32_t *)(param_1 + 0x28),*(uint32_t *)(param_1 + 0xc));
  return;
}
