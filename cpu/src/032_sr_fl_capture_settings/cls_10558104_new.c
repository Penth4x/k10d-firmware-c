/* @k10d cls_10558104_new @ 0x10371742
 * name: verified (structural evidence: heap_alloc(0x700) when NULL; stores vtable 0x10558104; returns param_1)
 * unit: 032_sr_fl_capture_settings (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10558104 (vtable 0x10558104, 0x700 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x700) when NULL; stores vtable 0x10558104; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_10558104_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x700), param_1 != (uint32_t *)0x0)) {
    cls_10557c88_new(param_1);
    *param_1 = (uint32_t)&DAT_10558104/*ROM*/;
    *(uint8_t *)(param_1 + 5) = 0;
    *(uint8_t *)((int)param_1 + 0x15) = 0;
    param_1[6] = 0;
    param_1[7] = 1;
    cls_10598538_new(param_1 + 8);
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    *(uint8_t *)(param_1 + 0x17) = 0;
    *(uint8_t *)((int)param_1 + 0x5d) = 0;
    *(uint8_t *)((int)param_1 + 0x5e) = 0;
    *(uint8_t *)((int)param_1 + 0x5f) = 0;
    *(uint8_t *)(param_1 + 0x18) = 0;
    *(uint8_t *)((int)param_1 + 0x61) = 0;
    *(uint8_t *)((int)param_1 + 0x62) = 0;
    *(uint8_t *)((int)param_1 + 99) = 0;
    *(uint8_t *)(param_1 + 0x19) = 0;
    *(uint8_t *)((int)param_1 + 0x65) = 0;
    *(uint8_t *)((int)param_1 + 0x66) = 0;
    *(uint8_t *)((int)param_1 + 0x67) = 0;
    *(uint8_t *)(param_1 + 0x1a) = 0;
    *(uint8_t *)((int)param_1 + 0x69) = 0;
    *(uint8_t *)((int)param_1 + 0x6a) = 0;
    *(uint8_t *)((int)param_1 + 0x6b) = 0;
    param_1[0x1f] = 0;
    cls_105b9458_new(param_1 + 0x20);
    cls_105b9458_new(param_1 + 0xa5);
    construct_0x254_byte_object(param_1 + 0x12a);
    *(uint8_t *)(param_1 + 0x1bf) = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
  }
  return param_1;
}
