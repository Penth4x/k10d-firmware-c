/* @k10d write_two_byte_value_104a7246 @ 0x104a7246
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_byte_value_104a7246(uint32_t param_1,uint8_t *param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = param_3 >> 8;
  if (param_4 == 0) {
    *param_2 = (char)param_3;
  }
  else {
    *param_2 = (char)((uint)param_3 >> 8);
    iVar1 = param_3;
  }
  param_2[1] = (char)iVar1;
  return;
}
