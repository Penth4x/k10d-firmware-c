/* @k10d dispatch_two_virtual_operations @ 0x1049a3d2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 203_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Invokes two virtual methods on an object referenced by param_1, passing results from
 *   helper functions as arguments.
 * summary:
 *   The function dereferences a pointer at param_1+4 and calls compute_struct_array_offset
 *   and read_struct_field_by_index_1049a7dc with param_2. It then performs two virtual
 *   calls on the object at param_1+8: first via vtable slot 6 (offset 0x34), and if the
 *   result is non-zero, via vtable slot 4 (offset 0x24). The return value is the result of
 *   the second virtual call or zero if the first failed. The specific subsystem or role is
 *   not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_two_virtual_operations(int param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  
  uVar4 = *(uint32_t *)**(uint32_t **)(param_1 + 4);
  iVar1 = compute_struct_array_offset((int)*(uint32_t **)(param_1 + 4),param_2);
  uVar5 = *(uint32_t *)(iVar1 + 0x30);
  uVar3 = *(uint32_t *)((int)*(void **)(param_1 + 4) + 8);
  uVar2 = read_struct_field_by_index_1049a7dc(*(void **)(param_1 + 4),param_2);
  iVar1 = **(int **)(param_1 + 8);
  iVar1 = (**(code **)(iVar1 + 0x34))
                    ((int)*(int **)(param_1 + 8) + (int)*(short *)(iVar1 + 0x30),uVar4,uVar5,0);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = **(int **)(param_1 + 8);
    uVar2 = (**(code **)(iVar1 + 0x24))
                      ((int)*(int **)(param_1 + 8) + (int)*(short *)(iVar1 + 0x20),uVar4,uVar3,uVar2
                      );
  }
  return uVar2;
}
