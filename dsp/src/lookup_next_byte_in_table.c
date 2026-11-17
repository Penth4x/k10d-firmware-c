/* @k10d lookup_next_byte_in_table @ 0x000d34c6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Scans a byte table for a specific value and returns the following byte if found.
 * summary:
 *   Iterates through a table defined by DAT_0003cd68 with length DAT_0003cd62 in steps of
 *   2. It compares each byte at the current offset against DAT_0003cd63. If a match is
 *   found, it writes the byte at the next offset (current + 1) to the memory location
 *   pointed to by param_1 and returns. If no match is found, it returns without modifying
 *   param_1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void lookup_next_byte_in_table(uint8_t *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (DAT_0003cd62 != 0) {
    do {
      if (*(char *)(uVar1 + _DAT_0003cd68) == DAT_0003cd63) {
        *param_1 = *(uint8_t *)(_DAT_0003cd68 + uVar1 + 1);
        return;
      }
      uVar1 = uVar1 + 2 & 0xff;
    } while (uVar1 < DAT_0003cd62);
  }
  return;
}
