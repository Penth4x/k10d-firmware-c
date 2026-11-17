/* @k10d invoke_virtual_on_nested_object @ 0x104e0b26
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Dereferences a nested object pointer and calls a virtual method with a computed this-
 *   adjustment.
 * summary:
 *   The function extracts a pointer from param_1+0x10, then calls fill_byte_array on a sub-
 *   object with arguments 0 and 0x40. It then performs a Cfront-style virtual call on the
 *   object at param_1+0x24, using the vtable slot at offset 0xc and a this-adjustment from
 *   offset 8. The virtual call passes the adjusted object, the sub-object pointer, and the
 *   base pointer as arguments.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_on_nested_object(void *param_1)

{
  void *pvVar1;
  uint32_t uVar2;
  int iVar3;
  
  pvVar1 = (void *)(*(uint32_t **)((int)param_1 + 0x10))[2];
  uVar2 = **(uint32_t **)((int)param_1 + 0x10);
  fill_byte_array(pvVar1,0,0x40);
  iVar3 = **(int **)((int)param_1 + 0x24);
  (**(code **)(iVar3 + 0xc))
            ((int)*(int **)((int)param_1 + 0x24) + (int)*(short *)(iVar3 + 8),pvVar1,uVar2,0);
  return;
}
