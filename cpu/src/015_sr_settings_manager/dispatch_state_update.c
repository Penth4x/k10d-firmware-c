/* @k10d dispatch_state_update @ 0x1036a83c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 015_sr_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_state_update(void *param_1,int param_2)

{
  bool bVar1;
  uint32_t uVar2;
  uint32_t *puVar3;
  
  bVar1 = false;
  if (((param_2 != 0) && (*(int *)((int)param_1 + 0xb0) == 2)) &&
     (*(char *)((int)param_1 + 0x2a8) != '\0')) {
    bVar1 = true;
  }
  request_ui_sync_code_4((void *)((int)param_1 + 0x14));
  if (bVar1) {
    uVar2 = get_or_init_sram_block_1052b6fc();
    dispatch_event_with_two_helpers((void *)uVar2,0xfe,4);
    uVar2 = get_or_init_sram_block_1052b6fc();
    call_three_helpers_on_struct_1052b72e((void *)uVar2,1,6);
  }
  else {
    puVar3 = (uint32_t *)get_or_init_sram_block_1052b6fc();
    init_object_with_three_calls_1052b7a2(puVar3);
  }
  return;
}
