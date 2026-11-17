/* @k10d get_next_index_from_object @ 0x104e35ba
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int get_next_index_from_object(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (**(code **)(*(int *)(iVar1 + 0x18) + 0x5c))
                      (*(short *)(*(int *)(iVar1 + 0x18) + 0x58) + iVar1);
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}
