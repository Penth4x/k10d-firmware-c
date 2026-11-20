/* @k10d toggle_state_flag_0x20000000 @ 0x104183aa
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Sets or clears bit 29 of a state word and associated flags based on a condition at
 *   offset 0x14e4.
 * summary:
 *   The function checks an integer at param_1+0x14e4. If zero, it sets bit 29 (0x20000000)
 *   in the word at param_1+0x1508 and sets bytes at 0x150c and 0x150e to 1 if other
 *   conditions are met, returning 0. If non-zero, it clears bit 29, resets the byte at
 *   0x150c, calls classify_mode_from_flags, and calls dispatch_mode_event_request with a
 *   pointer to param_1+0x60 and constant 0x130003. Returns 1 if no state change occurred.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t toggle_state_flag_0x20000000(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = 1;
  if (*(int *)(param_1 + 0x14e4) == 0) {
    if ((((*(int *)(param_1 + 0x1564) != 1) && ((*(uint *)(param_1 + 0x1508) & 0x2000000) == 0)) &&
        (*(char *)(param_1 + 0x14f4) == '\0')) &&
       (*(uint *)(param_1 + 0x1508) = *(uint *)(param_1 + 0x1508) | 0x20000000,
       *(char *)(param_1 + 0x150c) == '\0')) {
      *(uint8_t *)(param_1 + 0x150c) = 1;
      *(uint8_t *)(param_1 + 0x150e) = 1;
      uVar1 = 0;
    }
  }
  else if (*(char *)(param_1 + 0x150c) != '\0') {
    *(uint *)(param_1 + 0x1508) = *(uint *)(param_1 + 0x1508) & 0xdfffffff;
    *(uint8_t *)(param_1 + 0x150c) = 0;
    classify_mode_from_flags(__frv_reg_unset(4));
    dispatch_mode_event_request((cls_105c2050 *)(param_1 + 0x60),0x130003);
  }
  return uVar1;
}
