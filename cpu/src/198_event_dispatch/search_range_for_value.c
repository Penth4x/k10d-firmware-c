/* @k10d search_range_for_value @ 0x10493b14
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 198_event_dispatch (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t search_range_for_value(int param_1,int param_2)

{
  int *piVar1;
  
  if ((param_2 != 0) && (piVar1 = *(int **)(param_1 + 0x48), piVar1 != *(int **)(param_1 + 0x4c))) {
    do {
      if (param_2 == *piVar1) {
        return 1;
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != *(int **)(param_1 + 0x4c));
  }
  return 0;
}
