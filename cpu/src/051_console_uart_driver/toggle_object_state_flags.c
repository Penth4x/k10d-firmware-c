/* @k10d toggle_object_state_flags @ 0x103b8546
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 051_console_uart_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_object_state_flags(void *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)((int)param_1 + 0x2c);
  if (param_2 == 0) {
    (((vtbl_entry*)(*piVar1))[2].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[2].adj,0x1120067,0);
    iVar2 = **(int **)((int)param_1 + 0x2c);
    (((vtbl_entry*)(iVar2))[2].fn)
              ((int)*(int **)((int)param_1 + 0x2c) + (int)((vtbl_entry*)(iVar2))[2].adj,0x1120072,1);
  }
  else {
    (((vtbl_entry*)(*piVar1))[2].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[2].adj,0x1120067,1);
    iVar2 = **(int **)((int)param_1 + 0x2c);
    (((vtbl_entry*)(iVar2))[2].fn)
              ((int)*(int **)((int)param_1 + 0x2c) + (int)((vtbl_entry*)(iVar2))[2].adj,0x1120072,0);
    iVar2 = **(int **)((int)param_1 + 0x2c);
    (((vtbl_entry*)(iVar2))[2].fn)
              ((int)*(int **)((int)param_1 + 0x2c) + (int)((vtbl_entry*)(iVar2))[2].adj,0x1120065,0);
  }
  return;
}
