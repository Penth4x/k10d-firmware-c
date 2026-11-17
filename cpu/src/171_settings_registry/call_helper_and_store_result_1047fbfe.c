/* @k10d call_helper_and_store_result_1047fbfe @ 0x1047fbfe
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 171_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool call_helper_and_store_result_1047fbfe(int param_1,uint32_t param_2,uint32_t param_3,int param_4,int param_5)

{
  int iVar1;
  uintptr_t sp;
  uint32_t uStack_c;
  
  uStack_c = 0;
  iVar1 = (*(code *)0x1054033e/*ROM*/)(param_2,param_3,param_4 * param_5,&uStack_c);
  *(int *)(param_1 + 4) = iVar1;
  return iVar1 == 0;
}
