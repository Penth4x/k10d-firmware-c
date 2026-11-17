/* @k10d sdhc_wait_error_interrupt @ 0x10449462
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Polls the SDHCI controller for an error interrupt after initiating a command sequence.
 * summary:
 *   The function initiates a sequence of SDHCI operations via invoke_sdhc_buffer_write,
 *   shift_value_if_flag_clear, and sdhc_send_command_with_flag_10448290. It then checks if
 *   an error interrupt is pending using sdhc_error_interrupt_pending. If no error is
 *   immediately present, it calls wait_for_sdhc_data_ready (likely a wait/delay function)
 *   and re-checks. If an error interrupt is detected or the wait fails, it calls
 *   rearui_draw_active_screen (likely cleanup/reset) and returns 0; otherwise, it returns
 *   1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int sdhc_wait_error_interrupt(void *param_1,int param_2,uint32_t param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  iVar1 = invoke_sdhc_buffer_write(param_1,param_3,1);
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar1 = shift_value_if_flag_clear(param_1,param_2);
    iVar1 = sdhc_send_command_with_flag_10448290(param_1,iVar1);
    if (((iVar1 != 0) && (bVar2 = sdhc_error_interrupt_pending(*(void **)((int)param_1 + 0x110)), !bVar2)) &&
       (iVar1 = wait_for_sdhc_data_ready(param_1,1000), iVar1 != 0)) {
      iVar3 = 1;
    }
  }
  bVar2 = sdhc_error_interrupt_pending(*(void **)((int)param_1 + 0x110));
  if ((bVar2) || (iVar3 == 0)) {
    rearui_draw_active_screen(param_1);
    iVar3 = 0;
  }
  return iVar3;
}
