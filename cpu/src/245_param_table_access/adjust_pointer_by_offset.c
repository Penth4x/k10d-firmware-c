/* @k10d adjust_pointer_by_offset @ 0x104d682a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 245_param_table_access (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int adjust_pointer_by_offset(int param_1,int param_2)

{
  if (param_2 == 0) {
    param_1 = param_1 + 0x2f8;
  }
  return param_1;
}
