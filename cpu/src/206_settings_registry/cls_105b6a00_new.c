/* @k10d cls_105b6a00_new @ 0x104a8692
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Constructs a cls_105b6a00 object, heap-allocating it if param_1 is NULL, and
 *   initializes its base and member fields.
 * summary:
 *   Allocates 0x38 bytes via allocate_heap_pool_block_104a89ae when param_1 is NULL, sets
 *   the vtable pointer to 0x105b6a00, and calls the base class constructor
 *   cls_105b6a10_new. It initializes a member at offset 0x04 via cls_105a5c2c_new_2 using
 *   param_2 and a value from get_or_create_singleton_1051b824, and sets several other
 *   fields to zero or 0xffffffff. Returns the object pointer in r4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105b6a00_new(uint32_t *param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)allocate_heap_pool_block_104a89ae((void *)0x38), (cls_105b6a10 *)param_1 != (cls_105b6a10 *)0x0)) {
    ((cls_105b6a10 *)(param_1 + 0xd))->field_0x0 = (uintptr_t)((void *)0x105b6a00/*ROM*/);
    cls_105b6a10_new((cls_105b6a10 *)param_1);
    uVar1 = get_or_create_singleton_1051b824();
    cls_105a5c2c_new_2((cls_105b6a10 *)(param_1 + 1),param_2,uVar1);
    ((cls_105b6a10 *)(param_1 + 7))->field_0x0 = (uintptr_t)((void *)0x0);
    initialize_lens_update_object((cls_105b6a10 *)(param_1 + 8),8);
    ((cls_105b6a10 *)(param_1 + 10))->field_0x0 = (uintptr_t)((void *)0x0);
    ((cls_105b6a10 *)(param_1 + 0xb))->field_0x0 = (uintptr_t)((void *)0x0);
    ((cls_105b6a10 *)(param_1 + 0xc))->field_0x0 = (uintptr_t)((void *)0x0);
    ((cls_105b6a10 *)(param_1 + 8))->field_0x0 = (uintptr_t)((void *)0xffffffff);
    ((cls_105b6a10 *)(param_1 + 9))->field_0x0 = (uintptr_t)((void *)0x0);
  }
  return (int)(cls_105b6a10 *)param_1;
}
