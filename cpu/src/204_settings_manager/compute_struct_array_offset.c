/* @k10d compute_struct_array_offset @ 0x1049a7c0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 204_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compute_struct_array_offset(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 < 0) || (3 < param_2)) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 + 0x14 + param_2 * 0x38;
  }
  return iVar1;
}
