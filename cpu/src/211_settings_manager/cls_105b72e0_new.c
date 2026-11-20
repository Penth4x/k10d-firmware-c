/* @k10d cls_105b72e0_new @ 0x104ac3da
 * name: verified (structural evidence: heap_alloc(0x38) when NULL; stores vtable 0x105b72e0; returns param_1)
 * unit: 211_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b72e0 (vtable 0x105b72e0, 0x38 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x38) when NULL; stores vtable 0x105b72e0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104ac3fc) overlaps instruction at (ram,0x104ac3fa)
    */

cls_105b72e0 *
cls_105b72e0_new(cls_105b72e0 *param_1,int param_2,uint32_t param_3,uint32_t param_4,
                uint32_t param_5,int param_6,int param_7)

{
  int iVar1;
  
  if ((param_1 != (cls_105b72e0 *)0x0) ||
     (param_1 = (cls_105b72e0 *)heap_alloc((void *)0x38), param_1 != (cls_105b72e0 *)0x0)) {
    cls_105b7498_new((cls_105b7498 *)param_1,param_6,param_7);
    param_1->field_0x0 = 0x105b72e0/*ROM*/;
    iVar1 = param_2 * 4;
    param_1->field_0x10 = *(uint32_t *)(&DAT_800491a8/*SDRAM*/ + iVar1);
    param_1->field_0x14 = param_3;
    param_1->field_0x18 = param_4;
    param_1->field_0x1c = param_5;
    param_1->field_0x20 = 0;
    param_1->field_0x24 = 0;
    param_1->field_0x28 = *(uint32_t *)(iVar1 + 0x105b72d4/*ROM*/);
    param_1->field_0x2c = *(uint32_t *)(iVar1 + 0x105b72c8/*ROM*/);
    param_1->field_0x30 = *(uint32_t *)(iVar1 + 0x105b72d4/*ROM*/);
    param_1->field_0x34 = 0;
  }
  return param_1;
}
