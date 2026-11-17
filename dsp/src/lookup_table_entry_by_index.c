/* @k10d lookup_table_entry_by_index @ 0x000c1740
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Returns a byte from one of two lookup tables based on a mode flag and a clamped index.
 * summary:
 *   The function reads a mode flag from DAT_0003c44a and an index from DAT_0003c041. It
 *   clamps the index to a maximum of 4 or 2 depending on the flag, then uses DAT_0003c3c4
 *   as a row offset to index into either the table at 0x000f90f8 (stride 6) or 0x000f90e8
 *   (stride 4). It returns the byte at the calculated offset. No callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t lookup_table_entry_by_index(void)

{
  uint8_t uVar1;
  uint uVar2;
  
  uVar2 = (uint)DAT_0003c041;
  if (DAT_0003c44a == '\x02') {
    if (4 < uVar2) {
      uVar2 = 4;
    }
    uVar1 = (&DAT_000f90f8)[uVar2 + (uint)DAT_0003c3c4 * 6];
  }
  else {
    if (2 < uVar2) {
      uVar2 = 2;
    }
    uVar1 = (&DAT_000f90e8)[uVar2 + (uint)DAT_0003c3c4 * 4];
  }
  return uVar1;
}
