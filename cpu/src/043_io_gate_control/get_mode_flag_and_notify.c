/* @k10d get_mode_flag_and_notify @ 0x1039eee0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 043_io_gate_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1039ef5a) overlaps instruction at (ram,0x1039ef58)
    */

uint get_mode_flag_and_notify(int param_1,void *param_2)

{
  uint32_t uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar3 = 0x48;
  if (param_2 != *(void **)(param_1 + 0x8c)) {
    if (param_2 == *(void **)(param_1 + 100)) {
      uVar2 = 2;
      if (*(char *)(param_1 + 0xc5) == '\0') {
        uVar2 = 1;
      }
      if (*(int *)(param_1 + 200) == 3) {
        uVar2 = uVar2 | 4;
      }
      goto LAB_1039ef46;
    }
    iVar3 = 0x4c;
    if ((((param_2 != *(void **)(param_1 + 0x74)) &&
         (iVar3 = 0x50, param_2 != *(void **)(param_1 + 0x90))) &&
        (iVar3 = 0x54, param_2 != *(void **)(param_1 + 0x68))) &&
       (iVar3 = 0x58, param_2 != *(void **)(param_1 + 0x84))) goto LAB_1039ef46;
  }
  uVar2 = *(uint *)(iVar3 + param_1);
LAB_1039ef46:
  iVar3 = get_setting_by_mode_flag_104f147e(*(uint32_t *)(param_1 + 0xbc),0);
  if ((iVar3 == 4) || (iVar3 == 5)) {
    iVar3 = **(int **)(param_1 + 0x2c);
    if (((param_2 == *(void **)(param_1 + 0x60)) || (param_2 == *(void **)(param_1 + 100))) ||
       (param_2 == *(void **)(param_1 + 0x84))) {
      uVar1 = 0x130064;
    }
    else {
      uVar1 = 0x130065;
    }
    (((vtbl_entry*)(iVar3))[3].fn)
              ((int)*(int **)(param_1 + 0x2c) + (int)((vtbl_entry*)(iVar3))[3].adj,uVar1,0);
  }
  else {
    iVar3 = **(int **)(param_1 + 0x2c);
    if (param_2 == *(void **)(param_1 + 0x60)) {
      uVar1 = 0x130064;
    }
    else {
      uVar1 = 0x130065;
    }
    (((vtbl_entry*)(iVar3))[3].fn)
              ((int)*(int **)(param_1 + 0x2c) + (int)((vtbl_entry*)(iVar3))[3].adj,uVar1,0);
  }
  *(uint32_t *)(param_1 + 0x4c) = 0;
  *(uint32_t *)(param_1 + 0x50) = 0;
  *(uint32_t *)(param_1 + 0x54) = 0;
  *(uint32_t *)(param_1 + 0x58) = 0;
  return uVar2;
}
