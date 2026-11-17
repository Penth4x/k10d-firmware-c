/* @k10d dispatch_event_with_state_check_1036f384 @ 0x1036f384
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 027_sr_calibration_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_event_with_state_check_1036f384(void *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint32_t uVar3;
  uint32_t *puVar4;
  
  bVar1 = false;
  if ((param_2 != 0) &&
     ((((iVar2 = *(int *)((int)param_1 + 0xb0), iVar2 == 0 || (iVar2 == 3)) ||
       ((iVar2 == 1 && (*(int *)((int)param_1 + 0xb4) == 0)))) &&
      ((_DAT_80015d1c/*SDRAM*/ == 2 && (DAT_80015f14/*SDRAM*/ != '\0')))))) {
    bVar1 = true;
  }
  request_ui_sync_code_4(*(void **)((int)param_1 + 0x2c));
  if (bVar1) {
    uVar3 = get_or_init_sram_block_1052b6fc();
    dispatch_event_with_two_helpers((void *)uVar3,0xfe,4);
    uVar3 = get_or_init_sram_block_1052b6fc();
    call_three_helpers_on_struct_1052b72e((void *)uVar3,1,6);
  }
  else {
    puVar4 = (uint32_t *)get_or_init_sram_block_1052b6fc();
    init_object_with_three_calls_1052b7a2(puVar4);
  }
  return;
}
