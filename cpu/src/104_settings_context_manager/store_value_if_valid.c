/* @k10d store_value_if_valid @ 0x10427656
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 104_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Retrieves a pointer, validates it with a helper, and stores param_2 into *param_1 if
 *   validation succeeds.
 * summary:
 *   Calls get_or_init_sram_buffer_104277bc to obtain a pointer. If non-null, calls
 *   register_entry_in_table with that pointer, param_2, and param_1. If
 *   register_entry_in_table returns non-zero, writes param_2 to the memory location pointed
 *   to by param_1 and returns 1, otherwise returns 0. The specific domain role is unclear
 *   without callee context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t store_value_if_valid(int *param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  uint32_t uVar3;
  
  uVar3 = 0;
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  if ((pvVar1 != (void *)0x0) && (iVar2 = register_entry_in_table(pvVar1,param_2,param_1), iVar2 != 0)) {
    *param_1 = param_2;
    uVar3 = 1;
  }
  return uVar3;
}
