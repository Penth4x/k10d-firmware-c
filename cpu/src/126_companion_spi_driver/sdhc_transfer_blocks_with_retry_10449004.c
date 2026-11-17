/* @k10d sdhc_transfer_blocks_with_retry_10449004 @ 0x10449004
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int sdhc_transfer_blocks_with_retry_10449004(void *param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  (*(code *)0x1044aa44/*ROM*/)(*(uint32_t *)((int)param_1 + 0x110),param_3 & 0xffff);
  iVar1 = send_sdhc_command_170a(param_1,param_3);
  iVar3 = 0;
  if (iVar1 == 0) {
LAB_1044907a:
    if (param_3 != 0) {
      check_sdhc_command_success(param_1);
      bVar2 = true;
      goto LAB_104490b2;
    }
  }
  else {
    iVar1 = shift_value_if_flag_clear(param_1,param_2);
    iVar1 = sdhc_send_command_with_flag_10448392(param_1,iVar1,2);
    if (iVar1 == 0) goto LAB_1044907a;
    do {
      bVar2 = sdhc_error_interrupt_pending(*(void **)((int)param_1 + 0x110));
      if ((bVar2) || (iVar1 = widget_frame_pump(param_1,param_4), iVar1 == 0)) goto LAB_1044907a;
      param_4 = param_4 + 0x200;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  iVar1 = wait_for_sdhc_data_ready(param_1,*(int *)((int)param_1 + 0x104));
  if (iVar1 == 0) {
    check_sdhc_command_success(param_1);
  }
  else {
    iVar3 = poll_object_until_flag_set(param_1);
  }
  bVar2 = iVar3 == 0;
LAB_104490b2:
  if (bVar2) {
    rearui_draw_active_screen(param_1);
  }
  return iVar3;
}
