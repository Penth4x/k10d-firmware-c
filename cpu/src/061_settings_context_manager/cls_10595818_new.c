/* @k10d cls_10595818_new @ 0x103c8f30
 * name: verified (structural evidence: heap_alloc(0x28) when NULL; stores vtable 0x10595818; returns param_1)
 * unit: 061_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10595818 (vtable 0x10595818, 0x28 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x28) when NULL; stores vtable 0x10595818; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int cls_10595818_new(uint32_t *param_1)

{
  uint32_t extraout_r5;
  void *r6_in;
  void *r7_in;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x28), param_1 != (uint32_t *)0x0)) {
    cls_105956e0_new(param_1);
    cls_1059e478_new(param_1 + 5);
    param_1[4] = (uint32_t)&DAT_10595818/*ROM*/;
    param_1[5] = (uint32_t)&DAT_105958a8/*ROM*/;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    *(uint8_t *)(param_1 + 9) = 0;
    *(uint8_t *)((int)param_1 + 0x25) = 0;
    *(uint8_t *)((int)param_1 + 0x26) = 0;
    *(uint8_t *)((int)param_1 + 0x27) = 0;
    (*_DAT_1059582c/*ROM*/)((int)_DAT_10595828/*ROM*/ + (int)param_1);
    (**(code **)(param_1[4] + 0x1c))((int)*(short *)(param_1[4] + 0x18) + (int)param_1);
    init_object_hierarchy(param_1,extraout_r5,r6_in,r7_in);
  }
  return (int)param_1;
}
