/* @k10d store_result_at_offset_four_104759b2 @ 0x104759b2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t store_result_at_offset_four_104759b2(void *param_1)

{
  uint32_t uVar1;
  
  uVar1 = heap_alloc_one_byte_1045926e(0);
  *(uint32_t *)((int)param_1 + 4) = uVar1;
  return 1;
}
