/* @k10d add_byte_offset_by_mode @ 0x000f3578
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Adds a signed byte offset selected from three lookup tables based on param_2 and
 *   param_1 to param_1.
 * summary:
 *   The function masks param_1 with 7 to index into one of three 8-byte tables at
 *   0x000fc854, 0x000fc85c, or 0x000fc864. The table selection depends on param_2 (0, 1, 2,
 *   or other) and comparisons of param_1 against 0x41 or 1. The selected byte is sign-
 *   extended and added to param_1, with the result masked to 8 bits. No callees are
 *   invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint add_byte_offset_by_mode(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1 & 7;
  if (param_2 == 0) {
    iVar1 = (int)(char)(&DAT_000fc854)[uVar2];
  }
  else if (param_2 == 1) {
    if ((int)param_1 < 0x41) {
      iVar1 = (int)(char)(&DAT_000fc85c)[uVar2];
    }
    else {
      iVar1 = (int)(char)(&DAT_000fc864)[uVar2];
    }
  }
  else if (param_2 == 2) {
    if ((char)param_1 < '\x01') {
      iVar1 = (int)(char)(&DAT_000fc85c)[uVar2];
    }
    else {
      iVar1 = (int)(char)(&DAT_000fc864)[uVar2];
    }
  }
  else {
    iVar1 = (int)(char)(&DAT_000fc864)[uVar2];
  }
  return param_1 + iVar1 & 0xff;
}
