/* @k10d call_helper_with_offset_arg_1052d62e @ 0x1052d62e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 288_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper with param_1 and a value derived from a field at offset 500 plus 0x164.
 * summary:
 *   The function reads an integer from param_1 + 500, adds 0x164 to it, and passes both
 *   param_1 and the computed value as arguments to copy_byte_flags_to_struct. It performs
 *   no other operations and returns void. The role of the helper and the meaning of the
 *   offset are not determinable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_arg_1052d62e(int param_1)

{
  copy_byte_flags_to_struct(param_1,*(int *)(param_1 + 500) + 0x164);
  return;
}
