/* @k10d cls_10557b38_new @ 0x103693ac
 * name: verified (structural evidence: heap_alloc(0x2c4) when NULL; stores vtable 0x10557b38; returns param_1)
 * unit: 014_io_settings_control (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10557b38 (vtable 0x10557b38, 0x2c4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x2c4) when NULL; stores vtable 0x10557b38; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_10557b38_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x2c4), param_1 != (uint32_t *)0x0)) {
    cls_10557c88_new(param_1);
    *param_1 = (uint32_t)&DAT_10557b38/*ROM*/;
    cls_10558fd4_new(param_1 + 5);
    alloc_and_zero_struct_104bb416(param_1 + 0xf);
    cls_105b9458_new(param_1 + 0x26);
    param_1[0xab] = 0;
    *(uint8_t *)(param_1 + 0xac) = 0;
    *(uint8_t *)((int)param_1 + 0x2b1) = 0;
    *(uint8_t *)((int)param_1 + 0x2b2) = 0;
    *(uint8_t *)((int)param_1 + 0x2b3) = 0;
    *(uint8_t *)(param_1 + 0xad) = 0;
    *(uint8_t *)((int)param_1 + 0x2b5) = 0;
    *(uint8_t *)((int)param_1 + 0x2b6) = 0;
    *(uint8_t *)((int)param_1 + 0x2b7) = 0;
    *(uint8_t *)(param_1 + 0xae) = 0;
    *(uint8_t *)((int)param_1 + 0x2b9) = 1;
    *(uint8_t *)((int)param_1 + 0x2ba) = 1;
    *(uint8_t *)((int)param_1 + 699) = 1;
    *(uint8_t *)(param_1 + 0xaf) = 1;
    *(uint8_t *)((int)param_1 + 0x2bd) = 0;
    *(uint8_t *)((int)param_1 + 0x2be) = 0;
    *(uint8_t *)((int)param_1 + 0x2bf) = 1;
    *(uint8_t *)(param_1 + 0xb0) = 1;
    *(uint8_t *)((int)param_1 + 0x2c1) = 0;
    *(uint8_t *)((int)param_1 + 0x2c2) = 0;
  }
  return param_1;
}
