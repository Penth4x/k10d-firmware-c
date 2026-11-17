/* @k10d set_dat_400d0004_flag @ 0x10452856
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Writes 0x8000 or 0 to the global DAT_400d0004 based on a boolean parameter.
 * summary:
 *   The function takes two parameters and writes either 0x8000 or 0 to the global variable
 *   DAT_400d0004 depending on whether param_2 is zero. It does not call any other functions
 *   and has no other side effects. The role of DAT_400d0004 is not determinable from the
 *   provided pseudocode or brief.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_dat_400d0004_flag(uint32_t param_1,int param_2)

{
  if (param_2 == 0) {
    _DAT_400d0004 = 0;
  }
  else {
    _DAT_400d0004 = 0x8000;
  }
  return;
}
