/* @k10d cls_106210ec_new @ 0x10534bf2
 * name: verified (structural evidence: heap_alloc(0x40) when NULL; stores vtable 0x106210ec; returns param_1)
 * unit: 293_system_parameter_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_106210ec (vtable 0x106210ec, 0x40 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x40) when NULL; stores vtable 0x106210ec; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10534c14) overlaps instruction at (ram,0x10534c12)
    */

cls_106210ec *
cls_106210ec_new(cls_106210ec *param_1,int param_2,int param_3,uint32_t param_4,uint32_t param_5
                ,int param_6,int param_7)

{
  uint uVar1;
  uint32_t uVar2;
  int iVar3;
  uint uVar4;
  
  if ((param_1 != (cls_106210ec *)0x0) ||
     (param_1 = (cls_106210ec *)heap_alloc((void *)0x40), param_1 != (cls_106210ec *)0x0)) {
    cls_105b7458_new((cls_105b7458 *)param_1,param_6,param_7);
    param_1->field_0x0 = 0x106210ec;
    iVar3 = param_2 * 4;
    param_1->field_0x10 = *(uint32_t *)(&DAT_8005b158/*SDRAM*/ + iVar3);
    param_1->field_0x14 = param_3;
    param_1->field_0x18 = param_4;
    param_1->field_0x1c = param_5;
    param_1->field_0x20 = 0;
    param_1->field_0x24 = 0;
    param_1->field_0x28 = 0;
    param_1->field_0x2c = 0;
    param_1->field_0x30 = *(uint32_t *)(iVar3 + 0x106210e4);
    uVar1 = *(uint *)(iVar3 + 0x106210dc);
    param_1->field_0x34 = uVar1;
    uVar4 = *(uint *)(iVar3 + 0x106210e4);
    param_1->field_0x38 = uVar4;
    param_1->field_0x3c = 0;
    param_1->field_0x24 = uVar4;
    if (uVar4 < uVar1) {
      param_1->field_0x24 = param_1->field_0x34;
    }
    iVar3 = extract_bitfield_with_offset(param_1->field_0x24,4,1);
    uVar2 = heap_alloc_2(iVar3 << 2);
    param_1->field_0x20 = uVar2;
    zero_memory_region((uint32_t *)(uVar2),(uint)(param_1->field_0x24),(uint32_t)(0));
  }
  return param_1;
}
