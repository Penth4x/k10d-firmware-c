/* @k10d set_flag_at_offset_0x14 @ 0x10373172
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 033_sr_menu_handler (unit names are model-proposed)
 * purpose:
 *   Calls an unknown helper then sets the byte at offset 0x14 of the object to 1.
 * summary:
 *   This is virtual slot 5 of cls_105584bc. It first calls invoke_callback_at_8000439c with
 *   no arguments, then writes the value 1 to the byte at offset 0x14 of the object passed
 *   in param_1. The specific role of the flag or the helper is not determinable from the
 *   provided pseudocode and unknown callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_at_offset_0x14(cls_105584bc *param_1)

{
  invoke_callback_at_8000439c();
  param_1->field_0x14 = 1;
  return;
}
