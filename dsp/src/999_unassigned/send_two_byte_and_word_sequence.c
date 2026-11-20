/* @k10d send_two_byte_and_word_sequence @ 0x000e2028
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Conditionally transmits a 16-bit value and an integer via two helper functions,
 *   aborting if a status flag is set.
 * summary:
 *   Checks bit 7 of DAT_0003c127; if set, calls empty_stub_000e2100 and FUN_000e2102 with
 *   param_1. Then loops twice, calling FUN_000e2196 with successive bytes of param_2, and
 *   twice calling increment_counter_and_flag with param_3 and param_3+1, breaking early if
 *   DAT_0003c122 is non-zero. Finally calls FUN_000e16d8 and returns DAT_0003c122.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

char send_two_byte_and_word_sequence(uint8_t param_1,uint param_2,int param_3)

{
  short sVar1;
  
  if ((DAT_0003c127 & 0x80) != 0) {
    empty_stub_000e2100();
    FUN_000e2102(param_1);
    sVar1 = 2;
    do {
      if (DAT_0003c122 != '\0') break;
      FUN_000e2196(param_2 & 0xff);
      param_2 = param_2 >> 8 & 0xffff;
      sVar1 = sVar1 + -1;
    } while (sVar1 != 0);
    sVar1 = 2;
    do {
      if (DAT_0003c122 != '\0') break;
      increment_counter_and_flag((void *)param_3);
      param_3 = param_3 + 1;
      sVar1 = sVar1 + -1;
    } while (sVar1 != 0);
    FUN_000e16d8();
  }
  return DAT_0003c122;
}
