/* @k10d cls_1059639c_new @ 0x103d6ee2
 * name: verified (structural evidence: heap_alloc(0x38) when NULL; stores vtable 0x1059639c; returns param_1)
 * unit: 077_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059639c (vtable 0x1059639c, 0x38 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x38) when NULL; stores vtable 0x1059639c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_1059639c_new(cls_1059639c *param_1)

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
  if ((param_1 != (cls_1059639c *)0x0) ||
     (param_1 = (cls_1059639c *)heap_alloc((void *)0x38), puVar4 = puVar3, param_1 != (cls_1059639c *)0x0))
  {
    cls_105956e0_new((cls_105956e0 *)param_1);
    param_1->field_0x10 = (uintptr_t)(&DAT_1059639c/*ROM*/);
    param_1->field_0x14 = 0;
    param_1->field_0x18 = 0;
    param_1->field_0x1c = 0;
    param_1->field_0x20 = 0;
    param_1->field_0x21 = 0;
    param_1->field_0x22 = 0xff;
    param_1->field_0x23 = 0xff;
    *(uint16_t *)&param_1->field_0x24 = 0;
    *(uint16_t *)&param_1->field_0x26 = 0;
    *(uint16_t *)&param_1->field_0x28 = 0;
    param_1->field_0x2a = 0;
    *(uint16_t *)&param_1->field_0x2c = 0;
    puVar4[3] = 0;
    puVar4[7] = 0;
    puVar4[0xb] = 0;
    puVar4[0xf] = 0;
    pvVar1 = (void *)0x1;
    pvVar2 = (void *)0x1;
    alloc_and_init_small_struct_1045c524(&param_1->field_0x2e,0,1,1,puVar4[3],puVar4[7],puVar4[0xb],puVar4[0xf]);
    param_1->field_0x36 = 0;
    (((vtbl_entry*)(param_1->field_0x10))[2].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x10))[2].adj);
    (((vtbl_entry*)(param_1->field_0x10))[3].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x10))[3].adj);
    build_object_hierarchy_103d4674(param_1,extraout_r5,pvVar1,pvVar2);
  }
  return (int)param_1;
}
