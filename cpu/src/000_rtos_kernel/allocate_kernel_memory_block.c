/* @k10d allocate_kernel_memory_block @ 0x1000dbd0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t allocate_kernel_memory_block(uint param_1,uint32_t *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint32_t uVar4;
  int *caller_r8;
  uint *caller_r9;
  uint caller_r10;
  uint uVar5;
  uint uVar6;
  uint *puStack_10;
  
  if (param_1 < 0xd) {
    uVar6 = 0xc;
  }
  else {
    uVar6 = param_1 + 3 & 0xfffffffc;
  }
  bVar1 = false;
  iVar2 = 0;
  iVar3 = 0;
  do {
    if (uVar6 < (uint)(0x20 << ((byte)iVar3 & 0xf))) break;
    iVar3 = iVar3 + 3;
    iVar2 = iVar2 + 1;
  } while (iVar3 < 0xf);
  if (iVar2 < 6) {
    iVar3 = iVar2 << 3;
    do {
      caller_r8 = *(int **)(iVar3 + 0x6a000000);
      if (caller_r8 != (int *)(iVar3 + 0x6a000000)) {
        do {
          caller_r9 = (uint *)(caller_r8 + -1);
          caller_r10 = *caller_r9 * 4;
          if (uVar6 <= caller_r10) {
            bVar1 = true;
            break;
          }
          caller_r8 = (int *)*caller_r8;
        } while (caller_r8 != (int *)(iVar3 + 0x6a000000));
      }
      if (bVar1) break;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 8;
    } while (iVar2 < 6);
  }
  if (bVar1) {
    if (caller_r10 < uVar6 + 0x10) {
      link_node_into_list(caller_r8);
      *caller_r9 = *caller_r9 | 0x80000000/*SDRAM*/;
      uVar6 = caller_r10;
      puStack_10 = caller_r9;
    }
    else {
      uVar5 = caller_r10 - (uVar6 + 4);
      puStack_10 = (uint *)((int)caller_r8 + uVar5);
      *puStack_10 = uVar6 >> 2 | 0x80000000/*SDRAM*/;
      *caller_r9 = uVar5 >> 2 | 0x40000000;
      puStack_10[-1] = (uint)caller_r8;
      if ((0 < iVar2) && (uVar5 < (uint)(0x20 << (((char)iVar2 + -1) * '\x03' & 0xfU)))) {
        link_node_into_list(caller_r8);
        insert_into_timeout_queue_1000fc34(caller_r8,uVar5);
      }
    }
    puStack_10 = puStack_10 + 1;
    *(uint *)(uVar6 + (int)puStack_10) = *(uint *)(uVar6 + (int)puStack_10) | 0x40000000;
    uVar4 = 1;
    *param_2 = (uint32_t)puStack_10;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
