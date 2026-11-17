/* @k10d init_struct_with_two_helpers @ 0x104aaf72
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 210_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a struct by calling two helper functions and zeroing two fields.
 * summary:
 *   The function takes a pointer to a struct (param_1) and calls two unnamed helper
 *   functions, clear_and_set_flag_in_struct and reset_and_flag_object_state, passing the
 *   struct pointer to both. It then explicitly sets the 3rd and 7th 32-bit fields of the
 *   struct (param_1[2] and param_1[6]) to zero. Finally, it returns 1, likely indicating
 *   success. The specific subsystem or data structure being initialized is not determinable
 *   from the provided pseudocode and unknown callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_struct_with_two_helpers(uint32_t *param_1)

{
  clear_and_set_flag_in_struct(param_1);
  reset_and_flag_object_state(param_1);
  *(uint32_t *)param_1[2] = 0;
  *(uint32_t *)param_1[6] = 0;
  return 1;
}
