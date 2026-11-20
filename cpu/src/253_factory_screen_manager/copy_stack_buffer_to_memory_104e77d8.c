/* @k10d copy_stack_buffer_to_memory_104e77d8 @ 0x104e77d8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_stack_buffer_to_memory_104e77d8(uint32_t param_1,int param_2,uint32_t param_3,uint32_t param_4,int param_5)

{
  int iVar1;
  uintptr_t sp;
  uint32_t uStack_14;
  uint8_t auStack_10 [8];
  int iVar2;
  
  (((vtbl_entry*)(*(int *)(param_2 + 0x1c)))[3].fn)
            (auStack_10,param_2 + 0x10 + (int)((vtbl_entry*)(*(int *)(param_2 + 0x1c)))[3].adj);
  iVar2 = 8;
  do {
    iVar1 = iVar2 + -4;
    *(uint32_t *)(iVar1 + param_5) = *(uint32_t *)((int)&uStack_14 + iVar2);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  return;
}
