/* @k10d toggle_ram_flag_and_call_sequence @ 0x000e9d6c
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * purpose:
 *   Sets bit 7 of bRam00000000, calls FUN_000e9c7a three times with DAT_0003c217=8, then
 *   clears bit 7.
 * summary:
 *   The function sets bit 7 of the global bRam00000000, calls wait_if_flag_is_two, sets
 *   DAT_0003c217 to 8, then calls FUN_000e9c7a three times (copying DAT_0003c217 to
 *   DAT_0003c21f and DAT_0003c21e between calls). It finishes by clearing bit 7 of
 *   bRam00000000 and calling wait_if_flag_is_two again. The callees wait_if_flag_is_two and
 *   FUN_000e9c7a have no verified names, so the higher-level purpose is not determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_ram_flag_and_call_sequence(void)

{
  bRam00000000 = bRam00000000 | 0x80;
  wait_if_flag_is_two();
  DAT_0003c217 = 8;
  FUN_000e9c7a();
  FUN_000e9c7a();
  DAT_0003c21f = DAT_0003c217;
  FUN_000e9c7a();
  DAT_0003c21e = DAT_0003c217;
  wait_if_flag_is_two();
  bRam00000000 = bRam00000000 & 0x7f;
  wait_if_flag_is_two();
  return;
}
