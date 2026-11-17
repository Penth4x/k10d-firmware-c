/* @k10d allocate_and_init_buffer_1047a664 @ 0x1047a664
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t allocate_and_init_buffer_1047a664(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  iVar1 = allocate_200k_heap_block();
  if (iVar1 != 0) {
    (*(code *)0x10478e4c/*ROM*/)(*(uint32_t *)(param_1 + 4),iVar1,0x32000);
    uVar2 = dispatch_state_based_on_flag_10478e08(*(uint32_t *)(param_1 + 4));
    release_heap_block_1047a6ec(param_1,(void *)iVar1);
  }
  return uVar2;
}
