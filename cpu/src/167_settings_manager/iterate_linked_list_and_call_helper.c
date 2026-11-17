/* @k10d iterate_linked_list_and_call_helper @ 0x1047a368
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Walks a singly-linked list of 16-bit pairs and calls a helper for each node.
 * summary:
 *   Reads a head pointer from offset 0xea4c of the object in param_1. It iterates through
 *   nodes linked via a next pointer at offset 0x1c, passing the node's first two 16-bit
 *   fields and an incrementing counter to console_printf along with a fixed address
 *   0x105aa6cc. The function terminates when the next pointer is null.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void iterate_linked_list_and_call_helper(int param_1)

{
  ushort *puVar1;
  void *pvVar2;
  
  pvVar2 = (void *)0x0;
  for (puVar1 = *(ushort **)(param_1 + 0xea4c); puVar1 != (ushort *)0x0;
      puVar1 = *(ushort **)(puVar1 + 0x1c)) {
    console_printf((void *)0x105aa6cc/*ROM*/,pvVar2,(void *)(uint)*puVar1,(void *)(uint)puVar1[1]);
    pvVar2 = (void *)((int)pvVar2 + 1);
  }
  return;
}
