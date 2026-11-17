/* @k10d dispatch_param_based_on_two_flags @ 0x105226ca
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 281_test_mode_telemetry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_param_based_on_two_flags(int *param_1)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1[8];
  iVar1 = dispatch_virtual_slot_two_104af096((int)param_1,2,1);
  uVar2 = dispatch_virtual_slot_two_104af096((int)param_1,3,1);
  iVar1 = check_flag_and_dispatch_10522356(piVar4,iVar1,uVar2);
  uVar2 = 0;
  if (iVar1 == 0) {
    invoke_virtual_slot_two_104ae294(param_1);
    uVar2 = 0;
  }
  else if (iVar1 == 1) {
    iVar1 = *(int *)(param_1[8] + 0x28);
    if (iVar1 != 0) {
      uVar2 = invoke_virtual_slot_two_104af0c8(param_1,*(void **)(param_1[8] + 0x24),iVar1);
    }
  }
  else if (iVar1 == 2) {
    iVar1 = *(int *)(param_1[8] + 0x24);
    iVar3 = *(int *)(param_1[8] + 0x28);
    if ((iVar1 != 0) && (iVar3 != 0)) {
      uVar2 = invoke_virtual_slot_1(param_1,iVar1,iVar3);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
