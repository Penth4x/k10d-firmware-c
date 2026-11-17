/* @k10d init_object_with_two_ids_103923aa @ 0x103923aa
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling two helpers on its fields and setting a flag byte.
 * summary:
 *   The function takes a pointer to an object and calls apply_two_field_pairs on the field
 *   at offset 0xc. It then calls forward_params_via_helper_10394686 with the object
 *   pointer, the value at offset 8, and the constant 1. Finally, it sets the byte at offset
 *   0x89 to 1. The specific roles of the callees and the object structure are not
 *   determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_two_ids_103923aa(void *param_1)

{
  apply_two_field_pairs((int)param_1 + 0xc);
  forward_params_via_helper_10394686(param_1,*(int **)((int)param_1 + 8),1);
  *(uint8_t *)((int)param_1 + 0x89) = 1;
  return;
}
