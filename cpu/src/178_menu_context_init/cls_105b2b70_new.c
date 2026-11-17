/* @k10d cls_105b2b70_new @ 0x10485f3c
 * name: verified (structural evidence: heap_alloc(0xac) when NULL; stores vtable 0x105b2b70; returns param_1)
 * unit: 178_menu_context_init (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b2b70 (vtable 0x105b2b70, 0xac bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xac) when NULL; stores vtable 0x105b2b70; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105b2b70_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0xac), param_1 != (uint32_t *)0x0)) {
    cls_1059e128_new(param_1);
    cls_105a2a8c_new(param_1 + 0x10);
    *param_1 = (uint32_t)&DAT_105b2b70/*ROM*/;
    param_1[1] = (uint32_t)&DAT_105b2c30/*ROM*/;
    param_1[6] = (uint32_t)&DAT_105b2c50/*ROM*/;
    param_1[0xb] = (uint32_t)&DAT_105b2c80/*ROM*/;
    param_1[0xc] = (uint32_t)&DAT_105b2c98/*ROM*/;
    param_1[0xd] = (uint32_t)&DAT_105b2cb8/*ROM*/;
    param_1[0x11] = (uint32_t)&DAT_105b2cf8/*ROM*/;
    cls_105a2af8_new(param_1 + 0x12);
    *(uint8_t *)(param_1 + 0x14) = 0;
    param_1[0x15] = 0;
    *(uint8_t *)(param_1 + 0x16) = 0;
    cls_105a8a1c_new(param_1 + 0x17);
    *(uint8_t *)(param_1 + 0x27) = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
  }
  return param_1;
}
