/* @k10d set_struct_field_at_offset_4 @ 0x1046c7dc
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 152_settings_manager (unit names are model-proposed)
 * purpose:
 *   Writes the second argument into the 4-byte field at offset 4 of the structure pointed
 *   to by the first argument.
 * summary:
 *   The function performs a single 32-bit store to param_1 + 4 using param_2. It has no
 *   callees and no other side effects. The specific meaning of the field is not
 *   determinable from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_struct_field_at_offset_4(int param_1,uint32_t param_2)

{
  *(uint32_t *)(param_1 + 4) = param_2;
  return;
}
