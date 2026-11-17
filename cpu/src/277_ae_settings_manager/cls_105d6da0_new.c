/* @k10d cls_105d6da0_new @ 0x1051d756
 * name: verified (structural evidence: heap_alloc(0x1d4) when NULL; stores vtable 0x105d6da0; returns param_1)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d6da0 (vtable 0x105d6da0, 0x1d4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x1d4) when NULL; stores vtable 0x105d6da0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1051d830) overlaps instruction at (ram,0x1051d82e)
    */

uint32_t * cls_105d6da0_new(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x1d4), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    *param_1 = 0x105d6da0/*ROM*/;
    param_1[1] = 0;
    param_1[2] = 0;
    iVar1 = 0;
    iVar3 = 2;
    iVar4 = 4;
    iVar2 = 6;
    iVar5 = 0x18;
    iVar6 = 0x30;
    iVar7 = 0x1a;
    iVar8 = 0x32;
    iVar9 = 0x1c;
    iStack_14 = 0x34;
    iStack_10 = 0x1e;
    iStack_c = 0x36;
    do {
      *(uint16_t *)((int)param_1 + iVar1 + 0xc) = 0;
      *(uint16_t *)((int)param_1 + iVar5 + 0xc) = 0;
      *(uint16_t *)((int)param_1 + iVar6 + 0xc) = 0;
      *(uint16_t *)((int)param_1 + iVar3 + 0xc) = 0;
      *(uint16_t *)((int)param_1 + iVar7 + 0xc) = 0;
      *(uint16_t *)((int)param_1 + iVar8 + 0xc) = 0;
      *(uint16_t *)((int)param_1 + iVar4 + 0xc) = 0;
      *(uint16_t *)((int)param_1 + iVar9 + 0xc) = 0;
      iVar6 = iVar6 + 8;
      *(uint16_t *)((int)param_1 + iStack_14 + 0xc) = 0;
      *(uint16_t *)((int)param_1 + iVar2 + 0xc) = 0;
      iVar5 = iVar5 + 8;
      *(uint16_t *)((int)param_1 + iStack_10 + 0xc) = 0;
      iVar3 = iVar3 + 8;
      iVar8 = iVar8 + 8;
      *(uint16_t *)((int)param_1 + iStack_c + 0xc) = 0;
      iVar4 = iVar4 + 8;
      iStack_14 = iStack_14 + 8;
      iVar2 = iVar2 + 8;
      iStack_c = iStack_c + 8;
      iVar9 = iVar9 + 8;
      iStack_10 = iStack_10 + 8;
      iVar1 = iVar1 + 8;
      iVar7 = iVar7 + 8;
    } while (iVar1 < 0x18);
    iVar1 = 0;
    do {
      iVar3 = 0x1f;
      iVar2 = iVar1;
      do {
        *(uint8_t *)((int)param_1 + iVar2 + 0x54) = 0;
        *(uint8_t *)((int)param_1 + iVar2 + 0x55) = 0;
        *(uint8_t *)((int)param_1 + iVar2 + 0x56) = 0;
        *(uint8_t *)((int)param_1 + iVar2 + 0x57) = 0;
        iVar3 = iVar3 + -1;
        iVar2 = iVar2 + 4;
      } while (-1 < iVar3);
      iVar1 = iVar1 + 0x80;
    } while (iVar1 < 0x180);
  }
  return param_1;
}
