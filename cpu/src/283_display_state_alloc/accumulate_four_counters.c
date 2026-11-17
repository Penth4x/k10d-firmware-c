/* @k10d accumulate_four_counters @ 0x10527998
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 283_display_state_alloc (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void accumulate_four_counters(int param_1,int param_2,int param_3,int param_4,int param_5,ushort param_6)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 8 + param_2 * 0x10);
  piVar1[3] = piVar1[3] + (uint)param_6;
  *piVar1 = *piVar1 + param_3;
  piVar1[1] = piVar1[1] + param_4;
  piVar1[2] = piVar1[2] + param_5;
  return;
}
