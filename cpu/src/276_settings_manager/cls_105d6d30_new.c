/* @k10d cls_105d6d30_new @ 0x1051d106
 * name: verified (structural evidence: heap_alloc(0xc) when NULL; stores vtable 0x105d6d30; returns param_1)
 * unit: 276_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d6d30 (vtable 0x105d6d30, 0xc bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xc) when NULL; stores vtable 0x105d6d30; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105d6d30_new(cls_105d6d30 *param_1,uint16_t *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  if ((param_1 != (cls_105d6d30 *)0x0) ||
     (param_1 = (cls_105d6d30 *)heap_alloc((void *)0xc), param_1 != (cls_105d6d30 *)0x0)) {
    uVar2 = param_3 * 2 + 2;
    cls_105b7e2c_new((cls_105b7e2c *)param_1,uVar2 & 0xff,3);
    ((cls_105b7e2c *)param_1)->field_0x8 = 0x105d6d30/*ROM*/;
    uVar1 = 2;
    if (2 < (int)uVar2) {
      do {
        insert_element_at_index(param_1,*param_2,uVar1,0);
        uVar1 = uVar1 + 2 & 0xff;
        param_2 = param_2 + 1;
      } while ((int)uVar1 < (int)uVar2);
    }
  }
  return (int)(cls_105b7e2c *)param_1;
}
