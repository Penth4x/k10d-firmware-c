/* @k10d cls_10599b14_new @ 0x1040a052
 * name: verified (structural evidence: heap_alloc(0x74) when NULL; stores vtable 0x10599b14; returns param_1)
 * unit: 092_menu_setting_io (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10599b14 (vtable 0x10599b14, 0x74 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x74) when NULL; stores vtable 0x10599b14; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_10599b14_new(uint32_t *param_1)

{
  uint32_t uVar1;
  int iVar2;
  int *piVar3;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x74), param_1 != (uint32_t *)0x0)) {
    cls_1059e478_new(param_1);
    cls_105a2c1c_new((cls_105a2c1c *)(uint32_t)param_1);
    *param_1 = 0x10599b14/*ROM*/;
    param_1[5] = 0x10599b34/*ROM*/;
    piVar3 = param_1 + 6;
    cls_105a2af8_new(piVar3);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    alloc_and_zero_struct_104df45e(param_1 + 0x12);
    *(uint8_t *)(param_1 + 0x15) = 0;
    *(uint8_t *)((int)param_1 + 0x55) = 0;
    param_1[0x16] = 0;
    *(uint16_t *)(param_1 + 0x17) = 0;
    *(uint16_t *)((int)param_1 + 0x5e) = 0;
    cls_105a2af8_new(param_1 + 0x18);
    *(uint8_t *)(param_1 + 0x1a) = 0;
    *(uint8_t *)((int)param_1 + 0x69) = 0;
    *(uint16_t *)((int)param_1 + 0x6a) = 0;
    *(uint16_t *)(param_1 + 0x1b) = 0;
    zero_four_byte_buffer((uint16_t *)((int)param_1 + 0x6e));
    if (param_1[8] == 0) {
      uVar1 = get_or_create_singleton_object_104bcd88();
      param_1[8] = uVar1;
    }
    if (param_1[9] == 0) {
      uVar1 = get_or_init_singleton_object_104c2c1e();
      param_1[9] = uVar1;
    }
    if (param_1[10] == 0) {
      iVar2 = get_or_create_singleton_104ce316();
      param_1[10] = *(uint32_t *)(iVar2 + 4);
    }
    if (*piVar3 == 0) {
      wait_flg_obj(piVar3,0);
    }
    if (param_1[0xb] == 0) {
      iVar2 = get_or_create_camera_object();
      param_1[0xb] = *(uint32_t *)(iVar2 + 4);
    }
    wait_flg_obj(param_1 + 0x18,2);
    alloc_pool_and_init_task(param_1 + 1,0x10,0x1000,4);
  }
  return param_1;
}
