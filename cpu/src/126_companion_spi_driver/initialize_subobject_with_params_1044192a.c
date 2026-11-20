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

/* WARNING: Struct "cls_105a0c1c": ignoring multiple overlapping fields */

uint32_t initialize_subobject_with_params_1044192a(cls_105a0c74 *param_1)

{
  struct {
    uint32_t uStack_18;
    uint32_t uStack_14;
    uint32_t uStack_10;
    uint32_t uStack_c;
  } _cfg_18;
  void *puVar1;
  uint32_t uVar2;
  uintptr_t sp;
  alloc_and_zero_16_bytes_104418b8(&_cfg_18.uStack_18);
  _cfg_18.uStack_18 = 0x67;
  _cfg_18.uStack_14 = 100;
  _cfg_18.uStack_c = 0xd;
  _cfg_18.uStack_10 = 0xb3;
  puVar1 = (void *)cls_105a0c1c_new((cls_105a0c1c *)0x0,&_cfg_18.uStack_18);
  param_1->field_0x4 = (uint32_t)(puVar1);
  uVar2 = (((vtbl_entry*)(*(int *)((char*)puVar1 + 4)))[2].fn)
                    ((char*)puVar1 + ((vtbl_entry*)(*(int *)((char*)puVar1 + 4)))[2].adj,0);
  free_heap_block_if_flagged_104418e0(&_cfg_18.uStack_18,2);
  return uVar2;
}
