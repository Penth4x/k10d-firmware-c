/* @k10d register_menu_item_and_copy_data @ 0x1038e1ce
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Copies 8 bytes from a stack buffer into a memory location at param_5.
 * summary:
 *   The function calls menu_item_register with param_2 and passes the result to
 *   copy_virtual_result_to_buffer_10493ea4 along with a local 8-byte stack buffer
 *   (auStack_10). It then performs a loop that copies 8 bytes from the stack area (starting
 *   at uStack_14) into the memory address specified by param_5. The specific roles of the
 *   callees and the data being copied are not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_menu_item_and_copy_data(uint32_t param_1,int param_2,uint32_t param_3,uint32_t param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  uintptr_t sp;
  uint32_t uStack_14;
  uint8_t auStack_10 [8];
  int iVar3;
  
  piVar1 = (int *)menu_item_register(param_2);
  copy_virtual_result_to_buffer_10493ea4(auStack_10,piVar1);
  iVar3 = 8;
  do {
    iVar2 = iVar3 + -4;
    *(uint32_t *)(iVar2 + param_5) = *(uint32_t *)((int)&uStack_14 + iVar3);
    iVar3 = iVar2;
  } while (iVar2 != 0);
  return;
}
