/* @k10d dispatch_virtual_method_on_list_node @ 0x1049ab30
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 204_settings_manager (unit names are model-proposed)
 * purpose:
 *   Resolves a virtual method on a list node and stores the result in a status field.
 * summary:
 *   The function navigates a linked structure via param_1+0x54 to find a node. It calls an
 *   unknown helper initialize_struct_header, then conditionally calls
 *   read_struct_field_by_index_1049a7dc. It performs a virtual call (slot 5) on an object
 *   found at param_1+0x24+offset, passing the node as an argument. The return value of this
 *   virtual call determines the value written to param_1+0x40 (0, 1, or 2).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_method_on_list_node(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  uint32_t *puVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = (int *)**(uint32_t **)(*(int *)(param_1 + 0x54) + 0xc);
  iVar4 = *(int *)(*piVar5 + 4) * 4;
  puVar3 = (uint32_t *)(param_1 + 0x40);
  **(int **)(param_1 + 0x24 + iVar4) = param_1 + 4;
  initialize_struct_header(puVar3);
  iVar2 = piVar5[1];
  if ((iVar2 != -1) && (iVar2 != -2)) {
    uVar1 = read_struct_field_by_index_1049a7dc(piVar5,iVar2);
    *(uint32_t *)(param_1 + 0x4c) = uVar1;
  }
  iVar2 = *(int *)(param_1 + 0x24 + iVar4);
  iVar4 = *(int *)(iVar2 + 0x10);
  iVar2 = (**(code **)(iVar4 + 0x2c))(iVar2 + *(short *)(iVar4 + 0x28),piVar5);
  if (iVar2 == 0) {
    if (*(char *)(param_1 + 0x50) == '\0') {
      *puVar3 = 1;
    }
    else {
      *puVar3 = 2;
    }
  }
  else {
    *puVar3 = 0;
  }
  return;
}
