/* @k10d check_and_zero_two_buffers @ 0x1047e22a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 170_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_and_zero_two_buffers(int *param_1)

{
  bool bVar1;
  
  bVar1 = release_object_if_allocated_1047e45e(param_1);
  if (bVar1) {
    fill_byte_array((void *)param_1[4],0,param_1[1] << 2);
    fill_byte_array((void *)param_1[5],0,param_1[1] << 2);
  }
  return bVar1;
}
