/* @k10d advance_state_counter_on_event @ 0x10486950
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 180_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t advance_state_counter_on_event(int param_1,int *param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = (((vtbl_entry*)(*param_2))[4].fn)((int)((vtbl_entry*)(*param_2))[4].adj + (int)param_2,0x12);
  uVar2 = 0;
  if (iVar1 == 0) {
    iVar1 = (((vtbl_entry*)(*param_2))[2].fn)((int)((vtbl_entry*)(*param_2))[2].adj + (int)param_2,0x12);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x3c);
      if (iVar1 < 4) {
        iVar1 = iVar1 + 1;
      }
      else if (iVar1 < 5) {
        iVar1 = iVar1 + 1;
      }
      else {
        iVar1 = 4;
        uVar2 = 1;
      }
    }
  }
  else {
    iVar1 = 0;
    uVar2 = 1;
  }
  *(int *)(param_1 + 0x3c) = iVar1;
  return uVar2;
}
