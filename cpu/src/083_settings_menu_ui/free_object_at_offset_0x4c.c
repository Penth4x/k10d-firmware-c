/* @k10d free_object_at_offset_0x4c @ 0x103e4816
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * unit: 083_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Frees the pointer stored at offset 0x4c of the object passed in param_1.
 * summary:
 *   Reads a 32-bit pointer from param_1 + 0x4c and passes it to
 *   set_flag_and_store_byte_103b8a8e with a size argument of 0x50 (80). The callee's role
 *   is not named, so the operation is a generic deallocation or release of an 80-byte block
 *   referenced by the object. No other side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_object_at_offset_0x4c(int param_1)

{
  set_flag_and_store_byte_103b8a8e(*(uint32_t *)(param_1 + 0x4c),0x50);
  return;
}
