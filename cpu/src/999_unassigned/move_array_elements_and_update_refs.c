/* @k10d move_array_elements_and_update_refs @ 0x104e5efe
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Shifts a block of 12-byte records within an array and updates embedded pointer values.
 * summary:
 *   The function performs an in-place move of elements in an array pointed to by *(param_1
 *   + 0x40). It handles both forward and backward shifts depending on the relationship
 *   between param_2 and param_3. Each element is a 12-byte structure containing three
 *   pointers; the function copies the structure and then dereferences each pointer to write
 *   a sequential integer value (starting from param_3 + 100).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104e5f26) overlaps instruction at (ram,0x104e5f24)
    */

void move_array_elements_and_update_refs(int param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  if (0 < param_4) {
    uVar1 = (param_2 - 1) + param_4;
    if (param_3 < param_2) {
      if (param_2 <= uVar1) {
        iVar2 = param_3 << 2;
        iVar4 = param_2 << 2;
        iVar3 = (uVar1 - param_2) + -2;
        iVar6 = param_3 + 100;
        if (2 < iVar3) {
          do {
            *(uint32_t *)(*(int *)(param_1 + 0x40) + iVar2) =
                 *(uint32_t *)(*(int *)(param_1 + 0x40) + iVar4);
            piVar5 = *(int **)(*(int *)(param_1 + 0x40) + iVar2);
            if (piVar5 != (int *)0x0) {
              *piVar5 = iVar6;
            }
            *(uint32_t *)(*(int *)(param_1 + 0x40) + iVar2 + 4) =
                 *(uint32_t *)(*(int *)(param_1 + 0x40) + iVar4 + 4);
            piVar5 = *(int **)(*(int *)(param_1 + 0x40) + iVar2 + 4);
            if (piVar5 != (int *)0x0) {
              *piVar5 = iVar6 + 1;
            }
            *(uint32_t *)(*(int *)(param_1 + 0x40) + iVar2 + 8) =
                 *(uint32_t *)(*(int *)(param_1 + 0x40) + iVar4 + 8);
            piVar5 = *(int **)(*(int *)(param_1 + 0x40) + iVar2 + 8);
            if (piVar5 != (int *)0x0) {
              *piVar5 = iVar6 + 2;
            }
            iVar6 = iVar6 + 3;
            iVar2 = iVar2 + 0xc;
            iVar3 = iVar3 + -3;
            iVar4 = iVar4 + 0xc;
          } while (-1 < iVar3);
        }
        for (iVar3 = iVar3 + 2; -1 < iVar3; iVar3 = iVar3 + -1) {
          *(uint32_t *)(*(int *)(param_1 + 0x40) + iVar2) =
               *(uint32_t *)(*(int *)(param_1 + 0x40) + iVar4);
          piVar5 = *(int **)(*(int *)(param_1 + 0x40) + iVar2);
          if (piVar5 != (int *)0x0) {
            *piVar5 = iVar6;
          }
          iVar6 = iVar6 + 1;
          iVar2 = iVar2 + 4;
          iVar4 = iVar4 + 4;
        }
      }
    }
    else {
      iVar3 = param_4 + -1 + param_3;
      if (param_2 <= uVar1) {
        iVar4 = iVar3 * 4;
        iVar6 = uVar1 * 4;
        iVar2 = (uVar1 - param_2) + -2;
        iVar3 = iVar3 + 100;
        if (2 < iVar2) {
          do {
            *(uint32_t *)(*(int *)(param_1 + 0x40) + iVar4) =
                 *(uint32_t *)(*(int *)(param_1 + 0x40) + iVar6);
            piVar5 = *(int **)(*(int *)(param_1 + 0x40) + iVar4);
            if (piVar5 != (int *)0x0) {
              *piVar5 = iVar3;
            }
            *(uint32_t *)(*(int *)(param_1 + 0x40) + iVar4 + -4) =
                 *(uint32_t *)(*(int *)(param_1 + 0x40) + iVar6 + -4);
            piVar5 = *(int **)(*(int *)(param_1 + 0x40) + iVar4 + -4);
            if (piVar5 != (int *)0x0) {
              *piVar5 = iVar3 + -1;
            }
            *(uint32_t *)(*(int *)(param_1 + 0x40) + iVar4 + -8) =
                 *(uint32_t *)(*(int *)(param_1 + 0x40) + iVar6 + -8);
            piVar5 = *(int **)(*(int *)(param_1 + 0x40) + iVar4 + -8);
            if (piVar5 != (int *)0x0) {
              *piVar5 = iVar3 + -2;
            }
            iVar3 = iVar3 + -3;
            iVar4 = iVar4 + -0xc;
            iVar2 = iVar2 + -3;
            iVar6 = iVar6 + -0xc;
          } while (-1 < iVar2);
        }
        for (iVar2 = iVar2 + 2; -1 < iVar2; iVar2 = iVar2 + -1) {
          *(uint32_t *)(*(int *)(param_1 + 0x40) + iVar4) =
               *(uint32_t *)(*(int *)(param_1 + 0x40) + iVar6);
          piVar5 = *(int **)(*(int *)(param_1 + 0x40) + iVar4);
          if (piVar5 != (int *)0x0) {
            *piVar5 = iVar3;
          }
          iVar3 = iVar3 + -1;
          iVar4 = iVar4 + -4;
          iVar6 = iVar6 + -4;
        }
      }
    }
  }
  return;
}
