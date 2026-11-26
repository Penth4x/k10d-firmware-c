/* @k10d ec_post_evt_0x10 @ 0x10431fe0
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed set_flag_at_offset_0x7c)
 * unit: 117_event_context_manager (unit names are model-proposed)
 * purpose:
 *   Sets a flag at offset 0x7c of the object pointed to by param_1.
 * summary:
 *   The function takes a single pointer argument and calls set_flg_obj on the memory
 *   location at offset 0x7c. It is called by mode_ctrl_on_event, suggesting it sets a state
 *   flag within a mode control object. The specific meaning of the flag is not determinable
 *   from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void ec_post_evt_0x10(int param_1)

{
  set_flg_obj((uint32_t *)(param_1 + 0x7c), 0x10);
  return;
}
