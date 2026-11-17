/* @k10d check_byte_at_offset_0x16 @ 0x104af46c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks if the byte at offset 0x16 of the object is null, initializing fields at 0xc and
 *   0x10 if so, and returns 0 or 2.
 * summary:
 *   The function inspects the byte at offset 0x16 of the structure pointed to by param_1.
 *   If the byte is zero, it sets the 32-bit field at offset 0x10 to 1 and the field at
 *   offset 0xc to 0, then returns 0. If the byte is non-zero, it returns 2. No callees are
 *   invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_byte_at_offset_0x16(int param_1)

{
  uint32_t uVar1;
  
  if (*(char *)(param_1 + 0x16) == '\0') {
    *(uint32_t *)(param_1 + 0x10) = 1;
    *(uint32_t *)(param_1 + 0xc) = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}
