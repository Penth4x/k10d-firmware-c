/* @k10d check_mode_state_and_dispatch @ 0x104173fa
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Checks specific byte and int fields in a mode object and conditionally calls two helper
 *   functions.
 * summary:
 *   The function inspects several fields at offsets 0x92, 0x93, 0x1522, 0x151d, 0x151e,
 *   0x1500, and 0x1530 within the object pointed to by param_1. If the first set of bytes
 *   are zero, it calls set_mode_state_flag with arguments 1 and 0. If the int at 0x1500 is
 *   not 2 and the int at 0x1530 is not 0, it calls set_state_flag_and_notify with argument
 *   0. It is called from the shooting mode event loop.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_mode_state_and_dispatch(int param_1)

{
  if ((((*(char *)(param_1 + 0x92) == '\0') && (*(char *)(param_1 + 0x93) == '\0')) &&
      (*(char *)(param_1 + 0x1522) == '\0')) &&
     ((*(char *)(param_1 + 0x151d) == '\0' && (*(char *)(param_1 + 0x151e) == '\0')))) {
    set_mode_state_flag(param_1,1,0);
  }
  if ((*(int *)(param_1 + 0x1500) != 2) && (*(int *)(param_1 + 0x1530) != 0)) {
    set_state_flag_and_notify(param_1,0);
  }
  return;
}
