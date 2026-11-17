/* @k10d sdhc_command_transfer_with_timeout @ 0x104493ec
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Executes an SDHC command sequence with a timeout and error check, returning success
 *   status.
 * summary:
 *   The function initiates an SDHC operation by calling shift_value_if_flag_clear and
 *   sdhc_send_command_with_flag_10448290. It checks for pending error interrupts via
 *   sdhc_error_interrupt_pending. If no error is pending, it proceeds with
 *   sdhc_transfer_block and a timeout wait (wait_for_sdhc_data_ready with 1000). On failure
 *   or error, it calls rearui_draw_active_screen for cleanup/reset. Returns 1 on success, 0
 *   on failure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int sdhc_command_transfer_with_timeout(void *param_1,int param_2,uint32_t param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = shift_value_if_flag_clear(param_1,param_2);
  iVar1 = sdhc_send_command_with_flag_10448290(param_1,iVar1);
  if ((((iVar1 != 0) && (bVar2 = sdhc_error_interrupt_pending(*(void **)((int)param_1 + 0x110)), !bVar2)) &&
      (iVar1 = sdhc_transfer_block(param_1,param_3), iVar1 != 0)) &&
     (iVar1 = wait_for_sdhc_data_ready(param_1,1000), iVar1 != 0)) {
    iVar3 = 1;
  }
  bVar2 = sdhc_error_interrupt_pending(*(void **)((int)param_1 + 0x110));
  if ((bVar2) || (iVar3 == 0)) {
    rearui_draw_active_screen(param_1);
    iVar3 = 0;
  }
  return iVar3;
}
