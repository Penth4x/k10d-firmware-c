/* @k10d cls_105d6608_new @ 0x10519e5a
 * name: verified (structural evidence: heap_alloc(0x74) when NULL; stores vtable 0x105d6608; returns param_1)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d6608 (vtable 0x105d6608, 0x74 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x74) when NULL; stores vtable 0x105d6608; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105d6608 * cls_105d6608_new(cls_105d6608 *param_1)

{
  uint32_t uVar1;
  
  if ((param_1 != (cls_105d6608 *)0x0) ||
     (param_1 = (cls_105d6608 *)heap_alloc((void *)0x74), param_1 != (cls_105d6608 *)0x0)) {
    cls_105d6c2c_new((cls_105d6c2c *)param_1);
    param_1->field_0x4 = 0x105d6608/*ROM*/;
    param_1->field_0x58 = 0;
    param_1->field_0x5c = 0;
    param_1->field_0x60 = 0;
    param_1->field_0x64 = 0;
    param_1->field_0x68 = 0;
    param_1->field_0x6c = 0;
    param_1->field_0x70 = 0;
    uVar1 = get_or_init_sram_buffer_1052c5b8();
    param_1->field_0x6c = uVar1;
  }
  return param_1;
}
