/* @k10d allocate_buffer_from_descriptor_104e653e @ 0x104e653e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t allocate_buffer_from_descriptor_104e653e(int param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    (*(code *)0x10521296/*ROM*/)(param_1 + 0x2c,param_2);
    iVar2 = *(int *)(param_2 + 0x2c0);
    *(int *)(param_1 + 0x1c) = iVar2;
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      if (*(int *)(param_1 + 0x24) != 0) {
        heap_free_2(*(int *)(param_1 + 0x24));
      }
      uVar1 = heap_alloc_2(*(int *)(param_1 + 0x1c) + 3U & 0xfffffffc);
      *(uint32_t *)(param_1 + 0x24) = uVar1;
      *(uint32_t *)(param_1 + 0x28) = uVar1;
      *(uint32_t *)(param_1 + 0x20) = 0;
      uVar1 = 1;
    }
  }
  return uVar1;
}
