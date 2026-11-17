/* @k10d dispatch_virtual_slot_5 @ 0x104ab5c8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 210_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 5 of an object and conditionally calls two helpers based on the
 *   result.
 * summary:
 *   The function performs a virtual call to slot 5 (offset 0x3c) of the object pointed to
 *   by param_1. If the result is zero, it modifies flags at offsets 0x24 and 0x28, then
 *   calls check_flag_match_in_array twice with different parameters. If the second call
 *   fails, it updates flags, calls another virtual method (slot 2), calls
 *   clear_object_flags, and sets a flag at offset 0x17. Returns the value at offset 0x17.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t dispatch_virtual_slot_5(void *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uintptr_t sp;
  uint *puVar4;
  uint8_t auStack_18 [4];
  
  puVar4 = (uint *)auStack_18;
  iVar2 = (**(code **)(*(int *)((int)param_1 + 4) + 0x3c))
                    ((int)*(short *)(*(int *)((int)param_1 + 4) + 0x38) + (int)param_1);
  if (iVar2 == 0) {
    *(uint8_t *)((int)param_1 + 0x16) = 0;
    **(uint **)((int)param_1 + 0x28) = **(uint **)((int)param_1 + 0x28) & 0xffffbfff;
    **(uint **)((int)param_1 + 0x24) = **(uint **)((int)param_1 + 0x24) | 8;
    puVar3 = *(uint **)((int)param_1 + 0x24);
    *puVar4 = 0xffffffff;
    iVar2 = check_flag_match_in_array(param_1,puVar3,0,8,*puVar4);
    if (iVar2 != 0) {
      **(uint **)((int)param_1 + 0x28) = **(uint **)((int)param_1 + 0x28) & 0xffffbfff;
      puVar3 = *(uint **)((int)param_1 + 0x2c);
      *puVar4 = 0xffffffff;
      iVar2 = check_flag_match_in_array(param_1,puVar3,0,0x8000,*puVar4);
      if (iVar2 != 0) {
        uVar1 = **(uint **)((int)param_1 + 0x28) & 0xfffffffc;
        if (param_2 == 1) {
          uVar1 = uVar1 | 1;
        }
        **(uint **)((int)param_1 + 0x28) = uVar1;
        (**(code **)(*(int *)((int)param_1 + 4) + 0x1c))
                  ((int)*(short *)(*(int *)((int)param_1 + 4) + 0x18) + (int)param_1,0);
        clear_object_flags(param_1,param_2);
        *(uint8_t *)((int)param_1 + 0x17) = 1;
        **(uint **)((int)param_1 + 0x28) = **(uint **)((int)param_1 + 0x28) & 0xffffffdf;
      }
    }
  }
  return *(uint8_t *)((int)param_1 + 0x17);
}
