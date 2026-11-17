/* @k10d reset_and_flag_object_state @ 0x104ab0ea
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 210_settings_manager (unit names are model-proposed)
 * purpose:
 *   Clears several fields of a struct, waits for a bit to clear, then sets a flag bit in a
 *   pointer field.
 * summary:
 *   The function writes specific values to offsets 0x10, 0x12, 0x14-0x17 of the object
 *   pointed to by param_1. It then busy-waits until bit 15 of the word at offset 0x11 is
 *   cleared. Finally, it clears that word and sets bit 1 of the 32-bit value stored at the
 *   address pointed to by the first field of the object. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_and_flag_object_state(uint32_t *param_1)

{
  *(uint16_t *)param_1[0x12] = 0x800;
  *(uint16_t *)param_1[0x10] = 0;
  *(uint32_t *)param_1[5] = 0;
  *(uint32_t *)param_1[0x13] = 0;
  *(uint32_t *)param_1[0x14] = 0;
  *(uint32_t *)param_1[0x15] = 0;
  *(uint32_t *)param_1[0x16] = 0;
  *(uint32_t *)param_1[0x17] = 0;
  do {
  } while ((*(ushort *)param_1[0x11] & 0x8000) != 0);
  *(ushort *)param_1[0x11] = 0;
  *(uint *)*param_1 = *(uint *)*param_1 & 0xfffdffff | 2;
  return;
}
