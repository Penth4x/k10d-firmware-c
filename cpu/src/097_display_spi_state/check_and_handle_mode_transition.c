/* @k10d check_and_handle_mode_transition @ 0x10416c66
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Checks a mode state flag and dispatches to initialization or cleanup routines based on
 *   a sub-state byte.
 * summary:
 *   Reads a pointer at offset 0x8c and a flag at offset 0x88. If the pointer is valid and
 *   the byte at offset 0x29 is zero, it calls finalize_and_clear_object_state and clears a
 *   byte at 0x93. If the byte is non-zero, it calls eventflag_clr_flg and
 *   set_flag_at_offset_0x7c_1041b42e. Returns 1 if action was taken, 0 otherwise. Called
 *   from the shooting mode event loop.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_and_handle_mode_transition(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x8c) != 0) {
    if (*(char *)(*(int *)(param_1 + 0x8c) + 0x29) == '\0') {
      if (*(int *)(param_1 + 0x88) == 0) {
        finalize_and_clear_object_state(param_1);
        *(uint8_t *)(param_1 + 0x93) = 0;
        uVar1 = 1;
      }
    }
    else {
      eventflag_clr_flg((void *)(param_1 + 0x1540), 0x20);
      set_flag_at_offset_0x7c_1041b42e(*(uint32_t *)(param_1 + 0x4c));
      uVar1 = 1;
    }
  }
  return uVar1;
}
