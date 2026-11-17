/* @k10d destroy_object_tree @ 0x1049a296
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 203_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Recursively destroys an object and its child objects, then invokes a final cleanup
 *   virtual method.
 * summary:
 *   The function takes a pointer to an object pointer (param_2). It iterates through a
 *   linked list of child objects (accessed via offset 0x30), calling a virtual method at
 *   vtable offset 0x2c on each child. For each child, it recursively destroys any sub-
 *   children (offset 2) and then advances to the next sibling. After processing all
 *   children, it recursively destroys the object at offset 0x2c, calls a cleanup function
 *   (iterate_and_invoke_virtual_method), invokes a virtual method at vtable offset 0xc with
 *   argument 3, and finally nulls out the pointer in param_2. The pattern is consistent
 *   with a recursive destructor or cleanup routine for a tree-like data structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void destroy_object_tree(void *param_1,int *param_2)

{
  int iVar1;
  uint16_t *puVar2;
  uint uVar3;
  int *piVar4;
  uintptr_t sp;
  int iStack_10;
  int iStack_c;
  
  iVar1 = *param_2;
  if ((iVar1 != 0) && (piVar4 = *(int **)(iVar1 + 0x30), piVar4 != (int *)0x0)) {
    puVar2 = (uint16_t *)peek_queue_head(iVar1);
    if (puVar2 != (uint16_t *)0x0) {
      do {
        iVar1 = (**(code **)(*piVar4 + 0x2c))((int)*(short *)(*piVar4 + 0x28) + (int)piVar4,*puVar2)
        ;
        if ((iVar1 != 0) && (uVar3 = 0, *(int *)(puVar2 + 2) != 0)) {
          do {
            iStack_10 = read_array_element_by_index((int)puVar2,uVar3);
            destroy_object_tree(param_1,&iStack_10);
            uVar3 = uVar3 + 1;
          } while (uVar3 < *(uint *)(puVar2 + 2));
        }
        puVar2 = (uint16_t *)pop_queue_head(*param_2);
      } while (puVar2 != (uint16_t *)0x0);
    }
    iStack_c = *(int *)(*param_2 + 0x2c);
    destroy_object_tree(param_1,&iStack_c);
    iterate_and_invoke_virtual_method(*param_2);
    iVar1 = *param_2;
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x34) + 0xc))(*(short *)(*(int *)(iVar1 + 0x34) + 8) + iVar1,3);
    }
    *param_2 = 0;
  }
  return;
}
