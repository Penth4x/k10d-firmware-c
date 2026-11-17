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

uint32_t *
cls_106210ec_new(uint32_t *param_1,int param_2,uint32_t param_3,uint32_t param_4,
                uint32_t param_5,uint32_t param_6,uint32_t param_7)

{
  uint uVar1;
  uint32_t uVar2;
  int iVar3;
  uint uVar4;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x40), param_1 != (uint32_t *)0x0)) {
    cls_105b7458_new(param_1,param_6,param_7);
    *param_1 = 0x106210ec;
    iVar3 = param_2 * 4;
    param_1[4] = *(uint32_t *)(&DAT_8005b158/*SDRAM*/ + iVar3);
    param_1[5] = param_3;
    param_1[6] = param_4;
    param_1[7] = param_5;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = *(uint32_t *)(iVar3 + 0x106210e4);
    uVar1 = *(uint *)(iVar3 + 0x106210dc);
    param_1[0xd] = uVar1;
    uVar4 = *(uint *)(iVar3 + 0x106210e4);
    param_1[0xe] = uVar4;
    param_1[0xf] = 0;
    param_1[9] = uVar4;
    if (uVar4 < uVar1) {
      param_1[9] = param_1[0xd];
    }
    iVar3 = extract_bitfield_with_offset(param_1[9],4,1);
    uVar2 = heap_alloc_2(iVar3 << 2);
    param_1[8] = uVar2;
    zero_memory_region((void *)uVar2,param_1[9],0);
  }
  return param_1;
}
