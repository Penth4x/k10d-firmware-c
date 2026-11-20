/* @k10d copy_data_in_chunks @ 0x1047e7f6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 170_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool copy_data_in_chunks(cls_105ab6c0 *param_1,int param_2,uint param_3)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  
  pvVar1 = (void *)get_system_heap();
  pvVar1 = (void *)mempool_get_block(pvVar1,(void *)0x8000,2);
  fill_byte_array(pvVar1,0,0x8000);
  for (; param_3 != 0; param_3 = param_3 - uVar4) {
    uVar4 = 0x40;
    if (param_3 < 0x41) {
      uVar4 = param_3;
    }
    iVar2 = call_virtual_slot_6_and_helper((int *)param_1,param_2,uVar4);
    if (iVar2 == 0) break;
    param_2 = param_2 + uVar4;
  }
  pvVar3 = (void *)get_system_heap();
  mempool_release_block(pvVar3,pvVar1);
  return param_3 == 0;
}
