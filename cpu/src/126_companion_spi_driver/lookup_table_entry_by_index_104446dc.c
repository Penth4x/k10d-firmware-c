/* @k10d lookup_table_entry_by_index_104446dc @ 0x104446dc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t lookup_table_entry_by_index_104446dc(uint32_t param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = validate_index_range(param_1,param_2);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint32_t *)(&DAT_105a0f88/*ROM*/ + param_2 * 4);
  }
  return uVar2;
}
