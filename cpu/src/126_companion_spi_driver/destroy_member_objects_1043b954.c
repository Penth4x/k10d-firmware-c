/* @k10d destroy_member_objects_1043b954 @ 0x1043b954
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void destroy_member_objects_1043b954(cls_105a0468 *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar3 = 0x77;
  do {
    if ((*(int *)((int)&param_1->field_0x4 + iVar2) != 0) &&
       (iVar4 = *(int *)(*(int *)((int)&param_1->field_0x4 + iVar2) + 4),
       (((vtbl_entry*)(iVar4))[4].fn)
                 (*(int *)((int)&param_1->field_0x4 + iVar2) + (int)((vtbl_entry*)(iVar4))[4].adj),
       *(int *)((int)&param_1->field_0x4 + iVar2) != 0)) {
      iVar4 = *(int *)(*(int *)((int)&param_1->field_0x4 + iVar2) + 4);
      (((vtbl_entry*)(iVar4))[1].fn)
                (*(int *)((int)&param_1->field_0x4 + iVar2) + (int)*(short *)(iVar4 + 8),3);
    }
    *(uint32_t *)((int)&param_1->field_0x4 + iVar2) = 0;
    iVar4 = iVar3 + -1;
    bVar1 = 0 < iVar3;
    iVar2 = iVar2 + 4;
    iVar3 = iVar4;
  } while (bVar1 && iVar4 != 0);
  return;
}
