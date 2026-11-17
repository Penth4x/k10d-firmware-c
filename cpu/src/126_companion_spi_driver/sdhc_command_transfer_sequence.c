/* @k10d sdhc_command_transfer_sequence @ 0x10447c98
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Executes a multi-step SDHCI command and data transfer sequence with error handling.
 * summary:
 *   The function wraps a complex SD card operation, starting with a state change via
 *   set_flag_and_notify_object. It performs a series of checks and calls to lower-level
 *   SDHCI functions (build_two_string_concat_buffer, check_mode_condition,
 *   sdhc_send_command_check_status, sdhc_init_card, sdhc_send_cmd_0xd1a) to manage the
 *   transfer. It specifically checks for SDHCI error interrupts using
 *   sdhc_error_interrupt_pending and calls rearui_draw_active_screen to handle errors or
 *   reset state if the transfer fails or an error is pending. The function returns 1 on
 *   success and 0 on failure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int sdhc_command_transfer_sequence(void *param_1,int param_2,uint8_t *param_3,uint8_t *param_4)

{
  int iVar1;
  uint32_t uVar2;
  bool bVar3;
  int iVar4;
  
  set_flag_and_notify_object(param_1,1);
  iVar4 = 0;
  if ((param_3 != (uint8_t *)0x0) &&
     (iVar1 = (*(code *)0x1044c03a/*ROM*/)((int)param_1 + 0x15c), iVar1 == 0)) {
    (*(code *)0x1044bf2a/*ROM*/)(param_3);
  }
  iVar1 = (*(code *)0x1044bfc8/*ROM*/)((int)param_1 + 0x15c,param_2);
  if (iVar1 != 0) {
    iVar1 = build_two_string_concat_buffer((uint8_t *)((int)param_1 + 0x138),param_2,param_3,param_4);
    if ((iVar1 != 0) && (iVar1 = check_mode_condition(param_1,param_2), iVar1 == 0)) {
      uVar2 = (*(code *)0x1044bfc2/*ROM*/)((uint8_t *)((int)param_1 + 0x138));
      iVar1 = sdhc_send_command_check_status(param_1,uVar2);
      if ((iVar1 != 0) &&
         (((iVar1 = sdhc_init_card(param_1), iVar1 != 0 &&
           (iVar1 = sdhc_send_cmd_0xd1a(param_1,*(uint16_t *)((int)param_1 + 0xe0)), iVar1 != 0)) &&
          ((*(uint *)((int)param_1 + 0x3c8) & 0x1000000) == 0)))) {
        (*(code *)0x1044c03e/*ROM*/)((int)param_1 + 0x15c,param_2);
        iVar1 = sdhc_send_command_check_status(param_1,0x200);
        if (iVar1 != 0) {
          iVar4 = 1;
        }
      }
      if ((param_2 == 8) && (iVar4 == 1)) {
        iVar4 = check_three_conditions_on_object(param_1);
      }
      bVar3 = sdhc_error_interrupt_pending(*(void **)((int)param_1 + 0x110));
      if ((bVar3) || (iVar4 == 0)) {
        rearui_draw_active_screen(param_1);
        iVar4 = 0;
      }
    }
  }
  set_flag_and_notify_object(param_1,0);
  return iVar4;
}
