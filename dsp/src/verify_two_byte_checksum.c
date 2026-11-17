/* @k10d verify_two_byte_checksum @ 0x000e9f3c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Checks if a 16-bit value matches the sum of its two bytes, returning 1 on mismatch.
 * summary:
 *   The function splits the 16-bit input into high and low bytes using FUN_000e9fd2. It
 *   iterates twice, calling check_and_run_two_routines with alternating 0x5aa5 and 0xffff
 *   values, and compares the result of FUN_000e9fd2 against the expected byte. If a
 *   mismatch is found, it returns 1; otherwise, it returns 0. The final call to
 *   check_and_run_two_routines restores the original high byte value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t verify_two_byte_checksum(int param_1)

{
  uint16_t uVar2;
  uint uVar1;
  uint uVar3;
  short sVar4;
  uint32_t uVar5;
  
  uVar5 = 0;
  uVar2 = FUN_000e9fd2(param_1);
  uVar3 = 0x5aa5;
  sVar4 = 2;
  do {
    check_and_run_two_routines(param_1,uVar3);
    uVar1 = FUN_000e9fd2(param_1 >> 1 & 0xffff);
    if (uVar1 != uVar3) {
      uVar5 = 1;
      break;
    }
    uVar3 = (uVar3 ^ 0xffffffff) & 0xffff;
    sVar4 = sVar4 + -1;
  } while (sVar4 != 0);
  check_and_run_two_routines(param_1,uVar2);
  return uVar5;
}
