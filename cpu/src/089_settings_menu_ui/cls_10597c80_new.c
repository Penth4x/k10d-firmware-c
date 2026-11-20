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

int cls_10597c80_new(cls_10597c80 *param_1)

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
  if ((param_1 != (cls_10597c80 *)0x0) ||
     (param_1 = (cls_10597c80 *)heap_alloc((void *)0x34), puVar4 = puVar3, param_1 != (cls_10597c80 *)0x0))
  {
    cls_105956e0_new((cls_105956e0 *)param_1);
    param_1->field_0x10 = (uintptr_t)(&DAT_10597c80/*ROM*/);
    param_1->field_0x14 = 0;
    param_1->field_0x18 = 0;
    param_1->field_0x1c = 0;
    param_1->field_0x20 = 0;
    param_1->field_0x21 = 0;
    param_1->field_0x22 = 0xff;
    param_1->field_0x23 = 0xff;
    param_1->field_0x24 = 0xff;
    param_1->field_0x25 = '\0';
    *(uint16_t *)&param_1->field_0x26 = 0;
    *(uint16_t *)&param_1->field_0x28 = 0;
    puVar4[3] = 0;
    puVar4[7] = 0;
    puVar4[0xb] = 0;
    puVar4[0xf] = 0;
    pvVar1 = (void *)0x1;
    pvVar2 = (void *)0x1;
    alloc_and_init_small_struct_1045c524(&param_1->field_0x2a,0,1,1,puVar4[3],puVar4[7],puVar4[0xb],puVar4[0xf]);
    param_1->field_0x32 = 0;
    (((vtbl_entry*)(param_1->field_0x10))[2].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x10))[2].adj);
    (((vtbl_entry*)(param_1->field_0x10))[3].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x10))[3].adj);
    init_object_with_many_subobjects_103f21de(param_1,extraout_r5,pvVar1,pvVar2);
  }
  return (int)param_1;
}
