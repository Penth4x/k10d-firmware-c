/* @k10d cls_10596c84_new @ 0x103e103c
 * name: verified (structural evidence: heap_alloc(0x24) when NULL; stores vtable 0x10596c84; returns param_1)
 * unit: 081_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10596c84 (vtable 0x10596c84, 0x24 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x24) when NULL; stores vtable 0x10596c84; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_10596c84_new(uint32_t *param_1)

{
  uint32_t extraout_r5;
  void *r6_in;
  void *r7_in;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x24), param_1 != (uint32_t *)0x0)) {
    cls_105956e0_new(param_1);
    param_1[4] = 0x10596c84/*ROM*/;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    *(uint8_t *)(param_1 + 8) = 0;
    *(uint8_t *)((int)param_1 + 0x21) = 0;
    *(uint8_t *)((int)param_1 + 0x22) = 0;
    (*pcRam10596c98)((int)sRam10596c94 + (int)param_1);
    (**(code **)(param_1[4] + 0x1c))((int)*(short *)(param_1[4] + 0x18) + (int)param_1);
    build_object_hierarchy_from_ids_103e0a02(param_1,extraout_r5,r6_in,r7_in);
  }
  return (int)param_1;
}
