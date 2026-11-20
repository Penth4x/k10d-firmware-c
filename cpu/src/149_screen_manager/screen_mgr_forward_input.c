/* @k10d screen_mgr_forward_input @ 0x1046bd4a
 * name: verified (structural evidence: decomp; emulator: only the mode controller is registered (sink +0x58))
 * unit: 149_screen_manager (unit names are model-proposed)
 * purpose:
 *   Screen manager: hands the current key/status record to each registered input sink
 *   (+0x58..+0x64) whose +0x14 says active, via its +0x1c method.
 * summary:
 *   VERIFIED: decomp; emulator: only the mode controller is registered (sink +0x58)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void screen_mgr_forward_input(int param_1,uint32_t param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x58);
  if ((piVar1 != (int *)0x0) &&
     (iVar2 = (((vtbl_entry*)(*piVar1))[2].fn)((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1),
     iVar2 != 0)) {
    piVar1 = *(int **)(param_1 + 0x58);
    iVar2 = *piVar1;
    (((vtbl_entry*)(iVar2))[3].fn)((int)piVar1 + (int)((vtbl_entry*)(iVar2))[3].adj,param_2);
  }
  piVar1 = *(int **)(param_1 + 0x5c);
  if ((piVar1 != (int *)0x0) &&
     (iVar2 = (((vtbl_entry*)(*piVar1))[2].fn)((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1),
     iVar2 != 0)) {
    iVar2 = **(int **)(param_1 + 0x5c);
    (((vtbl_entry*)(iVar2))[3].fn)
              ((int)*(int **)(param_1 + 0x5c) + (int)((vtbl_entry*)(iVar2))[3].adj,param_2);
  }
  piVar1 = *(int **)(param_1 + 0x60);
  if ((piVar1 != (int *)0x0) &&
     (iVar2 = (((vtbl_entry*)(*piVar1))[2].fn)((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1),
     iVar2 != 0)) {
    iVar2 = **(int **)(param_1 + 0x60);
    (((vtbl_entry*)(iVar2))[3].fn)
              ((int)*(int **)(param_1 + 0x60) + (int)((vtbl_entry*)(iVar2))[3].adj,param_2);
  }
  piVar1 = *(int **)(param_1 + 100);
  if ((piVar1 != (int *)0x0) &&
     (iVar2 = (((vtbl_entry*)(*piVar1))[2].fn)((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1),
     iVar2 != 0)) {
    iVar2 = **(int **)(param_1 + 100);
    (((vtbl_entry*)(iVar2))[3].fn)
              ((int)*(int **)(param_1 + 100) + (int)((vtbl_entry*)(iVar2))[3].adj,param_2);
  }
  return;
}
