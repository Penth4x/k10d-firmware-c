/* @k10d set_field_and_call_helper_10397bd2 @ 0x10397bd2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Stores a 16-bit value at offset 0x68 of an object and calls a helper with that field
 *   and a pointer at offset 0x40.
 * summary:
 *   The function writes param_2 into the object pointed to by param_1 at offset 0x68. It
 *   then calls classify_value_and_build_menu, passing the object, the pointer stored at
 *   offset 0x40, a pointer to the newly written field, and the constants 3, 1, and 0. The
 *   specific role of the object or the helper is not determinable from the provided
 *   pseudocode and unknown callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_field_and_call_helper_10397bd2(void *param_1,uint16_t param_2)

{
  *(uint16_t *)((int)param_1 + 0x68) = param_2;
  classify_value_and_build_menu(param_1,*(int **)((int)param_1 + 0x40),(ushort *)((int)param_1 + 0x68),3,1,'\0');
  return;
}
