/* @k10d cls_105aaa50_new @ 0x1047ca90
 * name: verified (structural evidence: heap_alloc(0x64) when NULL; stores vtable 0x105aaa50; returns param_1)
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105aaa50 (vtable 0x105aaa50, 0x64 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x64) when NULL; stores vtable 0x105aaa50; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105aaa50_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)100), param_1 != (uint32_t *)0x0)) {
    cls_1059e4b0_new(param_1);
    cls_105aacd8_new(param_1 + 1);
    cls_105a2b50_new(param_1 + 2);
    *param_1 = 0x105aaa50/*ROM*/;
    param_1[1] = 0x105aaac0/*ROM*/;
    param_1[6] = 0x105aab98/*ROM*/;
    param_1[9] = 0xffffffff;
    param_1[10] = 0;
    alloc_and_zero_20_bytes(param_1 + 0xb);
    param_1[0x10] = 0;
    zero_init_six_bytes((void *)(param_1 + 0x11));
    alloc_and_init_small_object(param_1 + 0x13);
    param_1[0x18] = 0xffffffff;
  }
  return param_1;
}
