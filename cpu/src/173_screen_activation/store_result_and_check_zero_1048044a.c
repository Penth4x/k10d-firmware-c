/* @k10d store_result_and_check_zero_1048044a @ 0x1048044a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 173_screen_activation (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool store_result_and_check_zero_1048044a(int param_1,void *param_2,uint32_t param_3)

{
  int iVar1;
  
  iVar1 = write_buffer_to_device(param_2,param_3);
  *(int *)(param_1 + 4) = iVar1;
  return iVar1 == 0;
}
