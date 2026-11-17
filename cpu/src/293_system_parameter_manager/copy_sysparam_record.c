/* @k10d copy_sysparam_record @ 0x10535f0c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 293_system_parameter_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_sysparam_record(void *param_1,uint32_t *param_2)

{
  int iVar1;
  uintptr_t sp;
  uint32_t auStack_18 [3];
  int iVar2;
  
  auStack_18[2] = 0x1f;
  auStack_18[1] = *param_2;
  initialize_sysparam_store_fields(param_2);
  iVar2 = 8;
  do {
    iVar1 = iVar2 + -4;
    *(uint32_t *)(iVar1 + (int)param_1) = *(uint32_t *)((int)auStack_18 + iVar2);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  return;
}
