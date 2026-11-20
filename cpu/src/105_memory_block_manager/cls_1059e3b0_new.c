/* @k10d cls_1059e3b0_new @ 0x1042794c
 * name: verified (structural evidence: heap_alloc(0x14) when NULL; stores vtable 0x1059e3b0; returns param_1)
 * unit: 105_memory_block_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059e3b0 (vtable 0x1059e3b0, 0x14 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x14) when NULL; stores vtable 0x1059e3b0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_1059e3b0 * cls_1059e3b0_new(cls_1059e3b0 *param_1)

{
  if ((param_1 != (cls_1059e3b0 *)0x0) ||
     (param_1 = (cls_1059e3b0 *)heap_alloc((void *)0x14), param_1 != (cls_1059e3b0 *)0x0)) {
    param_1->field_0x10 = (uint32_t)&DAT_1059e3b0/*ROM*/;
    param_1->field_0x0 = 0;
    param_1->field_0x4 = 0;
    cls_105a2af8_new((cls_105a2af8 *)&param_1->field_0x8);
    wait_flg_obj(&param_1->field_0x8,0);
  }
  return param_1;
}
