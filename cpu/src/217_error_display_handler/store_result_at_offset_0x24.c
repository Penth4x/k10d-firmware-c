/* @k10d store_result_at_offset_0x24 @ 0x104b5bd0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 217_error_display_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_result_at_offset_0x24(int param_1,char *param_2)

{
  uint uVar1;
  void *r7_in;
  
  uVar1 = parse_numeric_expression((uint32_t *)param_1,0,param_2,r7_in);
  *(short *)(param_1 + 0x24) = (short)uVar1;
  return;
}
