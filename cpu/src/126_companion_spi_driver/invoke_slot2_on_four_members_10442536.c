/* @k10d invoke_slot2_on_four_members_10442536 @ 0x10442536
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool invoke_slot2_on_four_members_10442536(void *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  piVar1 = (int *)((int)param_1 + 4);
  iVar2 = *piVar1;
  if (iVar2 != 0) {
    (**(code **)(*(int *)(*piVar1 + 4) + 0x1c))
              (*piVar1 + (int)*(short *)(*(int *)(*piVar1 + 4) + 0x18),0);
  }
  bVar4 = *(int *)((int)param_1 + 8) != 0;
  if (bVar4) {
    iVar3 = *(int *)(*(int *)((int)param_1 + 8) + 4);
    (**(code **)(iVar3 + 0x1c))(*(int *)((int)param_1 + 8) + (int)*(short *)(iVar3 + 0x18),0);
  }
  bVar5 = *(int *)((int)param_1 + 0xc) != 0;
  if (bVar5) {
    iVar3 = *(int *)(*(int *)((int)param_1 + 0xc) + 4);
    (**(code **)(iVar3 + 0x1c))(*(int *)((int)param_1 + 0xc) + (int)*(short *)(iVar3 + 0x18),0);
  }
  bVar6 = *(int *)((int)param_1 + 0x10) != 0;
  if (bVar6) {
    iVar3 = *(int *)(*(int *)((int)param_1 + 0x10) + 4);
    (**(code **)(iVar3 + 0x1c))(*(int *)((int)param_1 + 0x10) + (int)*(short *)(iVar3 + 0x18),0);
  }
  return bVar6 || (bVar5 || (bVar4 || iVar2 != 0));
}
