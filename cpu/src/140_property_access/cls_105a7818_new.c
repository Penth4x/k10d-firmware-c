/* @k10d cls_105a7818_new @ 0x10463e3a
 * name: verified (structural evidence: heap_alloc(0x58) when NULL; stores vtable 0x105a7818; returns param_1)
 * unit: 140_property_access (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a7818 (vtable 0x105a7818, 0x58 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x58) when NULL; stores vtable 0x105a7818; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10463e54) overlaps instruction at (ram,0x10463e52)
    */

uint32_t * cls_105a7818_new(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x58), param_1 != (uint32_t *)0x0)) {
    allocate_cpucom_transaction_context(param_1,0,7);
    *param_1 = 0x105a7818/*ROM*/;
    param_1[1] = 0x105a78a8/*ROM*/;
    cls_105a2be0_new(param_1 + 0x14);
    iVar3 = 1;
    iVar1 = 0;
    do {
      iVar2 = iVar1;
      *(uint8_t *)((int)param_1 + iVar2 + 0x48) = 0;
      *(uint8_t *)((int)param_1 + iVar2 + 0x49) = 0;
      *(uint8_t *)((int)param_1 + iVar2 + 0x4a) = 0;
      iVar3 = iVar3 + -1;
      iVar1 = iVar2 + 3;
    } while (-1 < iVar3);
    *(uint8_t *)((int)param_1 + iVar2 + 0x4b) = 0;
  }
  return param_1;
}
