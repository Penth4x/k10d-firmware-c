/* @k10d get_next_node_pointer @ 0x1047d690
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 168_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int get_next_node_pointer(void *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 1) {
    iVar1 = *(int *)((int)param_1 + param_2 * 4 + 8);
  }
  else {
    iVar1 = (int)param_1 + 0x10;
  }
  return iVar1;
}
