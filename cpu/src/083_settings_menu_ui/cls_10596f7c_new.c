/* @k10d cls_10596f7c_new @ 0x103e482a
 * name: verified (structural evidence: heap_alloc(0x50) when NULL; stores vtable 0x10596f7c; returns param_1)
 * unit: 083_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10596f7c (vtable 0x10596f7c, 0x50 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x50) when NULL; stores vtable 0x10596f7c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_10596f7c_new(uint32_t *param_1)

{
  int iVar1;
  uint32_t extraout_r5;
  void *r6_in;
  void *r7_in;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x50), param_1 != (uint32_t *)0x0)) {
    cls_105956e0_new(param_1);
    cls_1059e478_new(param_1 + 5);
    cls_105a2a8c_new(param_1 + 6);
    param_1[4] = 0x10596f7c/*ROM*/;
    param_1[5] = 0x10597014/*ROM*/;
    param_1[7] = 0x1059702c/*ROM*/;
    cls_105a2af8_new(param_1 + 8);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    *(uint8_t *)(param_1 + 0xd) = 0;
    *(uint8_t *)((int)param_1 + 0x35) = 0;
    *(uint8_t *)((int)param_1 + 0x36) = 0;
    zero_init_six_bytes((void *)((int)param_1 + 0x37));
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *(uint8_t *)(param_1 + 0x12) = 0;
    param_1[0x13] = 0;
    wait_flg_obj(param_1 + 8,0);
    (**(code **)(param_1[4] + 0x14))((int)*(short *)(param_1[4] + 0x10) + (int)param_1);
    (**(code **)(param_1[4] + 0x1c))((int)*(short *)(param_1[4] + 0x18) + (int)param_1);
    init_child_objects_and_link(param_1,extraout_r5,r6_in,r7_in);
    iVar1 = get_or_create_singleton_object_103b9478();
    param_1[0x13] = *(uint32_t *)(iVar1 + 4);
    create_kernel_object(param_1 + 6);
  }
  return (int)param_1;
}
