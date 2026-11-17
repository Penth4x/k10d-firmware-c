/* @k10d create_and_init_subobject @ 0x10442efe
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Allocates a new object, stores its pointer in the caller's structure, and invokes its
 *   virtual slot 2 with argument 0.
 * summary:
 *   The function prepares a stack structure via alloc_and_zero_small_struct_10442e8e, sets
 *   fields to 0x5c001000, 0x5c001004, and 0xa5. It allocates a new object via
 *   cls_105a0df8_new and stores the pointer at offset 4 of param_1. It then invokes virtual
 *   slot 2 of the new object with argument 0 and calls free_heap_block_if_flagged_10442eb4
 *   with the stack structure and argument 2. The specific role of the object and the
 *   meaning of the constants are not determinable from the provided pseudocode and callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t create_and_init_subobject(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  
  alloc_and_zero_small_struct_10442e8e(&uStack_14);
  uStack_14 = 0x5c001000/*DISPLAY-CTL*/;
  uStack_10 = 0x5c001004/*DISPLAY-CTL*/;
  uStack_c = 0xa5;
  iVar1 = cls_105a0df8_new((uint32_t *)0x0,&uStack_14);
  *(int *)((int)param_1 + 4) = iVar1;
  uVar2 = (**(code **)(*(int *)(iVar1 + 4) + 0x14))
                    (iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x10),0);
  free_heap_block_if_flagged_10442eb4(&uStack_14,2);
  return uVar2;
}
