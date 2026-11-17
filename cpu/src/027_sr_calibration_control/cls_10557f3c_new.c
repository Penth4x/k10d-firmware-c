/* @k10d cls_10557f3c_new @ 0x1036edfc
 * name: verified (structural evidence: heap_alloc(0xc8) when NULL; stores vtable 0x10557f3c; returns param_1)
 * unit: 027_sr_calibration_control (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10557f3c (vtable 0x10557f3c, 0xc8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xc8) when NULL; stores vtable 0x10557f3c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_10557f3c_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)200), param_1 != (uint32_t *)0x0)) {
    cls_10557c88_new(param_1);
    cls_105a2c1c_new(param_1 + 5);
    *param_1 = (uint32_t)&DAT_10557f3c/*ROM*/;
    param_1[9] = (uint32_t)&DAT_10557fb4/*ROM*/;
    param_1[10] = 0;
    param_1[0xb] = 0;
    cls_10559e7c_new(param_1 + 0xc);
    cls_10599780_new(param_1 + 0x16);
    cls_10559760_new(param_1 + 0x20);
    alloc_and_zero_two_words_1045c3bc(param_1 + 0x2a);
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    *(uint8_t *)(param_1 + 0x2e) = 0;
    *(uint8_t *)((int)param_1 + 0xb9) = 0;
    cls_105a2af8_new(param_1 + 0x2f);
    *(uint8_t *)(param_1 + 0x31) = 0;
    *(uint8_t *)((int)param_1 + 0xc5) = 0;
    *(uint8_t *)((int)param_1 + 0xc6) = 0;
    *(uint8_t *)((int)param_1 + 199) = 0;
    wait_flg_obj(param_1 + 0x2f,2);
    alloc_pool_and_init_task(param_1 + 5,0x10,0x1000,4);
  }
  return param_1;
}
