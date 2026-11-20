/* @k10d invoke_virtual_slot_two_on_three_slots @ 0x1043cc38
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_two_on_three_slots(cls_105a06e8 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 1;
  iVar1 = 0;
  do {
    if (*(int *)((int)&param_1->field_0x4 + iVar1) != 0) {
      iVar3 = *(int *)(*(int *)((int)&param_1->field_0x4 + iVar1) + 4);
      (((vtbl_entry*)(iVar3))[3].fn)
                (*(int *)((int)&param_1->field_0x4 + iVar1) + (int)((vtbl_entry*)(iVar3))[3].adj,0);
    }
    if (*(int *)((int)&param_1->field_0x8 + iVar1) != 0) {
      iVar3 = *(int *)(*(int *)((int)&param_1->field_0x8 + iVar1) + 4);
      (((vtbl_entry*)(iVar3))[3].fn)
                (*(int *)((int)&param_1->field_0x8 + iVar1) + (int)((vtbl_entry*)(iVar3))[3].adj,0);
    }
    if (*(int *)((int)&param_1->field_0xc + iVar1) != 0) {
      iVar3 = *(int *)(*(int *)((int)&param_1->field_0xc + iVar1) + 4);
      (((vtbl_entry*)(iVar3))[3].fn)
                (*(int *)((int)&param_1->field_0xc + iVar1) + (int)((vtbl_entry*)(iVar3))[3].adj,0);
    }
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + 0xc;
  } while (-1 < iVar2);
  return 1;
}
