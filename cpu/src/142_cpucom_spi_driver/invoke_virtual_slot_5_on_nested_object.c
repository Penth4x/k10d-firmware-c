/* @k10d invoke_virtual_slot_5_on_nested_object @ 0x10466218
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_5_on_nested_object(void *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x18) + 4);
  (((vtbl_entry*)(iVar1))[5].fn)(*(int *)((int)param_1 + 0x18) + (int)((vtbl_entry*)(iVar1))[5].adj);
  return;
}
