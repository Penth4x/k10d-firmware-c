/* @k10d write_two_shorts_from_struct @ 0x104a591c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Reads two consecutive 16-bit values from a struct and passes them to a helper with
 *   indices 0 and 1.
 * summary:
 *   The function dereferences a pointer at offset 0xc of param_1 to get a base address,
 *   then reads two 16-bit values at offsets 0x10 and 0x14 from that base. It calls
 *   write_word_to_dynamic_array twice, passing param_2, the index (0 or 1), and the
 *   respective 16-bit value. The specific role of the data or the helper is not
 *   determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_shorts_from_struct(int param_1,int param_2)

{
  write_word_to_dynamic_array(param_2,0,(short)*(uint32_t *)(*(int *)(param_1 + 0xc) + 0x10));
  write_word_to_dynamic_array(param_2,1,(short)*(uint32_t *)(*(int *)(param_1 + 0xc) + 0x14));
  return;
}
