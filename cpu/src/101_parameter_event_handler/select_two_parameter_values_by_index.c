/* @k10d select_two_parameter_values_by_index @ 0x1042666e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 101_parameter_event_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void select_two_parameter_values_by_index(void *param_1,int param_2,uint16_t *param_3,uint16_t *param_4)

{
  uint16_t uVar1;
  
  if (param_2 == 0) {
    *param_3 = 0xf20;
    uVar1 = 0xa20;
  }
  else if (param_2 == 1) {
    *param_3 = 0xbc0;
    uVar1 = 2000;
  }
  else if (param_2 == 2) {
    *param_3 = 0x720;
    uVar1 = 0x4c0;
  }
  else {
    *param_3 = 0xf20;
    uVar1 = 0xa20;
  }
  *param_4 = uVar1;
  return;
}
