/* @k10d toggle_object_subsystem_state @ 0x10410c8a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Toggles a state flag at offset 0x7d, calling paired enable/disable helpers on object
 *   pointers at offsets 0x3c, 0x40, 0x58, and 0x60.
 * summary:
 *   The function branches on param_2. If 0, it clears the flag at 0x7d and calls
 *   clear_flag_with_notify on pointers at 0x3c, 0x60, and 0x40, with
 *   check_kernel_call_success_10459fea(1) in between, and conditionally on 0x58 if flag
 *   0xbf is set. If param_2 is non-zero and the flag at 0x7d is clear, it sets the flag and
 *   calls set_flag_with_notify on pointers at 0x58 (if 0xbf is set) and 0x40. The pattern
 *   suggests enabling/disabling sub-components of the object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_object_subsystem_state(int param_1,int param_2)

{
  if (param_2 == 0) {
    *(uint8_t *)(param_1 + 0x7d) = 0;
    clear_flag_with_notify(*(void **)(param_1 + 0x3c));
    check_kernel_call_success_10459fea();
    clear_flag_with_notify(*(void **)(param_1 + 0x60));
    clear_flag3_with_notify(*(void **)(param_1 + 0x60));
    check_kernel_call_success_10459fea();
    clear_flag_with_notify(*(void **)(param_1 + 0x40));
    if (*(char *)(param_1 + 0xbf) != '\0') {
      check_kernel_call_success_10459fea();
      clear_flag_with_notify(*(void **)(param_1 + 0x58));
    }
  }
  else if (*(char *)(param_1 + 0x7d) == '\0') {
    *(uint8_t *)(param_1 + 0x7d) = 1;
    if (*(char *)(param_1 + 0xbf) != '\0') {
      set_flag_with_notify(*(void **)(param_1 + 0x58));
      check_kernel_call_success_10459fea();
    }
    set_flag_with_notify(*(void **)(param_1 + 0x40));
  }
  return;
}
