/* @k10d free_pending_update_nodes @ 0x10538f4c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Unlinks and frees all nodes from two doubly-linked lists within a lens update context
 *   structure.
 * summary:
 *   The function takes a pointer to a context object, accesses two linked-list headers at
 *   offsets 0x64 and 0x18, and iterates through each list. For every node, it performs
 *   standard doubly-linked list removal (updating head/tail/prev/next pointers) and calls a
 *   deallocation routine (release_heap_block_1047f9bc or
 *   release_lens_update_context_1053905e). This is a cleanup routine for the lens firmware
 *   update module.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_pending_update_nodes(void *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)((int)param_1 + 100);
  piVar1 = (int *)piVar3[2];
  while (piVar2 = piVar1, piVar2 != (int *)0x0) {
    piVar1 = (int *)*piVar2;
    if (piVar2[2] == 1) {
      *piVar3 = *piVar3 + -1;
      if ((int *)piVar3[1] == piVar2) {
        piVar3[1] = piVar2[1];
      }
      if ((int *)piVar3[2] == piVar2) {
        piVar3[2] = *piVar2;
      }
      if (*piVar2 != 0) {
        *(int *)(*piVar2 + 4) = piVar2[1];
      }
      if ((int *)piVar2[1] != (int *)0x0) {
        *(int *)piVar2[1] = *piVar2;
      }
      release_heap_block_1047f9bc(piVar2);
    }
  }
  piVar1 = (int *)piVar3[6];
  while (piVar1 != (int *)0x0) {
    piVar2 = (int *)*piVar1;
    piVar3[4] = piVar3[4] + -1;
    if ((int *)piVar3[5] == piVar1) {
      piVar3[5] = piVar1[1];
    }
    if ((int *)piVar3[6] == piVar1) {
      piVar3[6] = *piVar1;
    }
    if (*piVar1 != 0) {
      *(int *)(*piVar1 + 4) = piVar1[1];
    }
    if ((int *)piVar1[1] != (int *)0x0) {
      *(int *)piVar1[1] = *piVar1;
    }
    release_lens_update_context_1053905e(piVar1);
    piVar1 = piVar2;
  }
  return;
}
