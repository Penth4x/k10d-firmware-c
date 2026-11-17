/* @k10d call_and_store_result_104804e2 @ 0x104804e2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 173_screen_activation (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_and_store_result_104804e2(int param_1,uint32_t param_2,int param_3)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  int iStack_c;
  
  iStack_c = 0;
  iVar1 = (*(code *)0x10541506/*ROM*/)(param_2,param_3,&iStack_c);
  *(int *)(param_1 + 4) = iVar1;
  if ((iVar1 != 0) || (uVar2 = 1, param_3 != iStack_c)) {
    uVar2 = 0;
  }
  return uVar2;
}
