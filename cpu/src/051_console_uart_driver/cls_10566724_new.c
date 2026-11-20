/* @k10d cls_10566724_new @ 0x103b4e8e
 * name: verified (structural evidence: heap_alloc(0x60) when NULL; stores vtable 0x10566724; returns param_1)
 * unit: 051_console_uart_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10566724 (vtable 0x10566724, 0x60 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x60) when NULL; stores vtable 0x10566724; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_10566724_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x60), param_1 != (uint32_t *)0x0)) {
    cls_105643d0_new((void *)param_1);
    cls_1059e478_new((void *)(param_1 + 0x10));
    *param_1 = 0x10566724/*ROM*/;
    param_1[0x10] = 0x105667c4/*ROM*/;
    initialize_lens_update_object((void *)(param_1 + 0x11),0x10);
    *(uint8_t *)(param_1 + 0x15) = 0;
    *(uint8_t *)((int)param_1 + 0x55) = 0;
    *(uint8_t *)((int)param_1 + 0x56) = 0;
    *(uint8_t *)((int)param_1 + 0x57) = 0;
    *(uint8_t *)(param_1 + 0x16) = 0;
    param_1[0x17] = 0;
  }
  return param_1;
}
