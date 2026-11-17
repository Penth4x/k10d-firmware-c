/* @k10d graph_link_nextprev @ 0x104941c2
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed insert_node_into_list)
 * unit: 198_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Inserts a new node containing two parameters into a doubly-linked list structure.
 * summary:
 *   The function allocates an 8-byte node on the heap and stores param_2 and param_3 into
 *   it. It then calls forward_struct_and_second_field, passing the list head pointer
 *   (param_1 + 0x30) and the new node, to perform the insertion. If param_1 equals param_2,
 *   it delegates to console_printf instead. The loop checking offsets 0x30 and 0x34 appears
 *   to be a list integrity check or traversal.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void graph_link_nextprev(int param_1,int param_2,int param_3,void *param_4)

{
  int iVar1;
  uintptr_t sp;
  int *piStack_c;
  
  if (param_2 == param_1) {
    console_printf(&DAT_105b49c4/*ROM*/,(void *)param_2,(void *)param_3,param_4);
  }
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 != *(int *)(param_1 + 0x34)) {
    do {
      iVar1 = iVar1 + 4;
    } while (iVar1 != *(int *)(param_1 + 0x34));
  }
  piStack_c = (int *)heap_alloc((void *)8);
  *piStack_c = param_2;
  piStack_c[1] = param_3;
  forward_struct_and_second_field((int *)(param_1 + 0x30),&piStack_c);
  return;
}
