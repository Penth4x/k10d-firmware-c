/* @k10d initialize_subsystem_and_run_checks @ 0x104d80ba
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Sets a flag, initializes a sub-structure, and runs a sequence of conditional checks
 *   returning a status code.
 * summary:
 *   The function writes 1 to offset 0x2b5c of the object passed in param_1 and calls
 *   eventflag_clr_flg to initialize the region at offset 0x2b60 with 0xffffffff. It then
 *   clears a byte at 0x2b6d and calls ensure_buffer_allocated. If that returns non-zero, it
 *   calls validate_and_commit_state_change; if that returns zero, it calls
 *   free_heap_block_if_allocated with no arguments. If validate_and_commit_state_change
 *   returns non-zero, it calls process_34_entry_sequence; if that returns non-zero, the
 *   function returns 1, otherwise it calls free_heap_block_if_allocated with param_1. The
 *   function returns 0 in all other paths.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_subsystem_and_run_checks(int param_1)

{
  int iVar1;
  
  *(uint8_t *)(param_1 + 0x2b5c) = 1;
  eventflag_clr_flg((void *)(param_1 + 0x2b60), 0xffffffff);
  *(uint8_t *)(param_1 + 0x2b6d) = 0;
  iVar1 = ensure_buffer_allocated(param_1);
  if (iVar1 != 0) {
    iVar1 = validate_and_commit_state_change(param_1);
    if (iVar1 == 0) {
      free_heap_block_if_allocated(__frv_reg_unset(4));
    }
    else {
      iVar1 = process_34_entry_sequence(param_1);
      if (iVar1 != 0) {
        return 1;
      }
      free_heap_block_if_allocated(param_1);
    }
  }
  return 0;
}
