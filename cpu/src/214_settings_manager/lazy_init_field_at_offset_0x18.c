/* @k10d lazy_init_field_at_offset_0x18 @ 0x104b2c6e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks if a field at offset 0x18 is zero; if so, calls a helper with the value at
 *   offset 0xc and sets the field to 1.
 * summary:
 *   The function reads the integer at param_1 + 0x18. If it is zero, it invokes the
 *   function at 0x104ad2d4 passing the value stored at param_1 + 0xc, then sets param_1 +
 *   0x18 to 1. It returns true if the initialization was performed (i.e., the field was
 *   initially zero), false otherwise. This is a standard lazy-initialization or one-time
 *   setup pattern.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool lazy_init_field_at_offset_0x18(int param_1)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0x18) == 0;
  if (bVar1) {
    (*(code *)0x104ad2d4/*ROM*/)(*(uint32_t *)(param_1 + 0xc));
    *(uint32_t *)(param_1 + 0x18) = 1;
  }
  return bVar1;
}
