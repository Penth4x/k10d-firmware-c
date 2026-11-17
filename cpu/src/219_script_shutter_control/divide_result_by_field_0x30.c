/* @k10d divide_result_by_field_0x30 @ 0x104b6bba
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 219_script_shutter_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint divide_result_by_field_0x30(int param_1,char *param_2)

{
  uint uVar1;
  void *r7_in;
  
  uVar1 = parse_numeric_expression((uint32_t *)param_1,0,param_2,r7_in);
  if (*(uint *)(param_1 + 0x30) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 / *(uint *)(param_1 + 0x30);
  }
  return uVar1;
}
