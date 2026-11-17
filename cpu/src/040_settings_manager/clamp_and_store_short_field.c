/* @k10d clamp_and_store_short_field @ 0x103983d8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Clamps param_2 to a maximum of 999, stores it as a short at offset 0x60 of param_1, and
 *   calls a helper with that field.
 * summary:
 *   Writes param_2 into the short field at offset 0x60 of the object pointed to by param_1.
 *   If param_2 exceeds 999, the stored value is clamped to 999. It then calls
 *   classify_value_and_build_menu with the object, a pointer from offset 0x40, the address
 *   of the clamped field, and the constants 3, 1, and 0. The caller context is unknown, so
 *   the specific camera subsystem is not identified.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clamp_and_store_short_field(void *param_1,int param_2)

{
  *(short *)((int)param_1 + 0x60) = (short)param_2;
  if (999 < param_2) {
    *(uint16_t *)((int)param_1 + 0x60) = 999;
  }
  classify_value_and_build_menu(param_1,*(int **)((int)param_1 + 0x40),(ushort *)((int)param_1 + 0x60),3,1,'\0');
  return;
}
