/* @k10d check_and_trigger_pending_action @ 0x10416d10
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Checks if a pending action is ready and triggers it, returning a status flag.
 * summary:
 *   The function checks three conditions on the object pointed to by param_1: a pointer at
 *   offset 0x8c is non-null, a character at offset 0x29 of that pointer is non-zero, and an
 *   integer at offset 0x88 is zero. If all conditions are met, it calls
 *   finalize_and_clear_object_state with the object, clears a byte at offset 0x93, and
 *   returns 1. Otherwise, it returns 0. The caller is a mode event loop, suggesting this
 *   checks for a specific state transition or event readiness.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_and_trigger_pending_action(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if (((*(int *)(param_1 + 0x8c) != 0) && (*(char *)(*(int *)(param_1 + 0x8c) + 0x29) != '\0')) &&
     (*(int *)(param_1 + 0x88) == 0)) {
    finalize_and_clear_object_state(param_1);
    *(uint8_t *)(param_1 + 0x93) = 0;
    uVar1 = 1;
  }
  return uVar1;
}
