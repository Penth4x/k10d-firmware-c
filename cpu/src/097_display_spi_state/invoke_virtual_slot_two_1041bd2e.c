/* @k10d invoke_virtual_slot_two_1041bd2e @ 0x1041bd2e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_two_1041bd2e(cls_1059d1d8 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1->field_0x2c + 4);
  (((vtbl_entry*)(iVar1))[33].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar1))[33].adj);
  return;
}
