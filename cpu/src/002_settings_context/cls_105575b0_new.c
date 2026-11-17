/* @k10d cls_105575b0_new @ 0x10363bb0
 * name: verified (structural evidence: heap_alloc(0x298) when NULL; stores vtable 0x105575b0; returns param_1)
 * unit: 002_settings_context (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105575b0 (vtable 0x105575b0, 0x298 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x298) when NULL; stores vtable 0x105575b0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105575b0_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x298), param_1 != (uint32_t *)0x0)) {
    cls_10557c88_new(param_1);
    *param_1 = (uint32_t)&DAT_105575b0/*ROM*/;
    *(uint8_t *)(param_1 + 5) = 0;
    *(uint8_t *)((int)param_1 + 0x15) = 0;
    *(uint8_t *)((int)param_1 + 0x16) = 0;
    param_1[6] = 0;
    init_0x50_byte_object_1051e422((void *)(param_1 + 7));
    *(uint8_t *)(param_1 + 0x1b) = 0;
    param_1[0x1c] = 0;
    cls_105586cc_new(param_1 + 0x1d);
    cls_10558830_new(param_1 + 0x36);
    cls_10558568_new(param_1 + 0x51);
    cls_10559218_new(param_1 + 0x6d);
    cls_10558a60_new(param_1 + 0x77);
    param_1[0x81] = 0;
    param_1[0x82] = 0;
    param_1[0x83] = 0;
    param_1[0x84] = 0x2e;
    param_1[0x85] = 0;
    *(uint16_t *)(param_1 + 0x86) = 0;
    *(uint16_t *)((int)param_1 + 0x21a) = 0;
    *(uint16_t *)(param_1 + 0x87) = 0;
    *(uint16_t *)((int)param_1 + 0x21e) = 0;
    *(uint8_t *)(param_1 + 0x88) = 0;
    cls_105aae94_new(param_1 + 0x89);
    alloc_and_zero_struct_104bb416(param_1 + 0x8f);
  }
  return param_1;
}
