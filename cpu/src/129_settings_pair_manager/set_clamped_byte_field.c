/* @k10d set_clamped_byte_field @ 0x1045c5b6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Clamps param_2 to the range [1, 12] and stores it as a byte at offset 2 of param_1.
 * summary:
 *   The function enforces a minimum value of 1 and a maximum value of 0xc (12) on the
 *   integer argument param_2. It then writes the resulting value into the third byte
 *   (offset 2) of the memory block pointed to by param_1. No other side effects or callees
 *   are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_clamped_byte_field(void *param_1,int param_2)

{
  if (param_2 < 1) {
    param_2 = 1;
  }
  else if (0xc < param_2) {
    param_2 = 0xc;
  }
  *(char *)((int)param_1 + 2) = (char)param_2;
  return;
}
