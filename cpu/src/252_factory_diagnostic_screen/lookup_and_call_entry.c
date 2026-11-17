/* @k10d lookup_and_call_entry @ 0x104e4cce
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t lookup_and_call_entry(int param_1,uint param_2,void *param_3)

{
  int iVar1;
  uint32_t uVar2;
  
  if (((param_2 < 100) || (*(uint *)(param_1 + 0x1c) <= param_2 - 100)) ||
     (iVar1 = *(int *)(*(int *)(param_1 + 0x40) + (param_2 - 100) * 4), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = build_and_write_param_struct(iVar1,param_3);
  }
  return uVar2;
}
