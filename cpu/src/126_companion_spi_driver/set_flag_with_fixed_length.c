/* @k10d set_flag_with_fixed_length @ 0x1043bfe6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Sets a 16-bit value (0 or 0x10) at a fixed offset in a structure via a helper call.
 * summary:
 *   The function takes a pointer and an integer flag. It converts the flag to a 16-bit
 *   value (0x10 if non-zero, 0 if zero) and passes it along with a constant length of 0x10
 *   to sci_strobe_ctrl. The specific role of the helper and the data structure is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_with_fixed_length(void *param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = 0x10;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  sci_strobe_ctrl(param_1,uVar1,0x10);
  return;
}
