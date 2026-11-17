/* @k10d dispatch_via_table_entry @ 0x104e4f18
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t
dispatch_via_table_entry(int param_1,int param_2,uint32_t param_3,uint32_t param_4,uint32_t param_5)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x40) + (param_2 + -100) * 4);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = dispatch_virtual_method_chain_104e3e50(iVar1,param_3,param_4,param_5);
  }
  return uVar2;
}
