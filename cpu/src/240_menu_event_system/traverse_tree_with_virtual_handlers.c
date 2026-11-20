/* @k10d traverse_tree_with_virtual_handlers @ 0x104cee96
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 240_menu_event_system (unit names are model-proposed)
 * purpose:
 *   Recursively walks a tree structure, invoking virtual methods on a context object for
 *   each node.
 * summary:
 *   The function iterates through a linked list or tree starting at param_2. For each node,
 *   it calls a virtual method (slot 3) on the object in param_1 to check a condition. If
 *   the condition is false, it calls another virtual method (slot 2) to process the node.
 *   If the condition is true, it recursively processes child nodes obtained via
 *   read_array_element_by_index. It also handles a 'next' pointer at offset 0x2c of the
 *   node structure. The specific domain role is unclear without more context on the virtual
 *   methods.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint traverse_tree_with_virtual_handlers(int param_1,int param_2,int param_3,uint32_t param_4)

{
  short sVar1;
  code *pcVar2;
  int iVar3;
  uint16_t *puVar4;
  uint32_t uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uintptr_t sp;
  uint32_t *puVar9;
  uint8_t local_28 [4];
  
  puVar9 = (uint32_t *)local_28;
  uVar8 = 0;
  iVar3 = (((vtbl_entry*)(*(int *)(param_1 + 4)))[2].fn)
                    (((vtbl_entry*)(*(int *)(param_1 + 4)))[2].adj + param_1);
  if ((iVar3 != 0) && (param_2 != 0)) {
    puVar4 = (uint16_t *)peek_queue_head(param_2);
    while (puVar4 != (uint16_t *)0x0) {
      iVar3 = (((vtbl_entry*)(*(int *)(param_1 + 4)))[4].fn)
                        (((vtbl_entry*)(*(int *)(param_1 + 4)))[4].adj + param_1,*puVar4);
      if (iVar3 == 0) {
        sVar1 = *(short *)(*(int *)(param_1 + 4) + 0x18);
        pcVar2 = *(code **)(*(int *)(param_1 + 4) + 0x1c);
        uVar5 = *(uint32_t *)(param_2 + 0x20);
        *puVar9 = param_4;
        uVar8 = (*pcVar2)(sVar1 + param_1,puVar4,uVar5,param_3);
      }
      else {
        uVar6 = 0;
        if (*(int *)(puVar4 + 2) != 0) {
          do {
            uVar7 = uVar6 + 1;
            uVar5 = read_array_element_by_index((int)puVar4,uVar6);
            uVar8 = traverse_tree_with_virtual_handlers(param_1,uVar5,param_3,uVar7);
            uVar6 = uVar7;
          } while (uVar7 < *(uint *)(puVar4 + 2));
        }
      }
      if (uVar8 == 0) break;
      puVar4 = (uint16_t *)pop_queue_head(param_2);
    }
    uVar8 = (uint)(puVar4 == (uint16_t *)0x0);
    if ((uVar8 != 0) && (*(int *)(param_2 + 0x2c) != 0)) {
      uVar8 = traverse_tree_with_virtual_handlers(param_1,*(int *)(param_2 + 0x2c),param_3 + 1,0);
    }
  }
  return uVar8;
}
