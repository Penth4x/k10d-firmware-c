/* @k10d clear_flag_and_reset_state @ 0x000db6cc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Checks bit 7 of a global flag, clears it, resets several adjacent state bytes, and
 *   conditionally calls a handler.
 * summary:
 *   The function reads DAT_0003c193 and returns 1 if bit 7 is set, otherwise 0. It clears
 *   bit 7 of DAT_0003c193 and resets DAT_0000013a, DAT_0000013c, and DAT_0000013e to fixed
 *   values. It masks DAT_0000000b with 0xfc and calls
 *   check_flag_and_call_subroutine_000f05d4 if the remaining value is negative. Finally, it
 *   clears DAT_0003c199 and calls check_flag_and_call_helper_000e7944.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t clear_flag_and_reset_state(void)

{
  byte bVar1;
  uint32_t uVar2;
  bool bVar3;
  
  uVar2 = 1;
  if ((DAT_0003c193 & 0x80) == 0) {
    uVar2 = 0;
  }
  else {
    bVar1 = DAT_0003c193 & 0x7f;
    DAT_0000000b = DAT_0000000b & 0xfc;
    DAT_0000013e = 0;
    DAT_0000013a = 0xc0;
    DAT_0000013c = 0x2f;
    bVar3 = (char)DAT_0003c193 < '\0';
    DAT_0003c193 = bVar1;
    if (bVar3) {
      check_flag_and_call_subroutine_000f05d4();
    }
  }
  bVar1 = DAT_0003c193 & 0x7f;
  DAT_0000000b = DAT_0000000b & 0xfc;
  DAT_0000013e = 0;
  DAT_0000013a = 0xc0;
  DAT_0000013c = 0x2f;
  bVar3 = (char)DAT_0003c193 < '\0';
  DAT_0003c193 = bVar1;
  if (bVar3) {
    check_flag_and_call_subroutine_000f05d4();
  }
  DAT_0003c199 = 0;
  check_flag_and_call_helper_000e7944();
  return uVar2;
}
