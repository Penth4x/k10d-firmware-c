/* @k10d cls_105b9724_new @ 0x104cedb6
 * name: verified (structural evidence: heap_alloc(0x18) when NULL; stores vtable 0x105b9724; returns param_1)
 * unit: 239_settings_entry_init (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b9724 (vtable 0x105b9724, 0x18 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x18) when NULL; stores vtable 0x105b9724; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105b9724_new(cls_105b9724 *param_1)

{
  if ((param_1 != (cls_105b9724 *)0x0) ||
     (param_1 = (cls_105b9724 *)heap_alloc((void *)0x18), param_1 != (cls_105b9724 *)0x0)) {
    cls_105b9714_new((cls_105b9714 *)param_1);
    param_1->field_0x4 = (uint32_t)&DAT_105b9724/*ROM*/;
    param_1->field_0x8 = 0;
    param_1->field_0xc = (uint32_t)(void *)0x0;
    param_1->field_0x10 = 0;
    param_1->field_0x14 = (uint32_t)(void *)0x0;
  }
  return (int)param_1;
}
