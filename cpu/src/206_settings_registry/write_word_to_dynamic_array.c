/* @k10d write_word_to_dynamic_array @ 0x104a8bf4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_word_to_dynamic_array(int param_1,int param_2,uint16_t param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    iVar1 = param_1 + 8;
  }
  *(uint16_t *)(iVar1 + param_2 * 2) = param_3;
  return;
}
