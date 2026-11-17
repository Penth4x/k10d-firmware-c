/* @k10d call_function_and_store_result @ 0x104800a2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 172_key_entry_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool call_function_and_store_result(int param_1,void *param_2,uint32_t *param_3)

{
  int iVar1;
  uintptr_t sp;
  uint32_t uStack_c;
  
  uStack_c = 0;
  iVar1 = (*(code *)0x10540236/*ROM*/)(param_2,&uStack_c);
  *(int *)(param_1 + 4) = iVar1;
  *param_3 = uStack_c;
  return iVar1 == 0;
}
