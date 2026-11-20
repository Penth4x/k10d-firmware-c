/* @k10d release_owned_object_10442c84 @ 0x10442c84
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_owned_object_10442c84(cls_105a0db4 *param_1)

{
  int iVar1;
  
  if ((param_1->field_0x4 != 0) &&
     (iVar1 = *(int *)(param_1->field_0x4 + 4),
     (((vtbl_entry*)(iVar1))[4].fn)(param_1->field_0x4 + ((vtbl_entry*)(iVar1))[4].adj),
     param_1->field_0x4 != 0)) {
    iVar1 = *(int *)(param_1->field_0x4 + 4);
    (((vtbl_entry*)(iVar1))[1].fn)(param_1->field_0x4 + *(short *)(iVar1 + 8),3);
  }
  param_1->field_0x4 = (uintptr_t)((void *)0x0);
  return;
}
