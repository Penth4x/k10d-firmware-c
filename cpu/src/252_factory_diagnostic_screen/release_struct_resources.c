/* @k10d release_struct_resources @ 0x104e4760
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_struct_resources(int param_1)

{
  int iVar1;
  uintptr_t sp;
  code **ppcVar2;
  code **ppcVar3;
  code *pcStack_10;
  uint32_t uStack_c;
  
  ppcVar2 = &pcStack_10;
  ppcVar3 = &pcStack_10;
  if (*(int *)(param_1 + 0x28) != 0) {
    pcStack_10 = (code *)release_heap_block_if_valid;
    uStack_c = 0;
    (*(code *)0x1054705e/*ROM*/)(*(int *)(param_1 + 0x28),0xffffffff,8,call_helper_if_flag_set_104e438c);
    *(uint32_t *)(param_1 + 0x28) = 0;
    ppcVar3 = ppcVar2;
  }
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 != 0) {
    *ppcVar3 = (code *)free_heap_block;
    ppcVar3[1] = (code *)0x0;
    (*(code *)0x1054705e/*ROM*/)(iVar1,0xffffffff,0x2c,init_object_with_vtable_and_flags);
    *(uint32_t *)(param_1 + 0x30) = 0;
  }
  if (*(void **)(param_1 + 0x34) != (void *)0x0) {
    mempool_release_block(*(void **)(param_1 + 0x48),*(void **)(param_1 + 0x34));
    *(uint32_t *)(param_1 + 0x34) = 0;
  }
  return;
}
