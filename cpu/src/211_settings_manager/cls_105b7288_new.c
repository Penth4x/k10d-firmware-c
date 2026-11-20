/* @k10d cls_105b7288_new @ 0x104abfea
 * name: verified (structural evidence: heap_alloc(0x38) when NULL; stores vtable 0x105b7288; returns param_1)
 * unit: 211_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b7288 (vtable 0x105b7288, 0x38 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x38) when NULL; stores vtable 0x105b7288; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104ac00c) overlaps instruction at (ram,0x104ac00a)
    */

cls_105b7288 *
cls_105b7288_new(cls_105b7288 *param_1,int param_2,uint32_t param_3,uint32_t param_4,
                uint32_t param_5,int param_6,int param_7)

{
  int iVar1;
  
  if ((param_1 != (cls_105b7288 *)0x0) ||
     (param_1 = (cls_105b7288 *)heap_alloc((void *)0x38), param_1 != (cls_105b7288 *)0x0)) {
    cls_105b7458_new((cls_105b7458 *)param_1,param_6,param_7);
    param_1->field_0x0 = 0x105b7288/*ROM*/;
    iVar1 = param_2 * 4;
    param_1->field_0x10 = *(uint32_t *)(&DAT_800491a0/*SDRAM*/ + iVar1);
    param_1->field_0x14 = param_3;
    param_1->field_0x18 = param_4;
    param_1->field_0x1c = param_5;
    param_1->field_0x20 = 0;
    param_1->field_0x24 = 0;
    param_1->field_0x28 = *(uint32_t *)(iVar1 + 0x105b7280/*ROM*/);
    param_1->field_0x2c = *(uint32_t *)(iVar1 + 0x105b7278/*ROM*/);
    param_1->field_0x30 = *(uint32_t *)(iVar1 + 0x105b7280/*ROM*/);
    param_1->field_0x34 = 0;
  }
  return param_1;
}
