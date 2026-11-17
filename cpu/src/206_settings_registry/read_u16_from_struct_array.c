/* @k10d read_u16_from_struct_array @ 0x104a8c68
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint16_t read_u16_from_struct_array(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    iVar1 = param_1 + 8;
  }
  return *(uint16_t *)(iVar1 + param_2 * 2);
}
