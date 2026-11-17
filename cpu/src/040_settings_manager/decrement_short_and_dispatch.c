/* @k10d decrement_short_and_dispatch @ 0x10397c52
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Decrements a short field at offset 0x68, resets it to 1 if it reaches zero, then calls
 *   two helper functions with the object and related fields.
 * summary:
 *   The function reads a 16-bit value from param_1+0x68, decrements it, and writes it back.
 *   If the result is zero, it overwrites the field with 1. It then calls
 *   classify_value_and_build_menu with param_1, a pointer from param_1+0x40, the updated
 *   short value, and constants 3, 1, 0. Finally, it calls clamp_product_to_999_and_notify
 *   with param_1. The specific subsystem role is not determinable from the provided
 *   pseudocode and unnamed callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void decrement_short_and_dispatch(void *param_1)

{
  short sVar1;
  
  sVar1 = *(short *)((int)param_1 + 0x68) + -1;
  *(short *)((int)param_1 + 0x68) = sVar1;
  if (sVar1 == 0) {
    *(uint16_t *)((int)param_1 + 0x68) = 1;
  }
  classify_value_and_build_menu(param_1,*(int **)((int)param_1 + 0x40),(ushort *)((int)param_1 + 0x68),3,1,'\0');
  clamp_product_to_999_and_notify(param_1);
  return;
}
