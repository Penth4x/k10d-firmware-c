/* @k10d destroy_member_objects_1043b954 @ 0x1043b954
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void destroy_member_objects_1043b954(void *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar3 = 0x77;
  do {
    if ((*(int *)((int)param_1 + iVar2 + 4) != 0) &&
       (iVar4 = *(int *)(*(int *)((int)param_1 + iVar2 + 4) + 4),
       (**(code **)(iVar4 + 0x24))
                 (*(int *)((int)param_1 + iVar2 + 4) + (int)*(short *)(iVar4 + 0x20)),
       *(int *)((int)param_1 + iVar2 + 4) != 0)) {
      iVar4 = *(int *)(*(int *)((int)param_1 + iVar2 + 4) + 4);
      (**(code **)(iVar4 + 0xc))(*(int *)((int)param_1 + iVar2 + 4) + (int)*(short *)(iVar4 + 8),3);
    }
    *(uint32_t *)((int)param_1 + iVar2 + 4) = 0;
    iVar4 = iVar3 + -1;
    bVar1 = 0 < iVar3;
    iVar2 = iVar2 + 4;
    iVar3 = iVar4;
  } while (bVar1 && iVar4 != 0);
  return;
}
