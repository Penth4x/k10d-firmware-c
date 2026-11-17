/* @k10d store_result_at_offset_0x1c @ 0x104e3d46
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t store_result_at_offset_0x1c(int param_1,void *param_2)

{
  uint32_t uVar1;
  
  uVar1 = call_helper_with_offset_104e3d26((void *)param_1,(int)param_2);
  *(uint32_t *)(param_1 + 0x1c) = uVar1;
  return 1;
}
