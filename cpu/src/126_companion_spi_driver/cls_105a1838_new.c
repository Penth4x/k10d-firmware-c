/* @k10d cls_105a1838_new @ 0x10446840
 * name: verified (structural evidence: heap_alloc(0x8) when NULL; stores vtable 0x105a1838; returns param_1)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a1838 (vtable 0x105a1838, 0x8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x8) when NULL; stores vtable 0x105a1838; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105a1838_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)8), param_1 != (uint32_t *)0x0)) {
    cls_1059e2b8_new(param_1);
    param_1[1] = 0x105a1838/*ROM*/;
  }
  return (int)param_1;
}
