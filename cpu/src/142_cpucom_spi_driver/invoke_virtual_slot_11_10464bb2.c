/* @k10d invoke_virtual_slot_11_10464bb2 @ 0x10464bb2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_11_10464bb2(int *param_1)

{
  uint32_t uVar1;
  
  uVar1 = (((vtbl_entry*)(*param_1))[11].fn)((int)((vtbl_entry*)(*param_1))[11].adj + (int)param_1,0,0xff);
  return uVar1;
}
