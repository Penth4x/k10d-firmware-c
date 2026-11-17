/* @k10d rear_pathA_inner @ 0x10468608
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed draw_pending_modal_screen)
 * unit: 146_firmware_update (unit names are model-proposed)
 * purpose:
 *   Draws the pending modal screen by calling the draw routine on the object's field at
 *   offset 0x240.
 * summary:
 *   This function acts as a thin wrapper that extracts a pointer from param_1 at offset
 *   0x240 and passes it to release_pointer_at_offset_0xc. The prior analysis notes suggest
 *   release_pointer_at_offset_0xc is responsible for drawing a pending modal screen. The
 *   return value of the draw operation is passed directly back to the caller.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t rear_pathA_inner(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = release_pointer_at_offset_0xc(*(int *)(param_1 + 0x240));
  return uVar1;
}
