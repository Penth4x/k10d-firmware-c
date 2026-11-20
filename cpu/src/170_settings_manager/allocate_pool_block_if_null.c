/* @k10d allocate_pool_block_if_null @ 0x1047e3e8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 170_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t allocate_pool_block_if_null(cls_105aaebc *param_1,int param_2,void *param_3)

{
  void *pvVar1;
  int iVar2;
  uint32_t uVar3;
  
  uVar3 = 0;
  if ((param_1->field_0x0 == 0) && (param_3 != 0)) {
    pvVar1 = (void *)get_system_heap();
    iVar2 = mempool_get_block(pvVar1,param_3,param_2);
    param_1->field_0x0 = iVar2;
    if (iVar2 != 0) {
      param_1->field_0x4 = (uintptr_t)(param_3);
      uVar3 = 1;
    }
  }
  return uVar3;
}
