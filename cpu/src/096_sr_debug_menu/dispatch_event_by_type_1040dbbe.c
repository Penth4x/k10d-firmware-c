/* @k10d dispatch_event_by_type_1040dbbe @ 0x1040dbbe
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 096_sr_debug_menu (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_event_by_type_1040dbbe(int *param_1,int param_2,uint32_t param_3)

{
  bool bVar1;
  uint32_t uVar2;
  int iVar3;
  
  dispatch_event_0x29_via_vtable(param_1,param_2,param_3);
  uVar2 = 0;
  if (param_2 == 1) {
    check_kernel_object_id_valid(param_1 + 0x10);
    bVar1 = true;
  }
  else if (param_2 == 0xc) {
    iVar3 = *(int *)param_1[0xb];
    (**(code **)(iVar3 + 0x14))(param_1[0xb] + (int)*(short *)(iVar3 + 0x10),0x1120066,0);
    bVar1 = true;
  }
  else if (param_2 == 0x18) {
    uVar2 = 0x1120001;
    bVar1 = false;
  }
  else {
    if (param_2 == 9) {
      uVar2 = 0x112000c;
      iVar3 = *param_1;
      goto LAB_1040dc32;
    }
    bVar1 = true;
  }
  if (bVar1) {
    return;
  }
  iVar3 = *param_1;
LAB_1040dc32:
  (**(code **)(iVar3 + 0x74))((int)*(short *)(iVar3 + 0x70) + (int)param_1,uVar2,0);
  return;
}
