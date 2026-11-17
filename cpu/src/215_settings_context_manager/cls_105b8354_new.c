/* @k10d cls_105b8354_new @ 0x104b47e4
 * name: verified (structural evidence: heap_alloc(0x78) when NULL; stores vtable 0x105b8354; returns param_1)
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b8354 (vtable 0x105b8354, 0x78 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x78) when NULL; stores vtable 0x105b8354; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105b8354_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x78), param_1 != (uint32_t *)0x0)) {
    cls_1059e128_new(param_1);
    cls_105a2a8c_new(param_1 + 0x10);
    cls_105a2ab0_new(param_1 + 0x12);
    *param_1 = (uint32_t)&DAT_105b8354/*ROM*/;
    param_1[1] = (uint32_t)&DAT_105b841c/*ROM*/;
    param_1[6] = (uint32_t)&DAT_105b843c/*ROM*/;
    param_1[0xb] = (uint32_t)&DAT_105b846c/*ROM*/;
    param_1[0xc] = (uint32_t)&DAT_105b8484/*ROM*/;
    param_1[0xd] = (uint32_t)&DAT_105b84a4/*ROM*/;
    param_1[0x11] = (uint32_t)&DAT_105b84e4/*ROM*/;
    param_1[0x14] = (uint32_t)&DAT_105b84fc/*ROM*/;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    cls_105a2af8_new(param_1 + 0x19);
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
  }
  return param_1;
}
