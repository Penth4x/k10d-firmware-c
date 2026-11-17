/* @k10d set_object_flags_and_call_helper @ 0x104cb50c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 236_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper with two object fields and sets two specific flag values in the object.
 * summary:
 *   The function reads two 32-bit values from offsets 0x48 and 0x74 of the object pointed
 *   to by param_1 and passes them to store_clamped_index_at_offset_0x8d0. It then writes
 *   the constant 1 to offset 0x214 and the constant 0xc0005 to offset 0x210 of the same
 *   object. The specific roles of these fields and the helper function are not determinable
 *   from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_object_flags_and_call_helper(int param_1)

{
  store_clamped_index_at_offset_0x8d0(*(uint32_t *)(param_1 + 0x48),*(uint32_t *)(param_1 + 0x74));
  *(uint32_t *)(param_1 + 0x214) = 1;
  *(uint32_t *)(param_1 + 0x210) = 0xc0005;
  return;
}
