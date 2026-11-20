/* @k10d cls_1059ef7c_new @ 0x1042f35c
 * name: verified (structural evidence: heap_alloc(0x18) when NULL; stores vtable 0x1059ef7c; returns param_1)
 * unit: 112_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059ef7c (vtable 0x1059ef7c, 0x18 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x18) when NULL; stores vtable 0x1059ef7c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_1059ef7c * cls_1059ef7c_new(cls_1059ef7c *param_1,uint32_t param_2,uint32_t param_3)

{
  cls_1059ef7c *pcVar1;
  
  if ((param_1 != (cls_1059ef7c *)0x0) ||
     (param_1 = (cls_1059ef7c *)heap_alloc((void *)0x18), param_1 != (cls_1059ef7c *)0x0)) {
    pcVar1 = param_1;
    if ((param_1 != (cls_1059ef7c *)0x0) ||
       (pcVar1 = (cls_1059ef7c *)heap_alloc((void *)0x14), pcVar1 != (cls_1059ef7c *)0x0)) {
      pcVar1->field_0x10 = 0x1059ef6c/*ROM*/;
      pcVar1->field_0x0 = 0;
      pcVar1->field_0x4 = 0;
      pcVar1->field_0x8 = 0;
      pcVar1->field_0xc = 0;
    }
    param_1->field_0x10 = 0x1059ef7c/*ROM*/;
    param_1->field_0x14 = param_3;
    param_1->field_0x0 = param_2;
    param_1->field_0x4 = 0;
    param_1->field_0x8 = 0;
    param_1->field_0xc = 0;
  }
  return param_1;
}
