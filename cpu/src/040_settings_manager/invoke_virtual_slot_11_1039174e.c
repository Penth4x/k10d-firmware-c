/* @k10d invoke_virtual_slot_11_1039174e @ 0x1039174e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_11_1039174e(cls_10562400 *param_1)

{
  int *piVar1;
  uint32_t uVar2;
  
  piVar1 = (int *)param_1[0x46].field_0x88;
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (((vtbl_entry*)(*piVar1))[11].fn)((int)((vtbl_entry*)(*piVar1))[11].adj + (int)piVar1);
  }
  return uVar2;
}
