/* @k10d process_sdhc_error_interrupt_104490c2 @ 0x104490c2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Handles an SDHCI error interrupt by checking status, clearing the interrupt, and
 *   recovering or reporting the error.
 * summary:
 *   The function first updates a field at offset 0x110 in the object and calls
 *   send_sdhc_command_170a. It then checks a condition via sdhc_virtual_write. If active,
 *   it processes the error state using shift_value_if_flag_clear and
 *   sdhc_send_command_with_flag_10448392. It explicitly checks if an SDHCI error interrupt
 *   is pending using sdhc_error_interrupt_pending. If pending, it calls
 *   check_sdhc_command_success to likely clear the interrupt and sets a success flag.
 *   Otherwise, it attempts recovery via wait_for_sdhc_data_ready or
 *   poll_object_until_flag_set. Finally, it calls rearui_draw_active_screen if the
 *   operation was successful or the interrupt was handled.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int process_sdhc_error_interrupt_104490c2(void *param_1,int param_2,uint param_3,uint32_t param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  (*(code *)0x1044aa44/*ROM*/)(*(uint32_t *)((int)param_1 + 0x110),param_3 & 0xffff);
  send_sdhc_command_170a(param_1,param_3);
  iVar1 = sdhc_virtual_write(param_1,param_4,param_3);
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar1 = shift_value_if_flag_clear(param_1,param_2);
    iVar1 = sdhc_send_command_with_flag_10448392(param_1,iVar1,2);
    if (iVar1 != 0) {
      bVar2 = sdhc_error_interrupt_pending(*(void **)((int)param_1 + 0x110));
      if (bVar2) {
        check_sdhc_command_success((void *)__frv_reg_unset(4));
        bVar2 = true;
        goto LAB_1044915e;
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
LAB_1044915e:
  if (bVar2) {
    rearui_draw_active_screen(param_1);
  }
  return iVar3;
}
