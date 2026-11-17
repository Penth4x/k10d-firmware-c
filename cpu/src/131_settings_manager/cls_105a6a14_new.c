/* @k10d cls_105a6a14_new @ 0x1045dd02
 * name: verified (structural evidence: heap_alloc(0x33c) when NULL; stores vtable 0x105a6a14; returns param_1)
 * unit: 131_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a6a14 (vtable 0x105a6a14, 0x33c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x33c) when NULL; stores vtable 0x105a6a14; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1045dd1e) overlaps instruction at (ram,0x1045dd1c)
    */

uint32_t * cls_105a6a14_new(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x33c), param_1 != (uint32_t *)0x0)) {
    allocate_cpucom_transaction_context(param_1,0xff,0xff);
    *param_1 = 0x105a6a14/*ROM*/;
    param_1[1] = 0x105a6aa4/*ROM*/;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    cls_105a2be0_new(param_1 + 0x29);
    iVar1 = 0;
    iVar2 = 0x32;
    do {
      *(uint8_t *)((int)param_1 + iVar1 + 0xac) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0xad) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0xae) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0xaf) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0xb0) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 5;
    } while (-1 < iVar2);
    iVar2 = 0;
    iVar3 = 4;
    iVar4 = 8;
    iVar1 = 0xc;
    do {
      *(uint32_t *)((int)param_1 + iVar2 + 0x1ac) = 0;
      *(uint32_t *)((int)param_1 + iVar3 + 0x1ac) = 0;
      *(uint32_t *)((int)param_1 + iVar4 + 0x1ac) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 0x1ac) = 0;
      iVar2 = iVar2 + 0x10;
      iVar3 = iVar3 + 0x10;
      iVar4 = iVar4 + 0x10;
      iVar1 = iVar1 + 0x10;
    } while (iVar2 < 400);
  }
  return param_1;
}
