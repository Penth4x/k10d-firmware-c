/* @k10d copy_large_struct @ 0x104c2a7a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 229_state_struct_utils (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * copy_large_struct(uint32_t *param_1,uint32_t *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != param_2) {
    *param_1 = *param_2;
    *(uint16_t *)(param_1 + 1) = *(uint16_t *)(param_2 + 1);
    iVar2 = 3;
    *(uint16_t *)((int)param_1 + 6) = *(uint16_t *)((int)param_2 + 6);
    param_1[2] = param_2[2];
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
    *(uint8_t *)((int)param_1 + 0x19) = *(uint8_t *)((int)param_2 + 0x19);
    param_1[7] = param_2[7];
    copy_eight_bytes_1045c584((uint16_t *)(param_1 + 8),(uint16_t *)(param_2 + 8));
    *(uint8_t *)(param_1 + 10) = *(uint8_t *)(param_2 + 10);
    iVar2 = 1;
    param_1[0xb] = param_2[0xb];
    *(uint8_t *)(param_1 + 0xc) = *(uint8_t *)(param_2 + 0xc);
    *(uint8_t *)((int)param_1 + 0x31) = *(uint8_t *)((int)param_2 + 0x31);
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
      iVar3 = 8;
    } while (-1 < iVar2);
    iVar1 = 0;
    do {
      *(uint32_t *)((int)param_1 + iVar1 + 0x118) = *(uint32_t *)((int)param_2 + iVar1 + 0x118);
      *(uint32_t *)((int)param_1 + iVar1 + 0x11c) = *(uint32_t *)((int)param_2 + iVar1 + 0x11c);
      *(uint32_t *)((int)param_1 + iVar1 + 0x120) = *(uint32_t *)((int)param_2 + iVar1 + 0x120);
      *(uint32_t *)((int)param_1 + iVar1 + 0x124) = *(uint32_t *)((int)param_2 + iVar1 + 0x124);
      *(uint32_t *)((int)param_1 + iVar1 + 0x128) = *(uint32_t *)((int)param_2 + iVar1 + 0x128);
      iVar3 = iVar3 + -1;
      iVar1 = iVar1 + 0x14;
    } while (-1 < iVar3);
    copy_eight_bytes_1045c584((uint16_t *)(param_1 + 0x73),(uint16_t *)(param_2 + 0x73));
    *(uint16_t *)(param_1 + 0x75) = *(uint16_t *)(param_2 + 0x75);
    *(uint8_t *)((int)param_1 + 0x1d6) = *(uint8_t *)((int)param_2 + 0x1d6);
    *(uint8_t *)((int)param_1 + 0x1d7) = *(uint8_t *)((int)param_2 + 0x1d7);
  }
  return param_1;
}
