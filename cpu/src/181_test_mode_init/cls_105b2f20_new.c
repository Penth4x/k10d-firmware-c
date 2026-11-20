/* @k10d cls_105b2f20_new @ 0x10486cfe
 * name: verified (structural evidence: heap_alloc(0x5c) when NULL; stores vtable 0x105b2f20; returns param_1)
 * unit: 181_test_mode_init (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b2f20 (vtable 0x105b2f20, 0x5c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x5c) when NULL; stores vtable 0x105b2f20; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105b2f20_new(cls_105b2f20 *param_1)

{
  int *piVar1;
  
  if ((param_1 != (cls_105b2f20 *)0x0) ||
     (param_1 = (cls_105b2f20 *)heap_alloc((void *)0x5c), param_1 != (cls_105b2f20 *)0x0)) {
    cls_105b2e98_new((cls_105b2e98 *)param_1);
    cls_105a2a8c_new((cls_105a2a8c *)&param_1->field_0x4c);
    param_1->field_0x48 = (uint32_t)&DAT_105b2f20/*ROM*/;
    param_1->field_0x50 = (uint32_t)&DAT_105b2f50/*ROM*/;
    param_1->field_0x58 = '\0';
    piVar1 = (int *)get_or_init_singleton_104895da();
    param_1->field_0x54 = (uint32_t)piVar1;
    create_kernel_object(&param_1->field_0x4c);
  }
  return (int)param_1;
}
