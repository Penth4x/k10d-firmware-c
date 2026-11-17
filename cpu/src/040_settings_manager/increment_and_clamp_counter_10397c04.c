/* @k10d increment_and_clamp_counter_10397c04 @ 0x10397c04
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Increments a 16-bit counter at offset 0x68, clamps it to 999, then calls two helpers
 *   with the object and counter.
 * summary:
 *   Reads the ushort at param_1+0x68, increments it, and writes it back, capping the value
 *   at 999. It then calls classify_value_and_build_menu with the object, a pointer from
 *   offset 0x40, the updated counter, and constants 3, 1, 0, followed by a call to
 *   clamp_product_to_999_and_notify with the object. The specific subsystem is not
 *   identifiable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void increment_and_clamp_counter_10397c04(void *param_1)

{
  ushort uVar1;
  
  uVar1 = *(short *)((int)param_1 + 0x68) + 1;
  *(ushort *)((int)param_1 + 0x68) = uVar1;
  if (999 < uVar1) {
    *(uint16_t *)((int)param_1 + 0x68) = 999;
  }
  classify_value_and_build_menu(param_1,*(int **)((int)param_1 + 0x40),(ushort *)((int)param_1 + 0x68),3,1,'\0');
  clamp_product_to_999_and_notify(param_1);
  return;
}
