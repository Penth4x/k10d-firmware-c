/* @k10d copy_two_point_arrays_to_struct @ 0x104eef52
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Copies two 4-element 16-bit arrays and a single 16-bit value into a destination struct
 *   at fixed offsets.
 * summary:
 *   The function writes the first four 16-bit words from param_2 to offsets 0x1a-0x20 of
 *   the object pointed to by param_5. It then writes the first four 16-bit words from
 *   param_3 to offsets 0x12-0x18 of the same object. Finally, it stores the 16-bit value
 *   param_4 at offset 0x22. No other side effects or memory accesses are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_two_point_arrays_to_struct(uint32_t param_1,uint16_t *param_2,uint16_t *param_3,uint16_t param_4,
                 int param_5)

{
  *(uint16_t *)(param_5 + 0x1a) = *param_2;
  *(uint16_t *)(param_5 + 0x1c) = param_2[1];
  *(uint16_t *)(param_5 + 0x1e) = param_2[2];
  *(uint16_t *)(param_5 + 0x20) = param_2[3];
  *(uint16_t *)(param_5 + 0x12) = *param_3;
  *(uint16_t *)(param_5 + 0x14) = param_3[1];
  *(uint16_t *)(param_5 + 0x16) = param_3[2];
  *(uint16_t *)(param_5 + 0x18) = param_3[3];
  *(uint16_t *)(param_5 + 0x22) = param_4;
  return;
}
