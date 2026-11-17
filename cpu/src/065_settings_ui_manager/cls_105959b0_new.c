/* @k10d cls_105959b0_new @ 0x103cc924
 * name: verified (structural evidence: heap_alloc(0x28) when NULL; stores vtable 0x105959b0; returns param_1)
 * unit: 065_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105959b0 (vtable 0x105959b0, 0x28 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x28) when NULL; stores vtable 0x105959b0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int cls_105959b0_new(uint32_t *param_1)

{
  uint32_t extraout_r5;
  void *r6_in;
  void *r7_in;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x28), param_1 != (uint32_t *)0x0)) {
    cls_105956e0_new(param_1);
    cls_1059e478_new(param_1 + 5);
    param_1[4] = (uint32_t)&DAT_105959b0/*ROM*/;
    param_1[5] = (uint32_t)&DAT_10595a40/*ROM*/;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    *(uint8_t *)(param_1 + 9) = 0;
    *(uint8_t *)((int)param_1 + 0x25) = 0;
    *(uint8_t *)((int)param_1 + 0x26) = 0;
    *(uint8_t *)((int)param_1 + 0x27) = 0;
    (*_DAT_105959c4/*ROM*/)((int)_DAT_105959c0/*ROM*/ + (int)param_1);
    (**(code **)(param_1[4] + 0x1c))((int)*(short *)(param_1[4] + 0x18) + (int)param_1);
    init_object_substructures_103cc040(param_1,extraout_r5,r6_in,r7_in);
  }
  return (int)param_1;
}
