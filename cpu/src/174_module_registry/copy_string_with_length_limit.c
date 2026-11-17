/* @k10d copy_string_with_length_limit @ 0x10480a44
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 174_module_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_string_with_length_limit(void *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = count_string_bytes(param_2);
  iVar3 = clamp_value_to_upper_bound(iVar3,0xc);
  iVar1 = 0;
  if (0 < iVar3) {
    iVar3 = iVar3 + -3;
    if (2 < iVar3) {
      do {
        *(char *)(iVar1 + (int)param_1) = param_2[iVar1];
        iVar2 = iVar1 + 2;
        *(char *)(iVar1 + 1 + (int)param_1) = param_2[iVar1 + 1];
        iVar1 = iVar1 + 3;
        iVar3 = iVar3 + -3;
        *(char *)(iVar2 + (int)param_1) = param_2[iVar2];
      } while (-1 < iVar3);
    }
    for (iVar3 = iVar3 + 2; -1 < iVar3; iVar3 = iVar3 + -1) {
      *(char *)(iVar1 + (int)param_1) = param_2[iVar1];
      iVar1 = iVar1 + 1;
    }
  }
  *(uint8_t *)((int)param_1 + iVar1) = 0;
  return;
}
