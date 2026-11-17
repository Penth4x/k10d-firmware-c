/* @k10d set_dat_400e0014_flag @ 0x1045294e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Writes 0x8000 or 0 to the global DAT_400e0014 based on whether param_2 is zero.
 * summary:
 *   The function performs a simple conditional assignment to the global variable
 *   DAT_400e0014. If param_2 is 0, it sets the value to 0; otherwise, it sets it to 0x8000.
 *   No other side effects or kernel calls are observed in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_dat_400e0014_flag(uint32_t param_1,int param_2)

{
  if (param_2 == 0) {
    _DAT_400e0014 = 0;
  }
  else {
    _DAT_400e0014 = 0x8000;
  }
  return;
}
