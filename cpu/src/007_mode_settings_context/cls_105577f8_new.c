/* @k10d cls_105577f8_new @ 0x10366a40
 * name: verified (structural evidence: heap_alloc(0x498) when NULL; stores vtable 0x105577f8; returns param_1)
 * unit: 007_mode_settings_context (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105577f8 (vtable 0x105577f8, 0x498 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x498) when NULL; stores vtable 0x105577f8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105577f8_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x498), param_1 != (uint32_t *)0x0)) {
    cls_10557c88_new(param_1);
    *param_1 = (uint32_t)&DAT_105577f8/*ROM*/;
    *(uint8_t *)(param_1 + 5) = 0;
    *(uint8_t *)((int)param_1 + 0x15) = 0;
    param_1[6] = 1;
    param_1[7] = 0;
    cls_10558c04_new(param_1 + 8);
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    *(uint8_t *)(param_1 + 0x15) = 0;
    *(uint8_t *)((int)param_1 + 0x55) = 0;
    *(uint8_t *)((int)param_1 + 0x56) = 0;
    *(uint8_t *)((int)param_1 + 0x57) = 0;
    *(uint8_t *)(param_1 + 0x16) = 0;
    *(uint8_t *)((int)param_1 + 0x59) = 0;
    *(uint8_t *)((int)param_1 + 0x5a) = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    cls_105b9458_new(param_1 + 0x1b);
    cls_105b9458_new(param_1 + 0xa0);
    *(uint8_t *)(param_1 + 0x125) = 0;
  }
  return param_1;
}
