/* @k10d process_sdhc_transfer_request @ 0x104497da
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Executes a multi-step SDHCI transfer sequence, handling error interrupts and finalizing
 *   the operation.
 * summary:
 *   The function initiates a transfer by writing a command to an object at offset 0x110,
 *   then calls a series of unverified helper functions (send_sdhc_command_170a,
 *   invoke_sdhc_buffer_write, shift_value_if_flag_clear, sdhc_send_cmd_123a) to configure
 *   and start the operation. It checks for a pending SDHCI error interrupt; if found, it
 *   calls check_sdhc_command_success and skips the finalization step. Otherwise, it calls
 *   wait_for_sdhc_data_ready and poll_object_until_flag_set to complete the transfer,
 *   returning the result of the final step.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int process_sdhc_transfer_request(void *param_1,int param_2,uint param_3,uint32_t param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  (*(code *)0x1044aa44/*ROM*/)(*(uint32_t *)((int)param_1 + 0x110),param_3 & 0xffff);
  iVar1 = send_sdhc_command_170a(param_1,param_3);
  iVar3 = 0;
  if ((iVar1 != 0) && (iVar1 = invoke_sdhc_buffer_write(param_1,param_4,param_3), iVar1 != 0)) {
    iVar1 = shift_value_if_flag_clear(param_1,param_2);
    iVar1 = sdhc_send_cmd_123a(param_1,iVar1,2);
    if (iVar1 != 0) {
      bVar2 = sdhc_error_interrupt_pending(*(void **)((int)param_1 + 0x110));
      if (bVar2) {
        check_sdhc_command_success((void *)__frv_reg_unset(4));
        bVar2 = true;
        goto LAB_1044987a;
      }
      iVar1 = wait_for_sdhc_data_ready(param_1,*(int *)((int)param_1 + 0x104));
      if (iVar1 == 0) {
        check_sdhc_command_success(param_1);
      }
      else {
        iVar3 = poll_object_until_flag_set(param_1);
      }
    }
  }
  bVar2 = iVar3 == 0;
LAB_1044987a:
  if (bVar2) {
    rearui_draw_active_screen(param_1);
  }
  return iVar3;
}
