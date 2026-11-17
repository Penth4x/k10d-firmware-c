/* @k10d store_value_in_struct_field @ 0x104af25e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_value_in_struct_field(void *param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  uVar1 = get_or_init_sram_buffer_104ae40c();
  (*(code *)0x104ae85c/*ROM*/)(uVar1,param_2);
  *(uint32_t *)(*(int *)((int)param_1 + 4) + 0xc) = param_2;
  return;
}
