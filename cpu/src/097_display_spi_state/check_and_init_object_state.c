/* @k10d check_and_init_object_state @ 0x1041775c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Initializes an object and returns 1 if a series of state checks and a final validation
 *   pass succeed.
 * summary:
 *   The function first calls two initialization routines on the object passed in param_1.
 *   It then performs a sequence of checks: it calls toggle_state_flag_0x20000000 and
 *   check_flag_and_call_helper_10418b5a, verifying their non-zero return values, and checks
 *   that three specific bytes at offsets 0x150c, 0x150e, and 0x150f in the object are zero.
 *   If all these conditions are met, it calls check_and_log_exposure_params and returns 1
 *   if that call also succeeds, otherwise it returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_and_init_object_state(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  compute_image_size_divisor(param_1,0);
  send_exposure_timer_command(param_1);
  iVar1 = toggle_state_flag_0x20000000(param_1);
  uVar2 = 0;
  if ((((iVar1 != 0) && (iVar1 = check_flag_and_call_helper_10418b5a(param_1), iVar1 != 0)) &&
      (*(char *)(param_1 + 0x150c) == '\0')) &&
     (((*(char *)(param_1 + 0x150e) == '\0' && (*(char *)(param_1 + 0x150f) == '\0')) &&
      (iVar1 = check_and_log_exposure_params(param_1), iVar1 != 0)))) {
    uVar2 = 1;
  }
  return uVar2;
}
