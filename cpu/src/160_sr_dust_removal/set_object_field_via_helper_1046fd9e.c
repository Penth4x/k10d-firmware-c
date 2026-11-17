/* @k10d set_object_field_via_helper_1046fd9e @ 0x1046fd9e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 160_sr_dust_removal (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_object_field_via_helper_1046fd9e(int param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = 2;
  if (param_2 == 0) {
    uVar1 = 0xff;
  }
  call_helper_with_stack_param_10462cb2(*(int **)(param_1 + 0x2c),uVar1);
  return;
}
