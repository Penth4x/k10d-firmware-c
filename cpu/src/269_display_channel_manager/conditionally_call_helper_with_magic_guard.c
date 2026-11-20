/* @k10d conditionally_call_helper_with_magic_guard @ 0x10506e26
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Calls invoke_virtual_slot_two_104272e4 on a derived pointer only when param_2 matches a
 *   specific constant and param_3 has certain bits set.
 * summary:
 *   The function checks if param_2 equals 0x8000000d (represented as -0x7ffffff3) and if
 *   param_3 has either bit 0 or bit 31 set. If both conditions are true, it calls
 *   invoke_virtual_slot_two_104272e4 with param_1 + 0x14, 0x1010000, and 0. It always
 *   returns 0. The role of the callee and the specific meaning of the magic constants are
 *   not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105d518c": ignoring multiple overlapping fields */

uint32_t conditionally_call_helper_with_magic_guard(cls_105d518c *param_1,int param_2,uint param_3)

{
  if ((param_2 == -0x7ffffff3) && ((param_3 & 0x8000000d/*SDRAM*/) != 0)) {
    invoke_virtual_slot_two_104272e4(&param_1->field_0x14,0x1010000,0);
  }
  return 0;
}
