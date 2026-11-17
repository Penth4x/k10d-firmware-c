/* @k10d telemetry_cluster_C_handler_0 @ 0x105116ca
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed copy_two_fields_and_call_helper)
 * unit: 271_test_mode_manager (unit names are model-proposed)
 * purpose:
 *   Copies two 32-bit values from an object into a pointer-referenced structure and calls a
 *   helper on the third field.
 * summary:
 *   Reads two words from offsets 0xdc and 0x134 of the object in r8 and writes them into
 *   the memory pointed to by the pointer at offset 0x818 (at +0 and +4). Then calls
 *   copy_null_terminated_string with a pointer to the third field (offset +8 of that
 *   target) and a constant address DAT_105d5f58. The role of the object and the helper is
 *   not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void telemetry_cluster_C_handler_0(void)

{
  int caller_r8;
  
  *(uint32_t *)(*(int *)(caller_r8 + 0x818) + 4) = *(uint32_t *)(caller_r8 + 0xdc);
  **(uint32_t **)(caller_r8 + 0x818) = *(uint32_t *)(caller_r8 + 0x134);
  copy_null_terminated_string((void *)(*(int *)(caller_r8 + 0x818) + 8),&DAT_105d5f58/*ROM*/);
  return;
}
