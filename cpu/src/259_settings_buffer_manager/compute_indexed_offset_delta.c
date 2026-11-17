/* @k10d compute_indexed_offset_delta @ 0x104f4b14
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 259_settings_buffer_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compute_indexed_offset_delta(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 4) {
    iVar1 = *(int *)(param_2 * 4 + param_1 + 0x30) - *(int *)(param_2 * 4 + param_1 + 0x10);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}
