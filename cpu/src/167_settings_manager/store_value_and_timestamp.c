/* @k10d store_value_and_timestamp @ 0x10476aba
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t store_value_and_timestamp(void *param_1,uint32_t *param_2)

{
  uint32_t uVar1;
  
  *(uint32_t *)((int)param_1 + 4) = *param_2;
  uVar1 = get_or_init_sram_buffer_10478858();
  *(uint32_t *)((int)param_1 + 8) = uVar1;
  return 1;
}
