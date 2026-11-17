/* @k10d set_value_if_valid @ 0x10427758
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 104_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Retrieves a pointer from an unknown helper, validates it against a second helper, and
 *   stores param_2 into *param_1 if validation succeeds.
 * summary:
 *   The function calls get_or_init_sram_buffer_104277bc to obtain a pointer. If the pointer
 *   is non-null, it calls register_entry_in_table with the pointer, param_2, and param_1.
 *   If register_entry_in_table returns non-zero, the function writes param_2 to the memory
 *   location pointed to by param_1 and returns 1. Otherwise, it returns 0. The specific
 *   subsystem or data type is not identifiable from the provided pseudocode and unknown
 *   callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_value_if_valid(int *param_1,int param_2)

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
