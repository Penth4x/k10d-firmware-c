/* @k10d set_flag_from_pointer @ 0x1040a956
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 092_menu_setting_io (unit names are model-proposed)
 * purpose:
 *   Sets a byte at offset 0x54 of param_1 to 1, or to 0 if the value pointed to by param_2
 *   is non-zero.
 * summary:
 *   The function writes the constant 1 to the byte at param_1 + 0x54. It then checks if the
 *   integer at param_2 is non-zero; if so, it overwrites that same byte with 0. No other
 *   memory locations are accessed and no functions are called. The role of the flag at
 *   offset 0x54 and the meaning of the pointer param_2 are not determinable from the
 *   provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_from_pointer(int param_1,int *param_2)

{
  *(uint8_t *)(param_1 + 0x54) = 1;
  if (*param_2 != 0) {
    *(uint8_t *)(param_1 + 0x54) = 0;
  }
  return;
}
