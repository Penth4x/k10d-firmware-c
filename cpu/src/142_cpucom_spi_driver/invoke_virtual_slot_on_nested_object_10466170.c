/* @k10d invoke_virtual_slot_on_nested_object_10466170 @ 0x10466170
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_on_nested_object_10466170(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 4);
  (((vtbl_entry*)(iVar1))[12].fn)(*(int *)(param_1 + 0x14) + (int)((vtbl_entry*)(iVar1))[12].adj);
  return;
}
