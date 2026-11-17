/* @k10d decrement_short_and_call_helper_10398456 @ 0x10398456
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Decrements a short field at offset 0x60 of param_1, clamping to 1 if it reaches zero,
 *   then calls a helper with that field.
 * summary:
 *   Reads the 16-bit value at param_1+0x60, subtracts one, and writes it back. If the
 *   result is zero, it overwrites the field with 1. It then calls
 *   classify_value_and_build_menu passing param_1, the pointer at param_1+0x40, the updated
 *   short value, and the constants 3, 1, and 0. The role of the field and the helper is not
 *   determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void decrement_short_and_call_helper_10398456(void *param_1)

{
  short sVar1;
  
  sVar1 = *(short *)((int)param_1 + 0x60) + -1;
  *(short *)((int)param_1 + 0x60) = sVar1;
  if (sVar1 == 0) {
    *(uint16_t *)((int)param_1 + 0x60) = 1;
  }
  classify_value_and_build_menu(param_1,*(int **)((int)param_1 + 0x40),(ushort *)((int)param_1 + 0x60),3,1,'\0');
  return;
}
