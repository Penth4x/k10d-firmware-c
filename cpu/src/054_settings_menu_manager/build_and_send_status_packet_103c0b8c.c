/* @k10d build_and_send_status_packet_103c0b8c @ 0x103c0b8c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 054_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_and_send_status_packet_103c0b8c(int param_1,int param_2,int param_3,int param_4)

{
  uint32_t uVar1;
  uint32_t uVar2;
  int iVar3;
  uint uVar4;
  uint32_t uVar5;
  uint8_t uVar6;
  uintptr_t sp;
  uint8_t *puVar7;
  uint8_t *puVar8;
  uint8_t auStack_34 [12];
  uint8_t uStack_9;
  
  uVar6 = (uint8_t)param_4;
  puVar8 = auStack_34;
  puVar7 = auStack_34;
  if ((*(ushort *)(param_1 + 0xc) & 1) == 1) {
    uVar1 = get_or_init_heap_block();
    uVar2 = get_setting_by_index(param_1,0x48);
    iVar3 = map_mode_index_to_code_1045b524(uVar1,uVar2);
    puVar8 = puVar7;
    if (iVar3 == 0) {
      uVar6 = 0;
    }
  }
  else {
    iVar3 = get_or_create_singleton_object_104fb12e();
    uVar4 = query_object_byte_property_104f1ab6(*(int *)(iVar3 + 0x74));
    if (uVar4 == 3) {
      uVar6 = 0;
    }
  }
  uVar1 = get_setting_by_index(param_1,7);
  uVar2 = get_setting_by_index(param_1,6);
  uVar5 = get_setting_by_index(param_1,2);
  puVar8[3] = (char)uVar2;
  puVar8[7] = (char)uVar5;
  puVar8[0xb] = uVar6;
  call_helper_and_notify_result(&uStack_9,param_2,param_3,uVar1,puVar8[3],puVar8[7],puVar8[0xb]);
  return;
}
