/* @k10d construct_cls_105c03c8_object @ 0x104e390e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Constructs a cls_105c03c8 object by allocating memory if needed and initializing base
 *   class and fields.
 * summary:
 *   If param_1 is NULL, it calls allocate_system_heap_block(0x2c) to allocate 44 bytes. It
 *   then calls cls_105c0074_new to initialize the base class. It sets the vtable pointer at
 *   offset 0x18 to 0x105c03c8 and initializes fields at offsets 0x1c through 0x28 to
 *   0xffffffff, 0, 0, and 0 respectively. Returns the object pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int construct_cls_105c03c8_object(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)allocate_system_heap_block((void *)0x2c), (cls_105c0074 *)param_1 != (cls_105c0074 *)0x0)) {
    cls_105c0074_new((cls_105c0074 *)param_1);
    ((cls_105c0074 *)param_1)->field_0x18 = 0x105c03c8/*ROM*/;
    ((cls_105c0074 *)((int)param_1 + 0x1c))->field_0x0 = 0xffffffff;
    ((cls_105c0074 *)((int)param_1 + 0x1c))->field_0x4 = 0;
    ((cls_105c0074 *)((int)param_1 + 0x1c))->field_0x8 = (uintptr_t)((void *)0x0);
    ((cls_105c0074 *)((int)param_1 + 0x1c))->field_0xc = 0;
  }
  return (int)(cls_105c0074 *)param_1;
}
