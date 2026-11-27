/* @k10d process_sdhc_error_interrupt_10448f52 @ 0x10448f52
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Handles an SDHCI error interrupt by checking status, clearing the interrupt, and
 *   updating the controller state.
 * summary:
 *   The function first writes a value to an offset in the SDHCI controller structure
 *   (param_1 + 0x110). It then calls a sequence of helper functions (sdhc_virtual_write,
 *   shift_value_if_flag_clear, sdhc_send_command_with_flag_10448392) to process the error
 *   context. If an error interrupt is still pending (checked via
 *   sdhc_error_interrupt_pending), it calls check_sdhc_command_success to clear it.
 *   Otherwise, it attempts to recover or update state via wait_for_sdhc_data_ready and
 *   poll_object_until_flag_set. Finally, if the operation failed or an error was cleared,
 *   it calls rearui_draw_active_screen to finalize the state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int process_sdhc_error_interrupt_10448f52(void *param_1,int param_2,uint param_3,uint32_t param_4,int param_5)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  (*(code *)0x1044aa44/*ROM*/)(*(uint32_t *)((int)param_1 + 0x110),param_3 & 0xffff);
  iVar1 = sdhc_virtual_write(param_1,param_4,param_3);
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar1 = shift_value_if_flag_clear(param_1,param_2);
    iVar1 = sdhc_send_command_with_flag_10448392(param_1,iVar1,param_5);
    if (iVar1 != 0) {
      bVar2 = sdhc_error_interrupt_pending(*(void **)((int)param_1 + 0x110));
      if (bVar2) {
        check_sdhc_command_success((void *)(uint32_t)param_1);
        bVar2 = true;
        goto LAB_10448ff4;
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
LAB_10448ff4:
  if (bVar2) {
    rearui_draw_active_screen(param_1);
  }
  return iVar3;
}
