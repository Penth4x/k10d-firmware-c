/* @k10d construct_cls_105c0d78_object @ 0x104e618c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * purpose:
 *   Constructs a cls_105c0d78 object by allocating or reusing memory and initializing its
 *   base class and vtable pointer.
 * summary:
 *   If param_1 is NULL, it calls allocate_heap_block_104e622e to allocate 0x20 bytes. It
 *   then calls cls_105c0074_new to initialize the base class. It sets the vtable pointer at
 *   offset 0x18 (param_1[6]) to 0x105c0d78 and clears the field at offset 0x1c
 *   (param_1[7]). Returns the object pointer in r4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int construct_cls_105c0d78_object(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)allocate_heap_block_104e622e((void *)0x20), param_1 != (uint32_t *)0x0)) {
    cls_105c0074_new(param_1);
    param_1[6] = 0x105c0d78/*ROM*/;
    param_1[7] = 0;
  }
  return (int)param_1;
}
