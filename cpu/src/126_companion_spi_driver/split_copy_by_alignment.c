/* @k10d split_copy_by_alignment @ 0x10441b9c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10441bbc) overlaps instruction at (ram,0x10441bba)
    */

uint32_t split_copy_by_alignment(uint32_t param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uintptr_t sp;
  uint32_t *puVar4;
  uint32_t *puVar5;
  uint32_t *puVar6;
  uint32_t *puVar7;
  uint32_t *puVar8;
  uint32_t *puVar9;
  uint32_t uVar10;
  
  puVar6 = (uint32_t *)&stack0xffffffc8;
  puVar5 = (uint32_t *)&stack0xffffffc8;
  puVar4 = (uint32_t *)&stack0xffffffc8;
  puVar8 = (uint32_t *)&stack0xffffffc8;
  puVar7 = (uint32_t *)&stack0xffffffc8;
  puVar9 = (uint32_t *)&stack0xffffffc8;
  if (((param_2 & 0x1f) == 0) && ((param_3 & 0x1f) == 0)) {
    if (param_4 < 0x20) {
      if (param_4 < 4) {
        if (param_4 < 2) {
          if (param_4 == 0) {
            return 0;
          }
          uVar10 = 0;
        }
        else {
          iVar1 = param_4 - (param_4 & 0xfffffffe);
          if (iVar1 != 0) {
            uVar2 = configure_and_wait_for_device(param_1,param_2,param_3,param_4 & 0xfffffffe,1);
            *puVar6 = 0;
            uVar3 = configure_and_wait_for_device(param_1,param_2,param_3,iVar1,*puVar6);
            if ((uVar2 & uVar3) == 0) {
              return 0;
            }
            return 1;
          }
          uVar10 = 1;
        }
      }
      else {
        iVar1 = param_4 - (param_4 & 0xfffffffc);
        if (iVar1 != 0) {
          uVar2 = configure_and_wait_for_device(param_1,param_2,param_3,param_4 & 0xfffffffc,2);
          *puVar5 = 0;
          uVar3 = configure_and_wait_for_device(param_1,param_2,param_3,iVar1,*puVar5);
          if ((uVar2 & uVar3) == 0) {
            return 0;
          }
          return 1;
        }
        uVar10 = 2;
      }
    }
    else {
      if (param_4 != (param_4 & 0xffffffe0)) {
        uVar2 = configure_and_wait_for_device(param_1,param_2,param_3,param_4 & 0xffffffe0,5);
        *puVar4 = 0;
        uVar3 = configure_and_wait_for_device(param_1,param_2,param_3,param_4 - (param_4 & 0xffffffe0),*puVar4);
        if ((uVar2 & uVar3) == 0) {
          return 0;
        }
        return 1;
      }
      uVar10 = 5;
    }
  }
  else if (((param_2 & 3) == 0) && ((param_3 & 3) == 0)) {
    if (param_4 < 4) {
      if (param_4 < 2) {
        if (param_4 == 0) {
          return 0;
        }
        uVar10 = 0;
      }
      else {
        iVar1 = param_4 - (param_4 & 0xfffffffe);
        if (iVar1 != 0) {
          uVar2 = configure_and_wait_for_device(param_1,param_2,param_3,param_4 & 0xfffffffe,1);
          *puVar8 = 0;
          uVar3 = configure_and_wait_for_device(param_1,param_2,param_3,iVar1,*puVar8);
          if ((uVar2 & uVar3) == 0) {
            return 0;
          }
          return 1;
        }
        uVar10 = 1;
      }
    }
    else {
      iVar1 = param_4 - (param_4 & 0xfffffffc);
      if (iVar1 != 0) {
        uVar2 = configure_and_wait_for_device(param_1,param_2,param_3,param_4 & 0xfffffffc,2);
        *puVar7 = 0;
        uVar3 = configure_and_wait_for_device(param_1,param_2,param_3,iVar1,*puVar7);
        if ((uVar2 & uVar3) == 0) {
          return 0;
        }
        return 1;
      }
      uVar10 = 2;
    }
  }
  else if (((param_2 & 1) == 0) && ((param_3 & 1) == 0)) {
    if (param_4 < 2) {
      if (param_4 == 0) {
        return 0;
      }
      uVar10 = 0;
    }
    else {
      iVar1 = param_4 - (param_4 & 0xfffffffe);
      if (iVar1 != 0) {
        uVar2 = configure_and_wait_for_device(param_1,param_2,param_3,param_4 & 0xfffffffe,1);
        *puVar9 = 0;
        uVar3 = configure_and_wait_for_device(param_1,param_2,param_3,iVar1,*puVar9);
        if ((uVar2 & uVar3) == 0) {
          return 0;
        }
        return 1;
      }
      uVar10 = 1;
    }
  }
  else {
    uVar10 = 0;
  }
  uVar10 = configure_and_wait_for_device(param_1,param_2,param_3,param_4,uVar10);
  return uVar10;
}
