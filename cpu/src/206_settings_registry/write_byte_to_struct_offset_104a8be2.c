/* @k10d write_byte_to_struct_offset_104a8be2 @ 0x104a8be2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_byte_to_struct_offset_104a8be2(int param_1,int param_2,uint8_t param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    iVar1 = param_1 + 8;
  }
  *(uint8_t *)(iVar1 + param_2) = param_3;
  return;
}
