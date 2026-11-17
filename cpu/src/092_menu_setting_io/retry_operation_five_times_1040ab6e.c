/* @k10d retry_operation_five_times_1040ab6e @ 0x1040ab6e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 092_menu_setting_io (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int retry_operation_five_times_1040ab6e(void *param_1,uint32_t param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  int *piVar3;
  uint8_t auStack_2c [8];
  
  piVar3 = (int *)auStack_2c;
  iVar2 = 0;
  do {
    invoke_virtual_slot_two_on_objects_1040a35a(param_1,param_6,param_5,param_4);
    *piVar3 = param_5;
    piVar3[1] = param_6;
    iVar1 = dispatch_event_with_lock_1040aaf2(param_1,param_2,param_3,param_4,*piVar3,piVar3[1]);
    if (iVar1 != 3) break;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  if (iVar1 == 3) {
    iVar1 = 0;
  }
  return iVar1;
}
