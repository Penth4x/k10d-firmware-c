/* @k10d call_helper_with_flag_mask_1043ed94 @ 0x1043ed94
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Selects a 16-bit mask (0x20 or 0) based on param_2 and passes it to a helper.
 * summary:
 *   The function sets a local ushort to 0x20, or to 0 if param_2 is zero. It then calls
 *   update_flag_bits_in_word with param_1, the selected mask, and the constant 0x20. The
 *   specific role of the mask and the helper is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_flag_mask_1043ed94(void *param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = 0x20;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  update_flag_bits_in_word(param_1,uVar1,0x20);
  return;
}
