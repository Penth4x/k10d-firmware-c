/* @k10d set_field_and_call_helper_1039bd48 @ 0x1039bd48
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Stores a 16-bit value at offset 100 of a struct and calls a helper with that field and
 *   a pointer at offset 0x40.
 * summary:
 *   The function writes param_2 into the struct member at offset 100 (0x64). It then calls
 *   classify_value_and_build_menu, passing the struct pointer, the pointer stored at offset
 *   0x40, the address of the just-written field, and the constants 3, 1, and 0. The role of
 *   the struct and the helper is not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_field_and_call_helper_1039bd48(void *param_1,uint16_t param_2)

{
  *(uint16_t *)((int)param_1 + 100) = param_2;
  classify_value_and_build_menu(param_1,*(int **)((int)param_1 + 0x40),(ushort *)((int)param_1 + 100),3,1,'\0');
  return;
}
