/* @k10d cls_10594e70_new @ 0x103bde0c
 * name: verified (structural evidence: heap_alloc(0x3c) when NULL; stores vtable 0x10594e70; returns param_1)
 * unit: 054_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10594e70 (vtable 0x10594e70, 0x3c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x3c) when NULL; stores vtable 0x10594e70; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_10594e70_new(uint32_t *param_1)

{
  uint32_t extraout_r5;
  void *r6_in;
  void *r7_in;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x3c), param_1 != (uint32_t *)0x0)) {
    cls_105956e0_new(param_1);
    cls_1059e478_new(param_1 + 5);
    param_1[4] = 0x10594e70/*ROM*/;
    param_1[5] = 0x10594f00/*ROM*/;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    zero_init_six_bytes(param_1 + 10);
    param_1[0xc] = 0;
    *(uint8_t *)(param_1 + 0xd) = 0;
    *(uint8_t *)((int)param_1 + 0x35) = 0;
    *(uint8_t *)((int)param_1 + 0x36) = 0;
    *(uint8_t *)((int)param_1 + 0x37) = 0;
    *(uint8_t *)(param_1 + 0xe) = 0;
    *(uint8_t *)((int)param_1 + 0x39) = 0;
    *(uint8_t *)((int)param_1 + 0x3a) = 0;
    (((vtbl_entry*)(param_1[4]))[2].fn)((int)((vtbl_entry*)(param_1[4]))[2].adj + (int)param_1);
    (((vtbl_entry*)(param_1[4]))[3].fn)((int)((vtbl_entry*)(param_1[4]))[3].adj + (int)param_1);
    instantiate_and_link_object_graph_103b9626(param_1,extraout_r5,r6_in,r7_in);
  }
  return (int)param_1;
}
