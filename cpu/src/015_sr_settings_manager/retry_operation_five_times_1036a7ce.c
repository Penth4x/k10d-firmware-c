/* @k10d retry_operation_five_times_1036a7ce @ 0x1036a7ce
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 015_sr_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int retry_operation_five_times_1036a7ce(int param_1,uint32_t param_2,void *param_3,uint32_t param_4,uint32_t param_5,
                uint32_t param_6,uint32_t param_7,uint32_t param_8,uint8_t param_9)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  uint32_t *puVar3;
  uint8_t auStack_44 [20];
  
  puVar3 = (uint32_t *)auStack_44;
  iVar2 = 0;
  do {
    invoke_virtual_slot_two_on_four_objects_1036b766();
    *puVar3 = param_5;
    puVar3[1] = param_6;
    puVar3[2] = param_7;
    puVar3[3] = param_8;
    *(uint8_t *)((int)puVar3 + 0x13) = param_9;
    iVar1 = dispatch_event_with_payload_1036b92c((void *)param_1,param_2,param_3,param_4,*puVar3,puVar3[1],puVar3[2],
                         puVar3[3],*(uint8_t *)((int)puVar3 + 0x13));
    if (iVar1 != 3) break;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  if (iVar1 == 3) {
    iVar1 = 0;
  }
  return iVar1;
}
