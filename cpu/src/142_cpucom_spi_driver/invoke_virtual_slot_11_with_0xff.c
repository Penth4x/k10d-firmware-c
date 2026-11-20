/* @k10d invoke_virtual_slot_11_with_0xff @ 0x10464bd0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_11_with_0xff(int *param_1)

{
  (((vtbl_entry*)(*param_1))[11].fn)((int)((vtbl_entry*)(*param_1))[11].adj + (int)param_1,1,0xff);
  return;
}
