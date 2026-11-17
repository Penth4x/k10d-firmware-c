/* @k10d set_flag_via_helper @ 0x1043c09e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Maps a boolean parameter to 0 or 2 and passes it to a helper function.
 * summary:
 *   The function takes a pointer and an integer. It sets a local variable to 2, or 0 if the
 *   integer is zero. It then calls sci_strobe_ctrl with the pointer, the local variable,
 *   and the constant 2. The specific role of the helper is unknown, but this function acts
 *   as a wrapper that normalizes the second argument to either 0 or 2 before delegation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_via_helper(void *param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = 2;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  sci_strobe_ctrl(param_1,uVar1,2);
  return;
}
