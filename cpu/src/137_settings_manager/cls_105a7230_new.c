/* @k10d cls_105a7230_new @ 0x10460fe2
 * name: verified (structural evidence: heap_alloc(0xe4) when NULL; stores vtable 0x105a7230; returns param_1)
 * unit: 137_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a7230 (vtable 0x105a7230, 0xe4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xe4) when NULL; stores vtable 0x105a7230; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10460ffc) overlaps instruction at (ram,0x10460ffa)
    */

uint32_t * cls_105a7230_new(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0xe4), param_1 != (uint32_t *)0x0)) {
    allocate_cpucom_transaction_context(param_1,0x100,0x100);
    *param_1 = 0x105a7230/*ROM*/;
    param_1[1] = 0x105a72c0/*ROM*/;
    cls_105a2be0_new(param_1 + 0x12);
    *(uint8_t *)(param_1 + 0x14) = 0;
    *(uint8_t *)((int)param_1 + 0x51) = 0;
    iVar2 = 0;
    iVar3 = 4;
    iVar4 = 8;
    iVar1 = 0xc;
    do {
      *(uint32_t *)((int)param_1 + iVar2 + 0x54) = 0;
      *(uint32_t *)((int)param_1 + iVar3 + 0x54) = 0;
      *(uint32_t *)((int)param_1 + iVar4 + 0x54) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 0x54) = 0;
      iVar2 = iVar2 + 0x10;
      iVar3 = iVar3 + 0x10;
      iVar4 = iVar4 + 0x10;
      iVar1 = iVar1 + 0x10;
    } while (iVar2 < 0x90);
  }
  return param_1;
}
