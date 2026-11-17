/* @k10d add_offset_by_flag @ 0x104d686c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 245_param_table_access (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int add_offset_by_flag(int param_1,int param_2)

{
  if (param_2 == 0) {
    param_1 = param_1 + 0x1968;
  }
  else {
    param_1 = param_1 + 0x1940;
  }
  return param_1;
}
