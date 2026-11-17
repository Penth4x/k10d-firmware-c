/* @k10d copy_or_zero_buffer @ 0x1047f3ce
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 170_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_or_zero_buffer(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    fill_byte_array((void *)*param_1,0,0x1be);
  }
  else {
    iVar1 = *param_1;
    iVar2 = 0x1be;
    do {
      iVar2 = iVar2 + -1;
      *(uint8_t *)(iVar2 + iVar1) = *(uint8_t *)(iVar2 + param_2);
    } while (iVar2 != 0);
  }
  return;
}
