/* @k10d cls_105aa8bc_new @ 0x1047a958
 * name: verified (structural evidence: heap_alloc(0x1a8) when NULL; stores vtable 0x105aa8bc; returns param_1)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105aa8bc (vtable 0x105aa8bc, 0x1a8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x1a8) when NULL; stores vtable 0x105aa8bc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105aa8bc_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x1a8), param_1 != (uint32_t *)0x0)) {
    cls_105aacd8_new(param_1);
    cls_105a2b50_new(param_1 + 1);
    cls_1059e478_new(param_1 + 8);
    *param_1 = 0x105aa8bc/*ROM*/;
    param_1[5] = 0x105aa9a4/*ROM*/;
    param_1[8] = 0x105aa9c4/*ROM*/;
    cls_105a2af8_new(param_1 + 9);
    cls_105a2af8_new(param_1 + 0xb);
    alloc_and_zero_20_bytes(param_1 + 0xd);
    zero_init_six_bytes(param_1 + 0x12);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0xffffffff;
    *(uint8_t *)(param_1 + 0x1b) = 0;
    param_1[0x1c] = 0;
    alloc_and_init_small_object(param_1 + 0x1d);
    cls_105aae7c_new(param_1 + 0x22);
  }
  return param_1;
}
