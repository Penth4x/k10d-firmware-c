/* @k10d test_bitmask_condition @ 0x10467430
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 144_table_bitmask_check (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool test_bitmask_condition(int param_1,int param_2,byte param_3)

{
  return ((*(byte *)(*(int *)(param_1 + 0x18) * 9 + param_2 + param_1) ^ param_3) &
          *(byte *)(param_1 + *(int *)(param_1 + 0x1c) * 9 + param_2) & param_3) != 0;
}
