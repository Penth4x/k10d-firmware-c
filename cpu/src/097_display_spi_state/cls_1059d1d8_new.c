/* @k10d cls_1059d1d8_new @ 0x1041b970
 * name: verified (structural evidence: heap_alloc(0xf8) when NULL; stores vtable 0x1059d1d8; returns param_1)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059d1d8 (vtable 0x1059d1d8, 0xf8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xf8) when NULL; stores vtable 0x1059d1d8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_1059d1d8_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0xf8), param_1 != (uint32_t *)0x0)) {
    cls_1059cbf0_new(param_1);
    cls_105a2a8c_new(param_1 + 0x24);
    *param_1 = 0x1059d1d8/*ROM*/;
    param_1[1] = 0x1059d2d0/*ROM*/;
    param_1[2] = 0x1059d2f0/*ROM*/;
    param_1[8] = 0x1059d318/*ROM*/;
    param_1[0x25] = 0x1059d330/*ROM*/;
    *(uint8_t *)(param_1 + 0x26) = 0;
    param_1[0x27] = 0;
    *(uint8_t *)(param_1 + 0x28) = 0;
    *(uint8_t *)((int)param_1 + 0xa1) = 0;
    *(uint8_t *)((int)param_1 + 0xa2) = 0;
    *(uint8_t *)((int)param_1 + 0xa3) = 0;
    *(uint8_t *)(param_1 + 0x29) = 0;
    *(uint8_t *)((int)param_1 + 0xa5) = 0;
    *(uint8_t *)((int)param_1 + 0xa6) = 0;
    *(uint8_t *)((int)param_1 + 0xa7) = 0;
    *(uint8_t *)(param_1 + 0x2a) = 0;
    *(uint8_t *)((int)param_1 + 0xa9) = 0;
    *(uint8_t *)((int)param_1 + 0xaa) = 0;
    *(uint8_t *)((int)param_1 + 0xab) = 0;
    *(uint16_t *)(param_1 + 0x2b) = 0;
    *(uint16_t *)((int)param_1 + 0xae) = 0;
    *(uint16_t *)(param_1 + 0x2c) = 0;
    *(uint16_t *)((int)param_1 + 0xb2) = 0;
    *(uint16_t *)(param_1 + 0x2d) = 0;
    param_1[0x2e] = 2;
    *(uint8_t *)(param_1 + 0x30) = 0;
    cls_105a2af8_new(param_1 + 0x31);
    cls_105a2af8_new(param_1 + 0x33);
    param_1[0x35] = 0;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
  }
  return param_1;
}
