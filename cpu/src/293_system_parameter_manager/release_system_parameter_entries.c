/* @k10d release_system_parameter_entries @ 0x105361ae
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 293_system_parameter_manager (unit names are model-proposed)
 * purpose:
 *   Frees a single parameter object and an array of parameter entries referenced by a
 *   system parameter store structure.
 * summary:
 *   Clears the field at offset 8 of the structure pointed to by param_1. Calls
 *   initialize_sysparam_store_fields on the pointer at offset 0x10. If the pointer at
 *   offset 0x28 is non-null and the count at offset 0x2c is non-zero, iterates through the
 *   array of pointers and calls start_async_operation on each element. The module context
 *   suggests this is part of the system parameter store cleanup.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_system_parameter_entries(int param_1)

{
  uint uVar1;
  
  *(uint32_t *)(param_1 + 8) = 0;
  initialize_sysparam_store_fields((void *)(*(uint32_t *)(param_1 + 0x10)));
  if ((*(int *)(param_1 + 0x28) != 0) && (uVar1 = 0, *(char *)(param_1 + 0x2c) != '\0')) {
    do {
      start_async_operation((void *)(*(uint32_t *)(*(int *)(param_1 + 0x28) + uVar1 * 4)));
      uVar1 = uVar1 + 1 & 0xff;
    } while (uVar1 < *(byte *)(param_1 + 0x2c));
  }
  return;
}
