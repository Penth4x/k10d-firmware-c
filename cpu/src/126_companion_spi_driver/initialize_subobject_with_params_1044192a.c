/* @k10d initialize_subobject_with_params_1044192a @ 0x1044192a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Initializes a sub-object by setting four parameters and invoking a virtual method on
 *   it.
 * summary:
 *   The function calls alloc_and_zero_16_bytes_104418b8 to prepare a stack buffer, then
 *   sets four specific values (0x67, 100, 0xd, 0xb3) into it. It allocates a new object of
 *   type cls_105a0c1c using these parameters and stores the pointer in param_1+4. Finally,
 *   it invokes virtual slot 2 of the newly created object's sub-object and calls
 *   free_heap_block_if_flagged_104418e0 with the buffer and a value of 2.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_subobject_with_params_1044192a(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  
  alloc_and_zero_16_bytes_104418b8(&uStack_18);
  uStack_18 = 0x67;
  uStack_14 = 100;
  uStack_c = 0xd;
  uStack_10 = 0xb3;
  iVar1 = cls_105a0c1c_new((uint32_t *)0x0,&uStack_18);
  *(int *)((int)param_1 + 4) = iVar1;
  uVar2 = (**(code **)(*(int *)(iVar1 + 4) + 0x14))
                    (iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x10),0);
  free_heap_block_if_flagged_104418e0(&uStack_18,2);
  return uVar2;
}
