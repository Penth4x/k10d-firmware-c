/* @k10d replace_buffer_node @ 0x10390d0c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 038_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies 12 bytes into a virtual buffer and swaps the linked list node if the virtual
 *   call succeeds.
 * summary:
 *   The function reads a pointer from offset 0x60 of the first argument and performs a
 *   virtual call on the object at that pointer, passing a 12-byte stack buffer copied from
 *   param_2. If the virtual call returns a different pointer and a flag at offset 0x5d is
 *   clear, it updates the pointer at 0x60, sets flags at 0x5c and 0x80, and calls
 *   invoke_virtual_slot_10_1036b74c on the old node. It then calls
 *   invoke_virtual_method_slot_9 on the new node to potentially adjust the pointer. The
 *   specific camera subsystem is not identifiable from the provided pseudocode and unknown
 *   callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t replace_buffer_node(int param_1,void *param_2)

{
  short sVar1;
  int iVar2;
  uint32_t uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uintptr_t sp;
  uint32_t auStack_14 [3];
  int iVar7;
  
  piVar5 = *(int **)(param_1 + 0x60);
  uVar3 = 0;
  if (piVar5 != (int *)0x0) {
    iVar2 = *piVar5;
    sVar1 = *(short *)(iVar2 + 0x18);
    iVar7 = 0xc;
    do {
      iVar6 = iVar7 + -4;
      *(uint32_t *)(&stack0xffffffe8 + iVar7) = *(uint32_t *)(iVar6 + (int)param_2);
      iVar7 = iVar6;
    } while (iVar6 != 0);
    piVar4 = (int *)(((vtbl_entry*)(iVar2))[3].fn)((int)sVar1 + (int)piVar5,auStack_14);
    if ((piVar4 != piVar5) && (*(char *)(param_1 + 0x5d) == '\0')) {
      *(uint32_t *)(param_1 + 0x60) = 0;
      *(uint8_t *)(param_1 + 0x80) = 1;
      invoke_virtual_slot_10_1036b74c(piVar5);
      *(uint8_t *)(param_1 + 0x5c) = 1;
      *(int **)(param_1 + 0x60) = piVar4;
      piVar5 = (int *)invoke_virtual_method_slot_9(piVar4);
      if (piVar5 != *(int **)(param_1 + 0x60)) {
        *(int **)(param_1 + 0x60) = piVar5;
        invoke_virtual_method_slot_9(piVar5);
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}
