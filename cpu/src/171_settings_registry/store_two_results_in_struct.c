/* @k10d store_two_results_in_struct @ 0x1047fb70
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 171_settings_registry (unit names are model-proposed)
 * purpose:
 *   Calls two helper functions with param_2 and stores their return values into a struct at
 *   param_1.
 * summary:
 *   The function invokes an external function at 0x10544148 with param_2 and writes the
 *   32-bit result to offset 4 of the object pointed to by param_1. It then calls
 *   clear_entry_flags_in_table with a global pointer _DAT_80010030 and param_2, returning
 *   that result. The specific roles of the helpers and the struct layout are not
 *   determinable from the provided pseudocode and callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t store_two_results_in_struct(int param_1,uint8_t *param_2)

{
  uint32_t uVar1;
  
  uVar1 = (*(code *)0x10544148/*ROM*/)(param_2);
  *(uint32_t *)(param_1 + 4) = uVar1;
  uVar1 = clear_entry_flags_in_table((void *)_DAT_80010030/*SDRAM*/,param_2);
  return uVar1;
}
