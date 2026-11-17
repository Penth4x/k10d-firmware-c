/* @k10d cls_10594c54_new @ 0x103b88dc
 * name: verified (structural evidence: heap_alloc(0x6c) when NULL; stores vtable 0x10594c54; returns param_1)
 * unit: 051_console_uart_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10594c54 (vtable 0x10594c54, 0x6c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x6c) when NULL; stores vtable 0x10594c54; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_10594c54_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x6c), param_1 != (uint32_t *)0x0)) {
    cls_1059e128_new(param_1);
    cls_105a2a8c_new(param_1 + 0x10);
    *param_1 = 0x10594c54/*ROM*/;
    param_1[1] = 0x10594d24/*ROM*/;
    param_1[6] = 0x10594d44/*ROM*/;
    param_1[0xb] = 0x10594d74/*ROM*/;
    param_1[0xc] = 0x10594d8c/*ROM*/;
    param_1[0xd] = 0x10594dac/*ROM*/;
    param_1[0x11] = 0x10594dec/*ROM*/;
    cls_105a2af8_new(param_1 + 0x12);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    *(uint16_t *)(param_1 + 0x17) = 0;
    param_1[0x18] = 0;
    *(uint8_t *)(param_1 + 0x19) = 0;
    *(uint8_t *)((int)param_1 + 0x65) = 0;
    param_1[0x1a] = 0;
  }
  return param_1;
}
