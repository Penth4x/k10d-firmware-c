/* @k10d advance_pairwise_buffer_pointers @ 0x104e442c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int advance_pairwise_buffer_pointers(int *param_1)

{
  int iVar1;
  
  if (param_1[4] < *param_1) {
    (*(code *)0x104e6350/*ROM*/)(param_1[10] + param_1[6] * 8,param_1[0xd] + param_1[8],0xd);
    param_1[8] = param_1[8] + 0xd;
    iVar1 = param_1[6];
    param_1[6] = iVar1 + 1;
    (*(code *)0x104e384c/*ROM*/)(param_1[0xc] + param_1[4] * 0x2c,param_1[10] + iVar1 * 8);
    iVar1 = param_1[0xc] + param_1[4] * 0x2c;
    param_1[4] = param_1[4] + 1;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}
