/* @k10d cls_105586cc_new @ 0x10376626
 * name: verified (structural evidence: heap_alloc(0x64) when NULL; stores vtable 0x105586cc; returns param_1)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105586cc (vtable 0x105586cc, 0x64 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x64) when NULL; stores vtable 0x105586cc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105586cc_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)100), param_1 != (uint32_t *)0x0)) {
    cls_10559c4c_new(param_1);
    *param_1 = (uint32_t)&DAT_105586cc/*ROM*/;
    param_1[1] = (uint32_t)&DAT_105587e4/*ROM*/;
    param_1[2] = (uint32_t)&DAT_1055880c/*ROM*/;
    param_1[0xc] = 0;
    *(uint16_t *)(param_1 + 0xe) = 0;
    *(uint16_t *)((int)param_1 + 0x3a) = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    *(uint8_t *)(param_1 + 0x18) = 0;
    *(uint8_t *)(param_1 + 0xd) = 0;
    *(uint8_t *)((int)param_1 + 0x35) = 0;
    *(uint8_t *)((int)param_1 + 0x36) = 0;
    *(uint8_t *)((int)param_1 + 0x37) = 0;
  }
  return param_1;
}
