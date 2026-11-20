/* @k10d dispatch_virtual_slot_12 @ 0x1043bef0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_slot_12(int param_1)

{
  (((vtbl_entry*)(*(int *)(param_1 + 4)))[12].fn)(((vtbl_entry*)(*(int *)(param_1 + 4)))[12].adj + param_1);
  return;
}
