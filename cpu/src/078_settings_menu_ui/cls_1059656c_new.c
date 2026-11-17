/* @k10d cls_1059656c_new @ 0x103d9cca
 * name: verified (structural evidence: heap_alloc(0x28) when NULL; stores vtable 0x1059656c; returns param_1)
 * unit: 078_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059656c (vtable 0x1059656c, 0x28 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x28) when NULL; stores vtable 0x1059656c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_1059656c_new(uint32_t *param_1)

{
  uint32_t extraout_r5;
  void *r6_in;
  void *r7_in;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x28), param_1 != (uint32_t *)0x0)) {
    cls_105956e0_new(param_1);
    param_1[4] = 0x1059656c/*ROM*/;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    *(uint8_t *)(param_1 + 8) = 0;
    *(uint8_t *)((int)param_1 + 0x21) = 0;
    *(uint8_t *)((int)param_1 + 0x22) = 0;
    *(uint8_t *)((int)param_1 + 0x23) = 0;
    *(uint8_t *)(param_1 + 9) = 0xff;
    (*pcRam10596580)((int)sRam1059657c + (int)param_1);
    (**(code **)(param_1[4] + 0x1c))((int)*(short *)(param_1[4] + 0x18) + (int)param_1);
    instantiate_and_link_object_graph_103d7d7a(param_1,extraout_r5,r6_in,r7_in);
  }
  return (int)param_1;
}
