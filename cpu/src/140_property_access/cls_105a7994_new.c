/* @k10d cls_105a7994_new @ 0x104641c6
 * name: verified (structural evidence: heap_alloc(0x64) when NULL; stores vtable 0x105a7994; returns param_1)
 * unit: 140_property_access (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a7994 (vtable 0x105a7994, 0x64 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x64) when NULL; stores vtable 0x105a7994; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104641e0) overlaps instruction at (ram,0x104641de)
    */

uint32_t * cls_105a7994_new(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)100), param_1 != (uint32_t *)0x0)) {
    allocate_cpucom_transaction_context(param_1,0,5);
    *param_1 = 0x105a7994/*ROM*/;
    param_1[1] = 0x105a7a24/*ROM*/;
    *(uint8_t *)(param_1 + 0x18) = 1;
    iVar1 = 0;
    *(uint8_t *)(param_1 + 0x12) = 0;
    *(uint8_t *)((int)param_1 + 0x49) = 0;
    *(uint8_t *)((int)param_1 + 0x4a) = 0;
    *(uint8_t *)((int)param_1 + 0x4b) = 0;
    *(uint8_t *)(param_1 + 0x13) = 0;
    iVar3 = 4;
    iVar4 = 8;
    iVar2 = 0xc;
    do {
      *(uint32_t *)((int)param_1 + iVar1 + 0x50) = 0;
      *(uint32_t *)((int)param_1 + iVar3 + 0x50) = 0;
      *(uint32_t *)((int)param_1 + iVar4 + 0x50) = 0;
      *(uint32_t *)((int)param_1 + iVar2 + 0x50) = 0;
      iVar1 = iVar1 + 0x10;
      iVar3 = iVar3 + 0x10;
      iVar4 = iVar4 + 0x10;
      iVar2 = iVar2 + 0x10;
    } while (iVar1 < 0x10);
  }
  return param_1;
}
