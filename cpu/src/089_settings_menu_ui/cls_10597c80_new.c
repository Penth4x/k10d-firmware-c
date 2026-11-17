/* @k10d cls_10597c80_new @ 0x103f6bde
 * name: verified (structural evidence: heap_alloc(0x34) when NULL; stores vtable 0x10597c80; returns param_1)
 * unit: 089_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10597c80 (vtable 0x10597c80, 0x34 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x34) when NULL; stores vtable 0x10597c80; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_10597c80_new(uint32_t *param_1)

{
  uint32_t extraout_r5;
  void *pvVar1;
  void *pvVar2;
  uintptr_t sp;
  uint8_t *puVar3;
  uint8_t *puVar4;
  uint8_t auStack_1c [16];
  
  puVar3 = auStack_1c;
  puVar4 = auStack_1c;
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x34), puVar4 = puVar3, param_1 != (uint32_t *)0x0)) {
    cls_105956e0_new(param_1);
    param_1[4] = (uint32_t)&DAT_10597c80/*ROM*/;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    *(uint8_t *)(param_1 + 8) = 0;
    *(uint8_t *)((int)param_1 + 0x21) = 0;
    *(uint8_t *)((int)param_1 + 0x22) = 0xff;
    *(uint8_t *)((int)param_1 + 0x23) = 0xff;
    *(uint8_t *)(param_1 + 9) = 0xff;
    *(uint8_t *)((int)param_1 + 0x25) = 0;
    *(uint16_t *)((int)param_1 + 0x26) = 0;
    *(uint16_t *)(param_1 + 10) = 0;
    puVar4[3] = 0;
    puVar4[7] = 0;
    puVar4[0xb] = 0;
    puVar4[0xf] = 0;
    pvVar1 = (void *)0x1;
    pvVar2 = (void *)0x1;
    alloc_and_init_small_struct_1045c524((uint16_t *)((int)param_1 + 0x2a),0,1,1,puVar4[3],puVar4[7],puVar4[0xb],
                 puVar4[0xf]);
    *(uint8_t *)((int)param_1 + 0x32) = 0;
    (**(code **)(param_1[4] + 0x14))((int)*(short *)(param_1[4] + 0x10) + (int)param_1);
    (**(code **)(param_1[4] + 0x1c))((int)*(short *)(param_1[4] + 0x18) + (int)param_1);
    init_object_with_many_subobjects_103f21de(param_1,extraout_r5,pvVar1,pvVar2);
  }
  return (int)param_1;
}
