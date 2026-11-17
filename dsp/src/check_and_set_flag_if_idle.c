/* @k10d check_and_set_flag_if_idle @ 0x000e656c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Checks two status bits and a sub-function result, then sets bit 2 of a global flag if
 *   all conditions pass.
 * summary:
 *   The function first verifies that bit 0 of DAT_0003c02f is clear and bit 7 of
 *   DAT_0003c018 is clear. It then calls check_bit7_of_dat_0003c003 and proceeds only if
 *   that returns 0. If successful, it calls four other functions
 *   (clear_flag_bits_in_globals_000e5f86, call_five_unnamed_functions,
 *   wait_for_status_flag, call_single_helper) and sets bit 2 (value 4) of DAT_0003c1eb. It
 *   returns 4 on success, 0 otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_and_set_flag_if_idle(void)

{
  int iVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  if ((((DAT_0003c02f & 1) == 0) && ((DAT_0003c018 & 0x80) == 0)) &&
     (iVar1 = check_bit7_of_dat_0003c003(), iVar1 == 0)) {
    clear_flag_bits_in_globals_000e5f86();
    call_five_unnamed_functions();
    DAT_0003c1eb = DAT_0003c1eb | 4;
    wait_for_status_flag();
    call_single_helper();
    uVar2 = 4;
  }
  return uVar2;
}
