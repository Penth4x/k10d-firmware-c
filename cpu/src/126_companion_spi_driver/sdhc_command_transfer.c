/* @k10d sdhc_command_transfer @ 0x10448d7a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Executes an SDHC command sequence and returns success if no error interrupt is pending.
 * summary:
 *   Calls a chain of SDHC helper functions (sdhc_virtual_write, shift_value_if_flag_clear,
 *   sdhc_send_command_183a, wait_for_sdhc_data_ready) to perform a transfer. It checks the
 *   SDHC error interrupt status via sdhc_error_interrupt_pending; if an error is pending or
 *   the transfer chain failed, it calls rearui_draw_active_screen (likely cleanup/reset)
 *   and returns 0. Returns 1 on success.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int sdhc_command_transfer(void *param_1,int param_2,uint32_t param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  iVar1 = sdhc_virtual_write(param_1,param_3,1);
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar1 = shift_value_if_flag_clear(param_1,param_2);
    iVar1 = sdhc_send_command_183a(param_1,iVar1);
    if ((iVar1 != 0) && (iVar1 = wait_for_sdhc_data_ready(param_1,1000), iVar1 != 0)) {
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
