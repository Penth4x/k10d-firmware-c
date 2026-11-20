/* @k10d invoke_virtual_slot_2_on_members @ 0x104667f0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_2_on_members(cls_105a7db4 *param_1)

{
  int *piVar1;
  uint32_t uVar2;
  
  piVar1 = (int *)param_1->field_0x4;
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (((vtbl_entry*)(*piVar1))[3].fn)
                      ((void *)((int)((vtbl_entry*)(*piVar1))[3].adj + (int)piVar1),0);
  }
  piVar1 = (int *)param_1->field_0x8;
  if (piVar1 != (int *)0x0) {
    uVar2 = (((vtbl_entry*)(*piVar1))[3].fn)
                      ((void *)((int)((vtbl_entry*)(*piVar1))[3].adj + (int)piVar1),0);
  }
  piVar1 = (int *)param_1->field_0xc;
  if (piVar1 != (int *)0x0) {
    uVar2 = (((vtbl_entry*)(*piVar1))[3].fn)
                      ((void *)((int)((vtbl_entry*)(*piVar1))[3].adj + (int)piVar1),0);
  }
  piVar1 = (int *)param_1->field_0x10;
  if (piVar1 != (int *)0x0) {
    uVar2 = (((vtbl_entry*)(*piVar1))[3].fn)
                      ((void *)((int)((vtbl_entry*)(*piVar1))[3].adj + (int)piVar1),0);
  }
  return uVar2;
}
