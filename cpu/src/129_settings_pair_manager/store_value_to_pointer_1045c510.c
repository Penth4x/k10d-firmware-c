/* @k10d store_value_to_pointer_1045c510 @ 0x1045c510
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Writes the second argument to the memory location pointed to by the first argument.
 * summary:
 *   This function performs a simple 32-bit store operation, assigning param_2 to the
 *   address in param_1. It has no callees and no other side effects. It is called by
 *   text_widget_layout and several other functions, likely serving as a helper to update a
 *   specific field or variable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_value_to_pointer_1045c510(uint32_t *param_1,uint32_t param_2)

{
  *param_1 = param_2;
  return;
}
