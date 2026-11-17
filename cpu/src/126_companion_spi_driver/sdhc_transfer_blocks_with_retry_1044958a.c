/* @k10d sdhc_transfer_blocks_with_retry_1044958a @ 0x1044958a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int sdhc_transfer_blocks_with_retry_1044958a(void *param_1,int param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  bool bVar3;
  int iVar2;
  
  (*(code *)0x1044aa44/*ROM*/)(*(uint32_t *)((int)param_1 + 0x110),param_3 & 0xffff);
  iVar1 = shift_value_if_flag_clear(param_1,param_2);
  iVar1 = sdhc_send_cmd_123a(param_1,iVar1,param_5);
  if (iVar1 == 0) {
LAB_104495f2:
    iVar1 = 0;
    if (param_3 != 0) {
      check_sdhc_command_success(param_1);
      bVar3 = true;
      goto LAB_10449642;
    }
  }
  else {
    do {
      bVar3 = sdhc_error_interrupt_pending(*(void **)((int)param_1 + 0x110));
      if ((bVar3) || (iVar1 = sdhc_transfer_block(param_1,param_4), iVar1 == 0)) goto LAB_104495f2;
      param_4 = param_4 + 0x200;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  iVar1 = 0;
  iVar2 = wait_for_sdhc_data_ready(param_1,*(int *)((int)param_1 + 0x104));
  if (iVar2 == 0) {
    check_sdhc_command_success(param_1);
  }
  else {
    if (param_5 == 1) {
      check_sdhc_command_success(param_1);
    }
    iVar1 = poll_object_until_flag_set(param_1);
  }
  bVar3 = iVar1 == 0;
LAB_10449642:
  if (bVar3) {
    rearui_draw_active_screen(param_1);
  }
  return iVar1;
}
