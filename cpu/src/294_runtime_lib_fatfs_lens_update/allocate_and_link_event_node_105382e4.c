/* @k10d allocate_and_link_event_node_105382e4 @ 0x105382e4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Allocates a 0x3c-byte node, links it into a doubly-linked list, and increments a type-
 *   specific counter.
 * summary:
 *   The function checks a state flag (bit 8 of offset 0xe) to ensure the session is active.
 *   It attempts to find an existing node via a callback loop; if none is found, it
 *   allocates a 0x3c-byte node using alloc_pool2_block and initializes it. The node is
 *   linked into a doubly-linked list managed by the object at param_1+100. Finally, it
 *   increments a specific 16-bit counter within the node based on the event type (param_2),
 *   which ranges from 1 to 0x1e.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10538476) overlaps instruction at (ram,0x10538474)
    */

int allocate_and_link_event_node_105382e4(int param_1,ushort param_2,int *param_3,void *param_4)

{
  bool bVar1;
  code *pcVar2;
  int iVar3;
  uint32_t uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  piVar6 = *(int **)(param_1 + 100);
  if ((*(ushort *)((int)piVar6 + 0xe) & 0x100) == 0) {
    *param_3 = 0;
    if (*(int *)((param_2 - 1) * 4 + -0x7ffeb67c) != 0) {
      for (iVar5 = piVar6[1]; iVar5 != 0; iVar5 = *(int *)(iVar5 + 4)) {
        pcVar2 = *(code **)((param_2 - 1) * 4 + -0x7ffeb67c);
        if (param_4 == (void *)0x0) {
          iVar3 = (*pcVar2)(iVar5,0,0);
        }
        else {
          iVar3 = (*pcVar2)(iVar5,param_4,param_4);
        }
        if (iVar3 == 1) {
          *param_3 = iVar5;
        }
        else if (iVar3 != 0) {
          return iVar3;
        }
      }
    }
    if (*param_3 == 0) {
      iVar5 = alloc_pool2_block((void *)0x3c);
      *param_3 = iVar5;
      if (*param_3 == 0) {
        return -0xc;
      }
      fill_byte_array((void *)*param_3,0,0x3c);
      *(uint32_t *)(*param_3 + 4) = 0;
      *(int *)(*param_3 + 0xc) = param_1;
      if ((((param_4 == (void *)0x0) || (param_2 == 1)) || (param_2 == 2)) ||
         (((param_2 == 3 || (param_2 == 4)) || ((param_2 == 5 || (param_2 == 0x17)))))) {
        *(uint32_t *)(*param_3 + 8) = 0;
        *(uint32_t *)(*param_3 + 0x10) = *(uint32_t *)(param_1 + 0x28);
        uVar4 = 0;
        *(uint32_t *)(*param_3 + 0x14) = 0;
        *(uint32_t *)(*param_3 + 0x18) = 0;
      }
      else {
        if ((*(byte *)((int)param_4 + 0x1f) & 0x10) == 0) {
          uVar4 = 2;
        }
        else {
          uVar4 = 1;
        }
        *(uint32_t *)(*param_3 + 8) = uVar4;
        iVar3 = *param_3;
        iVar5 = 0xc;
        do {
          iVar7 = iVar5 + -4;
          bVar1 = 3 < iVar5;
          *(uint32_t *)(iVar7 + iVar3 + 0x10) = *(uint32_t *)(iVar7 + (int)param_4);
          iVar5 = iVar7;
        } while (bVar1 && iVar7 != 0);
        uVar4 = *(uint32_t *)((int)param_4 + 0xc);
      }
      *(uint32_t *)(*param_3 + 0x1c) = uVar4;
      *piVar6 = *piVar6 + 1;
      if (piVar6[1] == 0) {
        piVar6[1] = *param_3;
      }
      if (piVar6[2] == 0) {
        *(int *)*param_3 = 0;
      }
      else {
        *(int *)*param_3 = piVar6[2];
        *(int *)(piVar6[2] + 4) = *param_3;
      }
      piVar6[2] = *param_3;
    }
    switch((uint)param_2) {
    case 1:
      *(ushort *)((int)piVar6 + 0xe) = *(ushort *)((int)piVar6 + 0xe) | 0x100;
      *(short *)(*param_3 + 0x22) = *(short *)(*param_3 + 0x22) + 1;
      break;
    case 2:
      *(short *)(*param_3 + 0x24) = *(short *)(*param_3 + 0x24) + 1;
      break;
    case 3:
      *(short *)(*param_3 + 0x20) = *(short *)(*param_3 + 0x20) + 1;
      break;
    case 4:
      *(short *)(*param_3 + 0x28) = *(short *)(*param_3 + 0x28) + 1;
      break;
    case 5:
      *(short *)(*param_3 + 0x26) = *(short *)(*param_3 + 0x26) + 1;
      break;
    case 6:
    case 9:
      *(short *)(*param_3 + 0x30) = *(short *)(*param_3 + 0x30) + 1;
      break;
    case 7:
    case 0xb:
      *(short *)(*param_3 + 0x32) = *(short *)(*param_3 + 0x32) + 1;
      break;
    case 8:
    case 10:
      *(short *)(*param_3 + 0x32) = *(short *)(*param_3 + 0x32) + 1;
      break;
    case 0xc:
    case 0xd:
      iVar5 = *param_3;
      if (*(int *)(*param_3 + 8) == 1) {
        *(short *)(iVar5 + 0x2e) = *(short *)(iVar5 + 0x2e) + 1;
      }
      else if (*(int *)(iVar5 + 8) == 2) {
        *(short *)(*param_3 + 0x36) = *(short *)(*param_3 + 0x36) + 1;
      }
      break;
    case 0xe:
      *(short *)(*param_3 + 0x36) = *(short *)(*param_3 + 0x36) + 1;
      break;
    case 0xf:
    case 0x13:
      *(short *)(*param_3 + 0x2e) = *(short *)(*param_3 + 0x2e) + 1;
      break;
    case 0x10:
      iVar5 = *param_3;
      if (*(int *)(*param_3 + 8) == 1) {
        *(short *)(iVar5 + 0x2c) = *(short *)(iVar5 + 0x2c) + 1;
      }
      else if (*(int *)(iVar5 + 8) == 2) {
        *(short *)(*param_3 + 0x34) = *(short *)(*param_3 + 0x34) + 1;
      }
      break;
    case 0x11:
    case 0x12:
      *(short *)(*param_3 + 0x34) = *(short *)(*param_3 + 0x34) + 1;
      break;
    case 0x14:
      *(short *)(*param_3 + 0x2c) = *(short *)(*param_3 + 0x2c) + 1;
      break;
    case 0x15:
      break;
    case 0x16:
      *(short *)(*param_3 + 0x2a) = *(short *)(*param_3 + 0x2a) + 1;
      break;
    case 0x17:
      *(short *)(*param_3 + 0x38) = *(short *)(*param_3 + 0x38) + 1;
      break;
    case 0x18:
    case 0x19:
      *(short *)(*param_3 + 0x32) = *(short *)(*param_3 + 0x32) + 1;
      break;
    case 0x1a:
    case 0x1b:
      *(short *)(*param_3 + 0x2e) = *(short *)(*param_3 + 0x2e) + 1;
      break;
    case 0x1c:
      *(short *)(*param_3 + 0x36) = *(short *)(*param_3 + 0x36) + 1;
      break;
    case 0x1d:
      *(short *)(*param_3 + 0x32) = *(short *)(*param_3 + 0x32) + 1;
      break;
    case 0x1e:
      *(short *)(*param_3 + 0x2e) = *(short *)(*param_3 + 0x2e) + 1;
      break;
    default:
    }
    iVar5 = 0;
  }
  else {
    iVar5 = -0x10;
  }
  return iVar5;
}
