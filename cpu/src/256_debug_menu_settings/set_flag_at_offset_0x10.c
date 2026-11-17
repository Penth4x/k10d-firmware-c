/* @k10d set_flag_at_offset_0x10 @ 0x104f272e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Writes a boolean derived from param_2 into the field at offset 0x10 of the object in
 *   param_1.
 * summary:
 *   The function dereferences param_1 + 0x10 and passes it, along with the constant 0x14
 *   and the non-zero test of param_2, to write_object_field_byte. It acts as a thin setter
 *   for a specific field within a structure. The role of write_object_field_byte is
 *   unknown, so the specific meaning of the field at 0x10 cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_at_offset_0x10(int param_1,int param_2)

{
  write_object_field_byte((void *)(*(uint32_t *)(param_1 + 0x10)),0x14,param_2 != 0);
  return;
}
