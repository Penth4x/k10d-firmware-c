/* @k10d sdhc_command_transfer_with_retry @ 0x10448d0a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Executes an SDHC command sequence, checks for error interrupts, and returns success or
 *   failure.
 * summary:
 *   The function orchestrates an SD card operation by calling a sequence of helpers
 *   (shift_value_if_flag_clear, sdhc_send_command_183a, widget_frame_pump,
 *   wait_for_sdhc_data_ready) likely representing command preparation, transmission, and
 *   waiting. It explicitly checks `sdhc_error_interrupt_pending` to detect hardware errors.
 *   If an error is detected or the operation fails, it calls rearui_draw_active_screen
 *   (likely cleanup/reset) and returns 0; otherwise, it returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int sdhc_command_transfer_with_retry(void *param_1,int param_2,uint32_t param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = shift_value_if_flag_clear(param_1,param_2);
  iVar1 = sdhc_send_command_183a(param_1,iVar1);
  if ((((iVar1 != 0) && (bVar2 = sdhc_error_interrupt_pending(*(void **)((int)param_1 + 0x110)), !bVar2)) &&
      (iVar1 = widget_frame_pump(param_1,param_3), iVar1 != 0)) &&
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
