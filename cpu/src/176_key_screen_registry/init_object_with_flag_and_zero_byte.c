/* @k10d init_object_with_flag_and_zero_byte @ 0x10482e80
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * purpose:
 *   Sets a flag at offset 0x20, calls an init helper, and zeroes a byte at offset 0x28 of
 *   the object.
 * summary:
 *   Takes a pointer to an object, calls set_flg_obj on the field at offset 0x20, invokes
 *   clear_three_struct_fields with the object pointer, then writes 0 to the byte at offset
 *   0x28. Returns 0. The specific subsystem is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_with_flag_and_zero_byte(void *param_1)

{
  set_flg_obj((uint32_t *)((int)param_1 + 0x20));
  clear_three_struct_fields((int)param_1);
  *(uint8_t *)((int)param_1 + 0x28) = 0;
  return 0;
}
