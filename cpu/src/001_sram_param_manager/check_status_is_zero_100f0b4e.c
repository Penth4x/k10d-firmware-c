/* @k10d check_status_is_zero_100f0b4e @ 0x100f0b4e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_status_is_zero_100f0b4e(void)

{
  int iVar1;
  
  iVar1 = check_status_then_get_value();
  return iVar1 == 0;
}
