/* @k10d cls_105b9400_new_2 @ 0x104c28b8
 * name: verified (structural evidence: heap_alloc(0x1dc) when NULL; stores vtable 0x105b9400; returns param_1)
 * unit: 229_state_struct_utils (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b9400 (vtable 0x105b9400, 0x1dc bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x1dc) when NULL; stores vtable 0x105b9400; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105b9400_new_2(uint32_t *param_1,uint32_t *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x1dc), param_1 != (uint32_t *)0x0)) {
    param_1[0x76] = (uint32_t)&DAT_105b9400/*ROM*/;
    *param_1 = *param_2;
    *(uint16_t *)(param_1 + 1) = *(uint16_t *)(param_2 + 1);
    *(uint16_t *)((int)param_1 + 6) = *(uint16_t *)((int)param_2 + 6);
    param_1[2] = param_2[2];
    *(uint8_t *)((int)param_1 + 0x19) = *(uint8_t *)((int)param_2 + 0x19);
    param_1[7] = param_2[7];
    *(uint16_t *)(param_1 + 8) = *(uint16_t *)(param_2 + 8);
    *(uint8_t *)((int)param_1 + 0x22) = *(uint8_t *)((int)param_2 + 0x22);
    *(uint8_t *)((int)param_1 + 0x23) = *(uint8_t *)((int)param_2 + 0x23);
    *(uint8_t *)(param_1 + 9) = *(uint8_t *)(param_2 + 9);
    *(uint8_t *)((int)param_1 + 0x25) = *(uint8_t *)((int)param_2 + 0x25);
    *(uint8_t *)((int)param_1 + 0x26) = *(uint8_t *)((int)param_2 + 0x26);
    *(uint8_t *)((int)param_1 + 0x27) = *(uint8_t *)((int)param_2 + 0x27);
    *(uint8_t *)(param_1 + 10) = *(uint8_t *)(param_2 + 10);
    param_1[0xb] = param_2[0xb];
    *(uint8_t *)(param_1 + 0xc) = *(uint8_t *)(param_2 + 0xc);
    get_lens_fw_update_status();
    *(uint16_t *)(param_1 + 0x73) = *(uint16_t *)(param_2 + 0x73);
    iVar2 = 3;
    *(uint8_t *)((int)param_1 + 0x1ce) = *(uint8_t *)((int)param_2 + 0x1ce);
    *(uint8_t *)((int)param_1 + 0x1cf) = *(uint8_t *)((int)param_2 + 0x1cf);
    *(uint8_t *)(param_1 + 0x74) = *(uint8_t *)(param_2 + 0x74);
    *(uint8_t *)((int)param_1 + 0x1d1) = *(uint8_t *)((int)param_2 + 0x1d1);
    *(uint8_t *)((int)param_1 + 0x1d2) = *(uint8_t *)((int)param_2 + 0x1d2);
    *(uint8_t *)((int)param_1 + 0x1d3) = *(uint8_t *)((int)param_2 + 0x1d3);
    *(uint16_t *)(param_1 + 0x75) = *(uint16_t *)(param_2 + 0x75);
    *(uint8_t *)((int)param_1 + 0x1d6) = *(uint8_t *)((int)param_2 + 0x1d6);
    *(uint8_t *)((int)param_1 + 0x1d7) = *(uint8_t *)((int)param_2 + 0x1d7);
    iVar1 = 0;
    do {
      iVar3 = iVar1;
      *(uint8_t *)((int)param_1 + iVar3 + 0xc) = *(uint8_t *)((int)param_2 + iVar3 + 0xc);
      *(uint8_t *)((int)param_1 + iVar3 + 0xd) = *(uint8_t *)((int)param_2 + iVar3 + 0xd);
      iVar2 = iVar2 + -1;
      *(uint8_t *)((int)param_1 + iVar3 + 0xe) = *(uint8_t *)((int)param_2 + iVar3 + 0xe);
      iVar1 = iVar3 + 3;
    } while (-1 < iVar2);
    *(uint8_t *)((int)param_1 + iVar3 + 0xf) = *(uint8_t *)((int)param_2 + iVar3 + 0xf);
    *(uint8_t *)((int)param_1 + 0x31) = *(uint8_t *)((int)param_2 + 0x31);
    iVar2 = 1;
    *(uint8_t *)((int)param_1 + 0x32) = *(uint8_t *)((int)param_2 + 0x32);
    *(uint8_t *)((int)param_1 + 0x33) = *(uint8_t *)((int)param_2 + 0x33);
    *(uint8_t *)(param_1 + 0xd) = *(uint8_t *)(param_2 + 0xd);
    iVar1 = 0;
    do {
      iVar3 = 0x38;
      do {
        iVar3 = iVar3 + -4;
        *(uint32_t *)((int)param_1 + iVar3 + iVar1 + 0x38) =
             *(uint32_t *)((int)param_2 + iVar3 + iVar1 + 0x38);
      } while (iVar3 != 0);
      iVar3 = 0x38;
      do {
        iVar3 = iVar3 + -4;
        *(uint32_t *)((int)param_1 + iVar3 + iVar1 + 0x70) =
             *(uint32_t *)((int)param_2 + iVar3 + iVar1 + 0x70);
      } while (iVar3 != 0);
      iVar1 = iVar1 + 0x70;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    iVar2 = 8;
    iVar1 = 0;
    do {
      *(uint32_t *)((int)param_1 + iVar1 + 0x118) = *(uint32_t *)((int)param_2 + iVar1 + 0x118);
      *(uint32_t *)((int)param_1 + iVar1 + 0x11c) = *(uint32_t *)((int)param_2 + iVar1 + 0x11c);
      *(uint32_t *)((int)param_1 + iVar1 + 0x120) = *(uint32_t *)((int)param_2 + iVar1 + 0x120);
      *(uint32_t *)((int)param_1 + iVar1 + 0x124) = *(uint32_t *)((int)param_2 + iVar1 + 0x124);
      *(uint32_t *)((int)param_1 + iVar1 + 0x128) = *(uint32_t *)((int)param_2 + iVar1 + 0x128);
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 0x14;
    } while (-1 < iVar2);
  }
  return param_1;
}
