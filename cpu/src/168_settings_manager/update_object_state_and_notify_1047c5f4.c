/* @k10d update_object_state_and_notify_1047c5f4 @ 0x1047c5f4
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies 5 words from param_2 to param_1+0x34 if a status field equals 0x200, then
 *   invokes a virtual method on a linked object.
 * summary:
 *   The function checks if the integer at *(param_1+0x70)+4 is 0x200. If so, it copies 20
 *   bytes (5 words) from param_2 to the memory at param_1+0x34. It then retrieves a pointer
 *   from *(param_1+0x70)+8 and calls virtual slot 2 (offset 0x14) on that object with
 *   arguments 0x10008 and the destination pointer. If the byte at param_1+0x44 is non-zero,
 *   it sets the first word of the copied data to 2 and returns -1, otherwise it returns 0.
 *   No specific camera subsystem is identifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t update_object_state_and_notify_1047c5f4(int param_1,int param_2)

{
  int *piVar1;
  uint32_t *puVar2;
  uint32_t uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (*(int *)(*(int *)(param_1 + 0x70) + 4) == 0x200) {
    puVar2 = (uint32_t *)(param_1 + 0x34);
    iVar4 = 0x14;
    do {
      iVar4 = iVar4 + -4;
      *(uint32_t *)(iVar4 + (int)puVar2) = *(uint32_t *)(iVar4 + param_2);
    } while (iVar4 != 0);
    piVar1 = *(int **)(*(int *)(param_1 + 0x70) + 8);
    iVar4 = *piVar1;
    (((vtbl_entry*)(iVar4))[2].fn)((int)piVar1 + (int)((vtbl_entry*)(iVar4))[2].adj,0x10008,puVar2);
    if (*(char *)(param_1 + 0x44) != '\0') {
      *puVar2 = 2;
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}
