/* @k10d update_status_byte_flags_000f639c @ 0x000f639c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Updates a status byte by setting specific bits based on the state of three global flag
 *   variables.
 * summary:
 *   The function reads DAT_0003c46b, DAT_0003c4d3, and DAT_0003f327 to determine which bits
 *   to set in DAT_0003c4bb. It conditionally sets bit 1 (value 0x02) in DAT_0003c4b8 and
 *   sets bit 4 (0x10) or bit 5 (0x11) in the target byte. The final value is written back
 *   to DAT_0003c4bb. No external calls are made.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_status_byte_flags_000f639c(void)

{
  byte bVar1;
  
  if (DAT_0003c46b == '\0') {
    bVar1 = DAT_0003c4bb;
    if ((DAT_0003c4d3 & 0x80) != 0) {
      if ((DAT_0003f327 & 1) == 0) {
        DAT_0003c4b8 = DAT_0003c4b8 | 2;
        bVar1 = DAT_0003c4bb | 0x10;
      }
      else {
        bVar1 = DAT_0003c4bb | 0x11;
      }
    }
  }
  else {
    bVar1 = DAT_0003c4bb | 0x10;
    if ((DAT_0003c4d3 & 0x80) != 0) {
      if ((DAT_0003f327 & 1) == 0) {
        DAT_0003c4b8 = DAT_0003c4b8 | 2;
      }
      else {
        bVar1 = DAT_0003c4bb | 0x11;
      }
    }
  }
  DAT_0003c4bb = bVar1;
  return;
}
