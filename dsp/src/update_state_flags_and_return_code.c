/* @k10d update_state_flags_and_return_code @ 0x000cc8cc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Modifies byte flags at 0x0003ce01-04 based on bit conditions and returns a status code
 *   (4, 5, or 10).
 * summary:
 *   The function reads and updates several byte-sized global variables (DAT_0003ce01,
 *   DAT_0003ce02, DAT_0003ce04) using bitwise operations. It conditionally increments a
 *   counter at 0x0003ce76 and calls shift_and_store_value under specific flag combinations.
 *   The return value is one of three constants: 4, 5, or 10, depending on the initial state
 *   of the flags.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int update_state_flags_and_return_code(void)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  
  iVar3 = 4;
  bVar1 = DAT_0003ce04 & 0xf7;
  if ((DAT_0003ce04 & 0x10) == 0) {
    DAT_0003ce04 = bVar1;
    if ((DAT_0003c4dd & 2) == 0) {
      DAT_0003ce04 = bVar1 | 0x10;
    }
    bVar1 = DAT_0003ce02 & 0xf3;
    if ((DAT_0003ce02 & 0x20) == 0) {
      if ((DAT_0003ce02 & 0x10) == 0) {
        iVar3 = 10;
        DAT_0003ce02 = bVar1;
      }
      else {
        DAT_0003ce02 = bVar1 | 8;
      }
    }
    else {
      _DAT_0003ce76 = _DAT_0003ce76 + 1;
      DAT_0003ce02 = bVar1 | 4;
    }
    bVar2 = DAT_0003ce02;
    if (((iVar3 == 4) && (bVar2 = DAT_0003ce02 & 0xfc, (DAT_0003ce01 & 0x40) != 0)) &&
       ((DAT_0003ce02 & 4) != 0)) {
      DAT_0003ce02 = bVar2;
      shift_and_store_value();
      iVar3 = 5;
      bVar2 = DAT_0003ce02;
    }
  }
  else {
    iVar3 = 10;
    if ((DAT_0003ce02 & 0x20) == 0) {
      bVar2 = DAT_0003ce02 | 1;
      DAT_0003ce04 = bVar1;
    }
    else {
      bVar2 = DAT_0003ce02 | 2;
      DAT_0003ce04 = bVar1;
    }
  }
  DAT_0003ce02 = bVar2;
  return iVar3;
}
