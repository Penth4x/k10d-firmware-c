/* @k10d dispatch_virtual_call_with_four_args @ 0x104a7304
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Resolves a virtual method pointer from an object and invokes it with four arguments
 *   derived from the object and a helper result.
 * summary:
 *   The function reads an object pointer from param_2, extracts a sub-object at offset
 *   0x10, and calls read_struct_field_by_index_104a2a78 with param_2 and the constant 2. It
 *   then performs a Cfront-style virtual call using the vtable at offset 0x2c of the sub-
 *   object, passing the adjusted this pointer, the original object, and two fields from the
 *   helper's return value. The specific subsystem is not identifiable from the available
 *   information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_call_with_four_args(uint32_t param_1,uint32_t *param_2)

{
  int iVar1;
  int *piVar2;
  uint32_t *puVar3;
  int iVar4;
  
  puVar3 = (uint32_t *)*param_2;
  piVar2 = (int *)puVar3[4];
  iVar1 = read_struct_field_by_index_104a2a78(param_2,2);
  iVar4 = *piVar2;
  (**(code **)(iVar4 + 0x2c))
            ((int)piVar2 + (int)*(short *)(iVar4 + 0x28),*puVar3,*(uint32_t *)(iVar1 + 0x2c),
             *(uint32_t *)(iVar1 + 0x18));
  return;
}
