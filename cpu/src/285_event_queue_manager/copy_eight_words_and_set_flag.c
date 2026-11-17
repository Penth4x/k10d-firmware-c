/* @k10d copy_eight_words_and_set_flag @ 0x10529fb8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 285_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Copies eight 32-bit words from a pointer stored at offset 0x2c into offsets 0x40-0x5c,
 *   then calls a helper and sets a flag at 0x20 if it returns non-zero.
 * summary:
 *   The function reads a pointer from param_1+0x2c and copies the eight words it points to
 *   into a contiguous block at param_1+0x40 through param_1+0x5c. It then calls
 *   check_four_pixel_flags with param_1 as an argument. If that call returns a non-zero
 *   value, the byte at param_1+0x20 is set to 1. The specific camera subsystem is not
 *   identifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_eight_words_and_set_flag(void *param_1)

{
  int iVar1;
  uint32_t *puVar2;
  
  puVar2 = *(uint32_t **)((int)param_1 + 0x2c);
  *(uint32_t *)((int)param_1 + 0x40) = *puVar2;
  *(uint32_t *)((int)param_1 + 0x50) = puVar2[1];
  *(uint32_t *)((int)param_1 + 0x44) = puVar2[2];
  *(uint32_t *)((int)param_1 + 0x54) = puVar2[3];
  *(uint32_t *)((int)param_1 + 0x48) = puVar2[4];
  *(uint32_t *)((int)param_1 + 0x58) = puVar2[5];
  *(uint32_t *)((int)param_1 + 0x4c) = puVar2[6];
  *(uint32_t *)((int)param_1 + 0x5c) = puVar2[7];
  iVar1 = check_four_pixel_flags((int)param_1);
  if (iVar1 != 0) {
    *(uint8_t *)((int)param_1 + 0x20) = 1;
  }
  return;
}
