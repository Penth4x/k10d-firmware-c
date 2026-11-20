/* @k10d dispatch_virtual_method_with_params @ 0x10495072
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Resolves a virtual method via a vtable pointer and invokes it with computed arguments
 *   and two helper values.
 * summary:
 *   The function reads a pointer from param_1+0x60, dereferences it to get an object, and
 *   calls a virtual method at offset 0x94. It then calls another virtual method on a
 *   related object, copies four integers from a stack buffer to param_1+0x90, and finally
 *   calls an external function at 0x1048cc66 with the results of two helper functions
 *   (read_first_word_1045bd4c, get_second_word_of_struct) masked to 16 bits. The specific
 *   camera subsystem is not identifiable from the available callees or memory operations.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Type propagation algorithm not settling */

void dispatch_virtual_method_with_params(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uintptr_t sp;
  uint8_t *puVar6;
  uint8_t auStack_44 [8];
  int aiStack_2c [9];
  
  puVar6 = auStack_44;
  iVar4 = *(int *)(**(int **)(param_1 + 0x60) + 0xc);
  iVar1 = (((vtbl_entry*)(iVar4))[18].fn)(**(int **)(param_1 + 0x60) + (int)((vtbl_entry*)(iVar4))[18].adj);
  aiStack_2c[0] = iVar1 + 4;
  (((vtbl_entry*)(*(int *)(iVar1 + 0x20)))[3].fn)
            (aiStack_2c + 1,((vtbl_entry*)(*(int *)(iVar1 + 0x20)))[3].adj + iVar1);
  iVar4 = 0x10;
  do {
    iVar5 = iVar4 + -4;
    *(uint32_t *)(iVar5 + param_1 + 0x90) = *(uint32_t *)((int)aiStack_2c + iVar4);
    iVar4 = iVar5;
  } while (iVar5 != 0);
  destroy_text_widget(aiStack_2c + 1,2);
  uVar2 = read_first_word_1045bd4c((uint32_t *)(param_1 + 0xa4));
  uVar3 = get_second_word_of_struct((uint32_t *)(param_1 + 0xa4));
  puVar6[3] = 1;
  puVar6[7] = 0;
  (*(code *)0x1048cc66/*ROM*/)(iVar1,aiStack_2c[0],uVar2 & 0xffff,uVar3 & 0xffff);
  return;
}
