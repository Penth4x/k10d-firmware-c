/* @k10d read_table_entry_by_index @ 0x104a8c7e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_table_entry_by_index(void *param_1,int param_2)

{
  uint32_t uVar1;
  
  if (*(int *)((int)param_1 + 0xc) == 0) {
    uVar1 = *(uint32_t *)((int)param_1 + 8);
  }
  else {
    uVar1 = *(uint32_t *)(*(int *)((int)param_1 + 0xc) + param_2 * 4);
  }
  return uVar1;
}
