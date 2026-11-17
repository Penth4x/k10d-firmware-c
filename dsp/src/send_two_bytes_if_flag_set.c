/* @k10d send_two_bytes_if_flag_set @ 0x000e2094
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * purpose:
 *   Conditionally transmits two bytes (from param_2 and param_3) via FUN_000e2196 when
 *   DAT_0003c127 bit 7 is set.
 * summary:
 *   Checks bit 7 of DAT_0003c127; if set, calls empty_stub_000e2100 and
 *   FUN_000e2102(param_1), then loops up to twice sending the low byte of param_2 and the
 *   first byte of param_3 through FUN_000e2196, breaking early if DAT_0003c122 becomes non-
 *   zero. Finally calls FUN_000e16d8 and returns DAT_0003c122. The role of the DAT globals
 *   and callees is not independently verified.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

char send_two_bytes_if_flag_set(uint8_t param_1,uint param_2,uint8_t *param_3)

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
      FUN_000e2196(*param_3);
      param_3 = param_3 + 1;
      sVar1 = sVar1 + -1;
    } while (sVar1 != 0);
    FUN_000e16d8();
  }
  return DAT_0003c122;
}
