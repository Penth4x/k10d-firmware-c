/* @k10d accumulate_value_if_valid @ 0x104e7056
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t accumulate_value_if_valid(int *param_1,void *param_2,int param_3)

{
  bool bVar2;
  int iVar1;
  uint32_t uVar3;
  
  uVar3 = 0;
  if ((param_3 != 0) && (bVar2 = dispatch_event_to_subscribers(param_3,param_2,0), bVar2)) {
    iVar1 = sum_two_values_plus_six((void *)param_3);
    uVar3 = 1;
    *param_1 = *param_1 + iVar1;
  }
  return uVar3;
}
