/* @k10d sdhc_transfer_with_error_recovery @ 0x10449658
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Executes an SDHC data transfer sequence, handling error interrupts and cleanup on
 *   failure.
 * summary:
 *   The function initiates a transfer by writing a 16-bit value to an offset in the SDHC
 *   context (param_1+0x110). It then calls a sequence of helper functions
 *   (invoke_sdhc_buffer_write, shift_value_if_flag_clear, sdhc_send_cmd_123a) to process
 *   the transfer. If an error interrupt is pending (checked via
 *   sdhc_error_interrupt_pending), it triggers a cleanup routine
 *   (check_sdhc_command_success). On success or specific error conditions, it calls
 *   poll_object_until_flag_set and finally rearui_draw_active_screen for post-transfer
 *   cleanup. The return value indicates the status of the operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int sdhc_transfer_with_error_recovery(void *param_1,int param_2,uint param_3,uint32_t param_4,int param_5)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  (*(code *)0x1044aa44/*ROM*/)(*(uint32_t *)((int)param_1 + 0x110),param_3 & 0xffff);
  iVar1 = invoke_sdhc_buffer_write(param_1,param_4,param_3);
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar1 = shift_value_if_flag_clear(param_1,param_2);
    iVar1 = sdhc_send_cmd_123a(param_1,iVar1,param_5);
    if (iVar1 != 0) {
      bVar2 = sdhc_error_interrupt_pending(*(void **)((int)param_1 + 0x110));
      if (bVar2) {
        check_sdhc_command_success((void *)__frv_reg_unset(4));
        bVar2 = true;
        goto LAB_104496fa;
      }
      iVar1 = wait_for_sdhc_data_ready(param_1,*(int *)((int)param_1 + 0x104));
      if (iVar1 == 0) {
        check_sdhc_command_success(param_1);
      }
      else {
        if (param_5 == 1) {
          check_sdhc_command_success(param_1);
        }
        iVar3 = poll_object_until_flag_set(param_1);
      }
    }
  }
  bVar2 = iVar3 == 0;
LAB_104496fa:
  if (bVar2) {
    rearui_draw_active_screen(param_1);
  }
  return iVar3;
}
