/* @k10d update_object_list_entry @ 0x10391696
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Replaces an entry in a linked list structure at offset 0x2c48 with a new object derived
 *   from a virtual call.
 * summary:
 *   The function reads a pointer from param_1+0x2c48 and, if valid, copies 12 bytes from
 *   param_2 to the stack. It then invokes a virtual method (slot 3) on the current list
 *   head, passing a value from offset 0x18 and the stack buffer. If the returned pointer
 *   differs from the current head and a flag at param_1+0x2c4e is clear, it calls
 *   set_byte_at_offset_0x1c, invokes a virtual destructor (slot 6) on the old head, and
 *   updates the list head to the new pointer. It then calls a virtual method (slot 5) on
 *   the new head to potentially advance the list pointer. The specific camera subsystem is
 *   not identifiable from the provided code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t update_object_list_entry(int param_1,void *param_2)

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
  
  piVar5 = *(int **)(param_1 + 0x2c48);
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
    if ((piVar4 != piVar5) && (*(char *)(param_1 + 0x2c4e) == '\0')) {
      *(uint32_t *)(param_1 + 0x2c48) = 0;
      set_byte_at_offset_0x1c(*(int *)(param_1 + 0x3c),0);
      (((vtbl_entry*)(*piVar5))[6].fn)((int)((vtbl_entry*)(*piVar5))[6].adj + (int)piVar5);
      *(int **)(param_1 + 0x2c48) = piVar4;
      piVar5 = (int *)(((vtbl_entry*)(*piVar4))[5].fn)((int)((vtbl_entry*)(*piVar4))[5].adj + (int)piVar4);
      if (piVar5 != *(int **)(param_1 + 0x2c48)) {
        *(int **)(param_1 + 0x2c48) = piVar5;
        (((vtbl_entry*)(*piVar5))[5].fn)((int)((vtbl_entry*)(*piVar5))[5].adj + (int)piVar5);
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}
