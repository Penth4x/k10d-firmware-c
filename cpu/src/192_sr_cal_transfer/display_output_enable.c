/* @k10d display_output_enable @ 0x1048f826
 * name: verified (structural evidence: emulator: runs on the UI "show" request (0x104924e6 code 0x80 -> 0x104927f6 -> 0x1052b904); the earlier SR-actuator reading was wrong)
 * unit: 192_sr_cal_transfer (unit names are model-proposed)
 * purpose:
 *   Turns the rear display output on: checks the controller state (0x40040004 & 0xc000),
 *   programs the layer banks, posts the display flag, sets obj+0x37 = 1 (on).
 * summary:
 *   VERIFIED: emulator: runs on the UI "show" request (0x104924e6 code 0x80 -> 0x104927f6
 *   -> 0x1052b904); the earlier SR-actuator reading was wrong
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void display_output_enable(int param_1)

{
  int iVar1;
  
  iVar1 = read_display_controller_status_bits(*(uint32_t *)(param_1 + 0x10));
  if (iVar1 != 0xc000) {
    if (*(char *)(param_1 + 0x34) == '\x01') {
      reset_display_layer_registers_10445262(*(uint32_t *)(param_1 + 0x14));
    }
    else {
      reset_display_layer_registers_104452ba(*(uint32_t *)(param_1 + 0x14));
    }
    call_helper_with_0x4000_10445e54(*(uint32_t *)(param_1 + 0x10));
  }
  if (*(char *)(param_1 + 0x35) == '\x01') {
    set_flag_with_notify(*(void **)(param_1 + 0x20));
  }
  else {
    configure_display_layer_params(param_1);
    call_single_helper_with_param_104436da(*(uint32_t *)(param_1 + 0xc));
    clear_flag_with_notify(*(void **)(param_1 + 0x20));
  }
  *(uint8_t *)(param_1 + 0x37) = 1;
  return;
}
