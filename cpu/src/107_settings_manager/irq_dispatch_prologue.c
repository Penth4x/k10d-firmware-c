/* @k10d irq_dispatch_prologue @ 0x10427f2a
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed get_or_init_dispatch_state)
 * unit: 107_settings_manager (unit names are model-proposed)
 * purpose:
 *   Lazily initializes a state object at 0x8001ded4 on first call and returns its address.
 * summary:
 *   Checks the flag at 0x8001ded8; if zero, sets it to 1 and calls
 *   zero_initialize_twelve_words with the state pointer and prepend_to_singly_linked_list
 *   with 0x8000fc40. Returns the pointer 0x8001ded4 in all cases. The callees are unnamed,
 *   so the specific subsystem role is not determinable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t irq_dispatch_prologue(void)

{
  /* Lazy-init guard: word at 0x8001ded8 is the "already initialized" flag */
  if (_DAT_8001ded8/*SDRAM*/ == 0) {
    _DAT_8001ded8/*SDRAM*/ = 1;
    zero_initialize_twelve_words(0x8001ded4/*SDRAM*/);
    prepend_to_singly_linked_list((void *)0x8000fc40/*SDRAM*/);
  }
  return 0x8001ded4/*SDRAM*/;
}
