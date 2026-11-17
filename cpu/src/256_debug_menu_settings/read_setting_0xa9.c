/* @k10d read_setting_0xa9 @ 0x104f271a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Reads setting id 0xa9 from the working copy using the sub-block pointer at offset 0xc
 *   of the passed object.
 * summary:
 *   The function dereferences param_1 + 0xc to obtain a pointer and passes it as the first
 *   argument to setting_get along with the constant 0xa9. It performs no other operations
 *   and returns void. The meaning of setting id 0xa9 is not determinable from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void read_setting_0xa9(int param_1)

{
  setting_get(*(int *)(param_1 + 0xc),0xa9);
  return;
}
