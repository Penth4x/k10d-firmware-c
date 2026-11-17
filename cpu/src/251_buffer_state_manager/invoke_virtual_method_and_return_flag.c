/* @k10d invoke_virtual_method_and_return_flag @ 0x104e13ea
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint invoke_virtual_method_and_return_flag(int param_1,void *param_2,int param_3,int param_4)

{
  (*(code *)0x104e1658/*ROM*/)
            (*(int *)(param_1 + 0xc + *(int *)(param_1 + 0x14) * 4) + param_3,param_2,param_4);
  return param_4 - 1U >> 1;
}
