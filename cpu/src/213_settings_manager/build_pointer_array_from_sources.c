/* @k10d build_pointer_array_from_sources @ 0x104af286
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates an array of param_4 pointers, initializes each via
 *   alloc_and_init_small_struct_104af372, copies data from param_2, and stores param_3
 *   values at offset +4.
 * summary:
 *   The function allocates a heap block of param_4*4 bytes and stores the pointer at
 *   param_1+0xc. It iterates param_4 times, calling alloc_and_init_small_struct_104af372 to
 *   initialize each slot, store_object_and_call_virtual_slot to copy data from param_2, and
 *   writes the corresponding value from param_3 at offset +4 of each slot. Finally, it
 *   calls an unknown function at 0x1053620a with param_1+4, the new array pointer, and
 *   param_4. The specific camera subsystem role is not determinable from the provided
 *   callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_pointer_array_from_sources(int param_1,int param_2,int param_3,int param_4)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = heap_alloc_2(param_4 << 2);
  *(uint32_t *)(param_1 + 0xc) = uVar1;
  uVar3 = 0;
  if (0 < param_4) {
    do {
      iVar4 = *(int *)(param_1 + 0xc);
      iVar2 = uVar3 * 4;
      uVar1 = (uint32_t)alloc_and_init_small_struct_104af372((uint32_t *)0x0);
      *(uint32_t *)(iVar4 + iVar2) = uVar1;
      store_object_and_call_virtual_slot((uint32_t *)(*(uint32_t *)(iVar2 + *(int *)(param_1 + 0xc))),*(uint32_t *)(iVar2 + param_2)
                  );
      *(uint32_t *)(*(int *)(iVar2 + *(int *)(param_1 + 0xc)) + 4) =
           *(uint32_t *)(iVar2 + param_3);
      uVar3 = uVar3 + 1 & 0xff;
    } while ((int)uVar3 < param_4);
  }
  (*(code *)0x1053620a/*ROM*/)(*(uint32_t *)(param_1 + 4),*(uint32_t *)(param_1 + 0xc),param_4);
  return;
}
