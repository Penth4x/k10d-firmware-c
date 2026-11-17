/* @k10d allocate_four_buffer_blocks @ 0x104f482a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 259_settings_buffer_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void allocate_four_buffer_blocks(int *param_1)

{
  void *pvVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    pvVar1 = (void *)get_system_heap();
    iVar2 = mempool_get_block(pvVar1,(void *)*param_1,0);
    param_1[4] = iVar2;
    param_1[0xc] = iVar2;
    param_1[8] = param_1[4] + *param_1 + -1;
    pvVar1 = (void *)get_system_heap();
    iVar2 = mempool_get_block(pvVar1,(void *)param_1[1],0);
    param_1[5] = iVar2;
    param_1[0xd] = iVar2;
    param_1[9] = param_1[5] + param_1[1] + -1;
    pvVar1 = (void *)get_system_heap();
    iVar2 = mempool_get_block(pvVar1,(void *)param_1[2],0);
    param_1[6] = iVar2;
    param_1[0xe] = iVar2;
    param_1[10] = param_1[6] + param_1[2] + -1;
    pvVar1 = (void *)get_system_heap();
    iVar2 = mempool_get_block(pvVar1,(void *)param_1[3],0);
    param_1[7] = iVar2;
    param_1[0xf] = iVar2;
    param_1[0xb] = param_1[7] + param_1[3] + -1;
    *(uint8_t *)(param_1 + 0x10) = 1;
  }
  return;
}
