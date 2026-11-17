/* @k10d find_last_byte_in_buffer @ 0x1047e572
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 170_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int find_last_byte_in_buffer(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = -1;
  iVar2 = iVar1;
  if (((-1 < param_2) && (param_2 < param_1[1])) && (*param_1 != 0)) {
    for (; (iVar2 = iVar1, -1 < param_2 &&
           (iVar2 = param_2, *(char *)(*param_1 + param_2) != '\x01')); param_2 = param_2 + -1) {
    }
  }
  return iVar2;
}
