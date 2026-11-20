/* @k10d cls_105d5300_new @ 0x10508c4a
 * name: verified (structural evidence: heap_alloc(0x34) when NULL; stores vtable 0x105d5300; returns param_1)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d5300 (vtable 0x105d5300, 0x34 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x34) when NULL; stores vtable 0x105d5300; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105d5300_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x34), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    cls_1059e478_new(param_1 + 1);
    cls_105a2b50_new((void *)(param_1 + 2));
    *param_1 = 0x105d5300/*ROM*/;
    param_1[1] = 0x105d5338/*ROM*/;
    param_1[6] = 0x105d5350/*ROM*/;
    param_1[9] = 0;
    param_1[10] = 0;
    cls_105a2af8_new((void *)(param_1 + 0xb));
  }
  return param_1;
}
