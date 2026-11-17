/* @k10d update_status_byte_flags_000f661c @ 0x000f661c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Updates three global byte fields based on bit tests of two other global status words.
 * summary:
 *   The function reads DAT_0003c4b7 and DAT_0003c4bf, then conditionally modifies them and
 *   DAT_0003c4b3 depending on bits 4, 3, 2, 1, and 0 of DAT_0003c02f and bit 4 of
 *   DAT_0003c003. It performs bitwise AND/OR operations to set or clear specific bits in
 *   the target bytes. No MMIO writes or function calls are observed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_status_byte_flags_000f661c(void)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = DAT_0003c4b7;
  bVar2 = DAT_0003c4bf;
  if ((DAT_0003c003 & 0x10) != 0) {
    if ((DAT_0003c02f & 8) == 0) {
      if ((DAT_0003c02f & 4) == 0) {
        if ((DAT_0003c02f & 2) == 0) {
          if ((DAT_0003c02f & 1) != 0) {
            DAT_0003c4b3 = DAT_0003c4b3 & 0xfc;
            bVar1 = DAT_0003c4b7 & 0xfe | 4;
            bVar2 = DAT_0003c4bf | 1;
            if ((DAT_0003c028 & 2) == 0) {
              bVar1 = DAT_0003c4b7 & 0xfa;
              bVar2 = DAT_0003c4bf & 0xfe;
            }
          }
        }
        else {
          DAT_0003c4b3 = DAT_0003c4b3 & 0xfe;
          bVar1 = DAT_0003c4b7 & 0xfe | 4;
          bVar2 = DAT_0003c4bf | 1;
        }
      }
      else {
        DAT_0003c4b3 = DAT_0003c4b3 & 0xfe;
        bVar1 = DAT_0003c4b7 | 5;
        bVar2 = DAT_0003c4bf | 1;
      }
    }
    else {
      DAT_0003c4b3 = DAT_0003c4b3 | 1;
      bVar1 = DAT_0003c4b7 | 5;
      bVar2 = DAT_0003c4bf | 1;
    }
  }
  DAT_0003c4bf = bVar2;
  DAT_0003c4b7 = bVar1;
  return;
}
