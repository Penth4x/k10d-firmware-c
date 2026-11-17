/* @k10d compare_structured_records @ 0x1046cc72
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 153_display_sync_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compare_structured_records(uint32_t param_1,short *param_2,short *param_3)

{
  short sVar1;
  int iVar2;
  
  sVar1 = *param_2;
  if (*(uint *)(param_2 + 2) < *(uint *)(param_3 + 2)) {
    sVar1 = sVar1 + -1;
  }
  if (sVar1 == *param_3) {
    iVar2 = *(uint *)(param_2 + 2) - *(uint *)(param_3 + 2);
  }
  else if (*param_3 < sVar1) {
    iVar2 = -1;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}
