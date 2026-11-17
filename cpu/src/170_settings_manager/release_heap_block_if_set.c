/* @k10d release_heap_block_if_set @ 0x1047e426
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 170_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t release_heap_block_if_set(int *param_1)

{
  void *pvVar1;
  int iVar2;
  uint32_t uVar3;
  
  uVar3 = 0;
  if (*param_1 != 0) {
    pvVar1 = (void *)get_system_heap();
    iVar2 = mempool_release_block(pvVar1,(void *)*param_1);
    if (iVar2 != 0) {
      *param_1 = 0;
      param_1[1] = 0;
      uVar3 = 1;
    }
  }
  return uVar3;
}
