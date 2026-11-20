/* @k10d cls_105d4ed8_new @ 0x10503f98
 * name: verified (structural evidence: heap_alloc(0x34) when NULL; stores vtable 0x105d4ed8; returns param_1)
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d4ed8 (vtable 0x105d4ed8, 0x34 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x34) when NULL; stores vtable 0x105d4ed8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105d4ed8_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x34), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    cls_1059e478_new(param_1 + 1);
    cls_105a2b50_new((void *)(param_1 + 2));
    *param_1 = 0x105d4ed8/*ROM*/;
    param_1[1] = 0x105d4f10/*ROM*/;
    param_1[6] = 0x105d4f28/*ROM*/;
    param_1[9] = 0;
    param_1[10] = 0;
    cls_105a2af8_new((void *)(param_1 + 0xb));
  }
  return param_1;
}
