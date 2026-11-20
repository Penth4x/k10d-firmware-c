/* @k10d call_helper_on_flagged_param @ 0x104f8b7c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 261_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Calls a helper with a derived pointer and constants when param_2 matches a magic value
 *   and param_3 has specific bits set.
 * summary:
 *   Checks if param_2 equals 0x80000015 (as a signed int, -0x7fffffeb) and if param_3 has
 *   any of bits 0, 2, 4, or 31 set. If both conditions are true, it calls
 *   invoke_virtual_slot_two_104272e4 with param_1 + 0x14, 0x10c0000, and 0. Returns 0
 *   unconditionally. The role of the callee and the specific meaning of the magic values
 *   are not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105d40b0": ignoring multiple overlapping fields */

uint32_t call_helper_on_flagged_param(cls_105d40b0 *param_1,int param_2,uint param_3)

{
  if ((param_2 == -0x7fffffeb) && ((param_3 & 0x80000015/*SDRAM*/) != 0)) {
    invoke_virtual_slot_two_104272e4(&param_1->field_0x14,0x10c0000,0);
  }
  return 0;
}
