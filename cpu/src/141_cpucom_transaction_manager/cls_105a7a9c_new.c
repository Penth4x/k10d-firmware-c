/* @k10d cls_105a7a9c_new @ 0x10464732
 * name: verified (structural evidence: heap_alloc(0x58) when NULL; stores vtable 0x105a7a9c; returns param_1)
 * unit: 141_cpucom_transaction_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a7a9c (vtable 0x105a7a9c, 0x58 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x58) when NULL; stores vtable 0x105a7a9c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1046474c) overlaps instruction at (ram,0x1046474a)
    */

uint32_t * cls_105a7a9c_new(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x58), param_1 != (uint32_t *)0x0)) {
    allocate_cpucom_transaction_context(param_1,1,0x3d);
    *param_1 = 0x105a7a9c/*ROM*/;
    param_1[1] = 0x105a7b2c/*ROM*/;
    iVar1 = 0;
    iVar3 = 4;
    iVar4 = 8;
    iVar2 = 0xc;
    do {
      *(uint32_t *)((int)param_1 + iVar1 + 0x48) = 0;
      *(uint32_t *)((int)param_1 + iVar3 + 0x48) = 0;
      *(uint32_t *)((int)param_1 + iVar4 + 0x48) = 0;
      *(uint32_t *)((int)param_1 + iVar2 + 0x48) = 0;
      iVar1 = iVar1 + 0x10;
      iVar3 = iVar3 + 0x10;
      iVar4 = iVar4 + 0x10;
      iVar2 = iVar2 + 0x10;
    } while (iVar1 < 0x10);
  }
  return param_1;
}
