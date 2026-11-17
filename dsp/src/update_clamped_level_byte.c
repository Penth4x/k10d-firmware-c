/* @k10d update_clamped_level_byte @ 0x000c4268
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Reads a source byte, shifts it right by 6, clamps the result to 0-3, and stores it if
 *   changed.
 * summary:
 *   The function takes the low byte of DAT_0003c190, shifts it right by 6 bits, and clamps
 *   the result to a maximum of 3. It stores this value into DAT_0003c49e and copies it to
 *   DAT_0003c49f. If the new value differs from the previous one, it updates DAT_0003f328
 *   and calls check_and_run_two_routines with arguments 0x394 and the value shifted left by
 *   8. The specific meaning of the data and the callee is not determinable from the
 *   provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_clamped_level_byte(void)

{
  byte bVar1;
  
  bVar1 = DAT_0003c49e;
  DAT_0003c49f = DAT_0003c49e;
  DAT_0003c49e = DAT_0003c190 >> 6;
  if (2 < DAT_0003c49e) {
    DAT_0003c49e = 3;
  }
  if (DAT_0003c49e != bVar1) {
    DAT_0003f328 = DAT_0003c49e;
    check_and_run_two_routines(0x394,(uint)DAT_0003c49e << 8);
  }
  return;
}
