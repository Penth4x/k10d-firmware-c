/* @k10d update_state_flags_and_status_byte @ 0x000ddf86
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * purpose:
 *   Updates a global flag word and a status byte based on input parameters and other global
 *   conditions.
 * summary:
 *   The function modifies the global flag word at DAT_0003c804 by setting or clearing bits
 *   0, 3, and 4 depending on the state of other globals like DAT_0003c8c8 and DAT_0003f5d4.
 *   It calculates a value for DAT_0003c800 (a status byte) using logic involving
 *   DAT_0003f55e, DAT_0003c394, and DAT_0003c07e, and calls several subroutines
 *   (clear_state_block, dispatch_state_machine_000de49c, etc.) to propagate these state
 *   changes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_state_flags_and_status_byte(int param_1)

{
  uint uVar1;
  
  if ((DAT_0003c804 & 0x10) == 0) {
    _DAT_0003c884 = _DAT_0003f54c;
    DAT_0003c804 = DAT_0003c804 | 0x10;
  }
  else {
    _DAT_0003c884 = unsigned_divide(param_1 + 500,1000);
  }
  increment_capped_counter();
  toggle_bit6_based_on_counter();
  if ((DAT_0003c804 & 8) == 0) {
    _DAT_0003c884 = 1;
    DAT_0003c804 = DAT_0003c804 | 8;
    DAT_0003f5d4 = '\0';
    clear_state_block();
    clear_six_word_globals_000dbb52();
    clear_tenth_global_words();
    DAT_0003c800 = 0;
    DAT_0003c801 = 0;
    DAT_0003c804 = DAT_0003c804 & 0xfb;
    _DAT_0003c806 = 0;
  }
  if (DAT_0003c8c8 == '\x01') {
    if (DAT_0003f5d4 == '\0') {
      DAT_0003c804 = DAT_0003c804 | 1;
      DAT_0003c80e = 0;
      DAT_0003f5d4 = '\x01';
      clear_state_block();
      clear_six_word_globals_000dbb52();
      clear_tenth_global_words();
      DAT_0003c800 = 0;
      dispatch_state_machine_000de49c();
    }
    else {
      update_status_flags_and_counters_000de274(param_1);
    }
  }
  else {
    DAT_0003f5d4 = '\0';
    toggle_bit0_from_bit1();
    if ((((DAT_0003c030 & 1) == 0) || (DAT_0003c8c8 == '\x02')) || ((DAT_0003c330 & 0x40) != 0)) {
      uVar1 = (uint)_DAT_0003c806 + (uint)_DAT_0003c884;
      if (0xffff < uVar1) {
        uVar1 = 0xffff;
      }
      _DAT_0003c806 = (ushort)uVar1;
      if ((DAT_0003f55e & 0x10) == 0) {
        DAT_0003c800 = 2;
      }
      else if (((DAT_0003c394 & 1) == 0) && ((DAT_0003c07e & 0x40) == 0)) {
        DAT_0003c800 = 0x22;
      }
      else {
        DAT_0003c800 = 0x82;
      }
    }
    else {
      _DAT_0003c806 = 0;
      if ((DAT_0003f55e & 0x10) == 0) {
        DAT_0003c800 = 1;
      }
      else if (((DAT_0003c394 & 1) == 0) && ((DAT_0003c07e & 0x40) == 0)) {
        DAT_0003c800 = 0x21;
      }
      else {
        DAT_0003c800 = 0x81;
      }
    }
    if ((DAT_0003c804 & 0x20) == 0) {
      DAT_0003c800 = DAT_0003c800 & 0xfd | 1;
    }
    dispatch_state_machine_000de49c();
    if (((((DAT_0003ce01 & 1) == 0) && ((DAT_0003ce01 & 4) == 0)) && ((DAT_0003ce01 & 2) == 0)) &&
       ((DAT_00000001 & 2) != 0)) {
      update_range_overflow_flags();
    }
    DAT_0003f562 = DAT_0003ce88;
  }
  return;
}
