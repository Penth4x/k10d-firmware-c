/* @k10d add_signed_offset_by_mode @ 0x000f351a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Adds a signed byte offset selected by a mode index to a base value, returning the low 8
 *   bits.
 * summary:
 *   Selects one of three 8-byte lookup tables (DAT_000fc83c, DAT_000fc844, DAT_000fc84c)
 *   based on param_2 and a threshold on param_1, then indexes by param_1 & 7. The selected
 *   byte is sign-extended and added to param_1, with the result masked to 8 bits. No
 *   callees are invoked; the function is a pure arithmetic lookup.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint add_signed_offset_by_mode(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1 & 7;
  if (param_2 == 0) {
    iVar1 = (int)(char)(&DAT_000fc83c)[uVar2];
  }
  else if (param_2 == 1) {
    if ((int)param_1 < 0x41) {
      iVar1 = (int)(char)(&DAT_000fc844)[uVar2];
    }
    else {
      iVar1 = (int)(char)(&DAT_000fc84c)[uVar2];
    }
  }
  else if (param_2 == 2) {
    if ((char)param_1 < '\x01') {
      iVar1 = (int)(char)(&DAT_000fc844)[uVar2];
    }
    else {
      iVar1 = (int)(char)(&DAT_000fc84c)[uVar2];
    }
  }
  else {
    iVar1 = (int)(char)(&DAT_000fc84c)[uVar2];
  }
  return param_1 + iVar1 & 0xff;
}
