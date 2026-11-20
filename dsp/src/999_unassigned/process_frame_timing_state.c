/* @k10d process_frame_timing_state @ 0x000e719a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Updates timing counters and state flags based on a 32000-unit cycle and calls various
 *   subsystem handlers.
 * summary:
 *   The function manipulates several global state flags (DAT_0003c07f, DAT_0003c067,
 *   DAT_0003c1ec) and a counter (_DAT_0003c262) relative to a global value (_DAT_000000d8)
 *   with a 32000 wrap-around. It conditionally executes a loop of 97 iterations calling
 *   update_state_flags_and_status_byte and busy_wait_on_mode_flag, and branches to
 *   different handler functions (clear_bit1_of_dat_0003ce01, FUN_000d5ff0,
 *   run_state_machine_sequence) based on bit flags in DAT_0003c02f, DAT_0003c003, and
 *   DAT_0003ce01. It returns a status code (0, 1, or 2) determined by the results of
 *   update_state_flags_and_dispatch and run_gated_state_loop.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int process_frame_timing_state(void)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  
  iVar3 = 0;
  update_bit7_from_dat_0003c00f();
  clear_state_flags_and_notify();
  DAT_0003c07f = DAT_0003c07f & 0xbf;
  if (((DAT_0003c036 & 1) == 0) && (iVar1 = set_flag_and_call_helper_000db7a8(), iVar1 != 0)) {
    uVar2 = 0;
    do {
      iVar1 = _DAT_000000d8 - (uint)_DAT_0003c262;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 32000;
      }
      update_state_flags_and_status_byte(iVar1 << 2);
      _DAT_0003c262 = (ushort)_DAT_000000d8;
      busy_wait_on_mode_flag(0x3ac);
      DAT_0003c07f = DAT_0003c07f | 0x40;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x61);
  }
  if ((DAT_0003ce01 & 1) != 0) {
    clear_bit1_of_dat_0003ce01();
  }
  set_flag_and_call_helper_000d014c();
  if ((DAT_0003c02f & 1) == 0) {
    DAT_0003c067 = DAT_0003c067 | 0x40;
    if ((DAT_0003c003 & 0x10) == 0) {
      DAT_0003c1ec = DAT_0003c1ec & 0xf7;
    }
    else {
      DAT_0003c1ec = DAT_0003c1ec | 8;
      iVar1 = _DAT_000000d8 - (uint)_DAT_0003c262;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 32000;
      }
      if ((DAT_0003c07f & 0x40) == 0) {
        _DAT_0003c262 = (short)iVar1 * 4 + 0xa0;
      }
      else {
        _DAT_0003c262 = (ushort)(iVar1 << 2);
      }
    }
    iVar1 = update_state_flags_and_dispatch();
    if (iVar1 == 1) {
      iVar3 = 2;
    }
    if ((DAT_0003ce01 & 2) != 0) {
      clear_bit1_of_dat_0003ce01();
    }
    DAT_0003c067 = DAT_0003c067 & 0xbf;
  }
  else {
    iVar3 = 2;
  }
  if (((DAT_0003c02f & 1) != 0) || ((DAT_0003c391 & 2) != 0)) {
    FUN_000d5ff0();
  }
  if (iVar3 == 0) {
    iVar3 = run_gated_state_loop();
    if (iVar3 == 0) {
      FUN_000e0842();
      check_two_flags_and_return_shifted_value();
      if ((DAT_0003c1ec & 8) == 0) {
        iVar3 = _DAT_000000d8 - (uint)_DAT_0003c262;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 32000;
        }
        _DAT_0003c262 = (short)iVar3 * 4 + 100;
      }
      DAT_0003c02b = DAT_0003c02b | 0x10;
      iVar3 = run_state_machine_sequence();
      DAT_0003c02b = DAT_0003c02b & 0xef;
      FUN_000e07d8();
    }
    else {
      iVar3 = 2;
    }
  }
  DAT_0003c1ec = DAT_0003c1ec & 0xf7;
  FUN_000cd8be();
  return iVar3;
}
