/* @k10d copy_struct_fields_to_buffer_1052a012 @ 0x1052a012
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 285_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Copies eight 32-bit fields from a source struct to a destination buffer and sets a flag
 *   based on a callee's return value.
 * summary:
 *   The function reads a pointer from offset 0x2c of the input structure and writes eight
 *   consecutive 32-bit values from offsets 0x40-0x5c of the input to that destination. It
 *   then calls check_four_pixel_flags with the input structure; if the callee returns non-
 *   zero, it sets the byte at offset 0x20 of the input to 1. The specific camera subsystem
 *   or data type is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_struct_fields_to_buffer_1052a012(int param_1)

{
  int iVar1;
  uint32_t *puVar2;
  
  puVar2 = *(uint32_t **)(param_1 + 0x2c);
  *puVar2 = *(uint32_t *)(param_1 + 0x40);
  puVar2[1] = *(uint32_t *)(param_1 + 0x50);
  puVar2[2] = *(uint32_t *)(param_1 + 0x44);
  puVar2[3] = *(uint32_t *)(param_1 + 0x54);
  puVar2[4] = *(uint32_t *)(param_1 + 0x48);
  puVar2[5] = *(uint32_t *)(param_1 + 0x58);
  puVar2[6] = *(uint32_t *)(param_1 + 0x4c);
  puVar2[7] = *(uint32_t *)(param_1 + 0x5c);
  iVar1 = check_four_pixel_flags(param_1);
  if (iVar1 != 0) {
    *(uint8_t *)(param_1 + 0x20) = 1;
  }
  return;
}
