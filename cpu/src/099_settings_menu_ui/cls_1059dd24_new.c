/* @k10d cls_1059dd24_new @ 0x10423d40
 * name: verified (structural evidence: heap_alloc(0x2c) when NULL; stores vtable 0x1059dd24; returns param_1)
 * unit: 099_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059dd24 (vtable 0x1059dd24, 0x2c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x2c) when NULL; stores vtable 0x1059dd24; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_1059dd24_new(uint32_t *param_1)

{
  uint32_t extraout_r5;
  void *r6_in;
  void *r7_in;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x2c), param_1 != (uint32_t *)0x0)) {
    cls_105956e0_new(param_1);
    param_1[4] = 0x1059dd24/*ROM*/;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    *(uint8_t *)(param_1 + 8) = 0;
    param_1[9] = 0;
    *(uint8_t *)(param_1 + 10) = 0;
    *(uint8_t *)((int)param_1 + 0x29) = 0;
    *(uint8_t *)((int)param_1 + 0x2a) = 0;
    (*pcRam1059dd38)((int)sRam1059dd34 + (int)param_1);
    (**(code **)(param_1[4] + 0x1c))((int)*(short *)(param_1[4] + 0x18) + (int)param_1);
    init_object_with_twenty_two_members(param_1,extraout_r5,r6_in,r7_in);
  }
  return (int)param_1;
}
