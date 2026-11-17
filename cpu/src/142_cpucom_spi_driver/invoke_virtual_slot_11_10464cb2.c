/* @k10d invoke_virtual_slot_11_10464cb2 @ 0x10464cb2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_11_10464cb2(int *param_1)

{
  uint32_t uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x5c))((int)*(short *)(*param_1 + 0x58) + (int)param_1,4,0x1f);
  return uVar1;
}
