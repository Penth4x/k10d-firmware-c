/* @k10d insert_node_at_head @ 0x1045b7c0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a new node via a virtual factory call and inserts it at the head of a doubly-
 *   linked list.
 * summary:
 *   The function calls virtual slot 2 of the object pointed to by param_1[1] to allocate a
 *   new node. If the allocation succeeds, it copies data from the node pointed to by
 *   *param_2 into the new node, updates the new node's fields with the value from param_3,
 *   and links it as the new head of the list by updating the previous head's 'next' pointer
 *   and the list's head pointer. It also increments a counter stored at param_1[2].
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool insert_node_at_head(void *param_1,uint32_t *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = **(int **)((int)param_1 + 4);
  piVar1 = (int *)(((vtbl_entry*)(iVar2))[2].fn)
                            ((int)*(int **)((int)param_1 + 4) + (int)((vtbl_entry*)(iVar2))[2].adj);
  if (piVar1 != (int *)0x0) {
    piVar1[2] = *param_3;
    piVar3 = (int *)*param_2;
    piVar1[1] = (int)piVar3;
    *piVar1 = *piVar3;
    *(int **)(*piVar3 + 4) = piVar1;
    *piVar3 = (int)piVar1;
    *(int *)((int)param_1 + 8) = *(int *)((int)param_1 + 8) + 1;
  }
  return piVar1 != (int *)0x0;
}
