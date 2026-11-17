/* @k10d iterate_and_remove_list_entry @ 0x104933e4
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 197_settings_registry (unit names are model-proposed)
 * purpose:
 *   Iterates a linked list at param_1+0x48, calls a handler for the entry matching param_2,
 *   then removes that entry.
 * summary:
 *   The function walks a singly-linked list whose head is at param_1+0x48 and end marker at
 *   param_1+0x4c. For each node, if the node's first field equals param_2, it calls
 *   console_printf with a global constant, param_2, param_3, and param_4. After the loop,
 *   it calls forward_struct_and_second_field with the list head and a pointer to param_2,
 *   which likely performs the removal or update. The specific camera subsystem is not
 *   identifiable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void iterate_and_remove_list_entry(void *param_1,void *param_2,void *param_3,void *param_4)

{
  void *pvVar1;
  uint32_t *puVar2;
  uintptr_t sp;
  void *pvStack_c;
  
  puVar2 = *(uint32_t **)((int)param_1 + 0x48);
  pvVar1 = param_2;
  if (puVar2 != *(uint32_t **)((int)param_1 + 0x4c)) {
    do {
      if ((void *)*puVar2 == param_2) {
        console_printf(&DAT_105b45b4/*ROM*/,pvVar1,param_3,param_4);
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != *(uint32_t **)((int)param_1 + 0x4c));
  }
  pvStack_c = param_2;
  forward_struct_and_second_field((int *)((int)param_1 + 0x48),&pvStack_c);
  return;
}
