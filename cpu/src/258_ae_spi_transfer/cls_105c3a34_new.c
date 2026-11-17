/* @k10d cls_105c3a34_new @ 0x104f3bbc
 * name: verified (structural evidence: heap_alloc(0x30) when NULL; stores vtable 0x105c3a34; returns param_1)
 * unit: 258_ae_spi_transfer (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105c3a34 (vtable 0x105c3a34, 0x30 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x30) when NULL; stores vtable 0x105c3a34; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105c3a34_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x30), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    cls_1059e408_new(param_1 + 1);
    *param_1 = 0x105c3a34/*ROM*/;
    param_1[1] = 0x105c3a64/*ROM*/;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    cls_1059e288_new(param_1 + 6);
  }
  return param_1;
}
