/* @k10d build_event_payload_and_dispatch @ 0x103bdb3e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 054_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Extracts fields from a context object, conditionally computes a status flag, and passes
 *   them to a dispatch function.
 * summary:
 *   The function reads multiple fields from the object pointed to by param_1 using the
 *   helper get_setting_by_index. It checks a bit in the field at offset 0xc to determine
 *   which branch to take for calculating a status byte (uVar6), calling either
 *   map_mode_index_to_code_1045b524 or query_object_byte_property_104f1ab6. Finally, it
 *   packs these values along with param_2 and param_3 into a local structure and passes it
 *   to call_helper_and_notify_result.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_event_payload_and_dispatch(int param_1,uint8_t param_2,uint32_t param_3)

{
  uint32_t uVar1;
  uint32_t uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uintptr_t sp;
  uint8_t *puVar7;
  uint8_t auStack_34 [12];
  uint8_t uStack_9;
  uint8_t uVar6;
  
  puVar7 = auStack_34;
  uVar1 = get_setting_by_index(param_1,0xb);
  uVar6 = (uint8_t)uVar1;
  if ((*(ushort *)(param_1 + 0xc) & 1) == 1) {
    uVar1 = get_or_init_heap_block();
    uVar2 = get_setting_by_index(param_1,0x48);
    iVar3 = map_mode_index_to_code_1045b524(uVar1,uVar2);
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
  iVar3 = get_setting_by_index(param_1,5);
  iVar5 = get_setting_by_index(param_1,0x47);
  uVar1 = get_setting_by_index(param_1,2);
  puVar7[3] = param_2;
  puVar7[7] = (char)uVar1;
  puVar7[0xb] = uVar6;
  call_helper_and_notify_result(&uStack_9,iVar3,iVar5,param_3,puVar7[3],puVar7[7],puVar7[0xb]);
  return;
}
