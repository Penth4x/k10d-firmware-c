/* @k10d dispatch_state_machine_step @ 0x000cd772
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Evaluates a multi-bit state flag and branches to one of four handler functions based on
 *   the current state.
 * summary:
 *   The function checks bit 7 of DAT_0003ce00 and, if clear, calls
 *   compute_and_dispatch_flag. Depending on the return value and other bits in
 *   DAT_0003ce00, DAT_0003c128, and DAT_0003f281, it either clears/sets state bits and
 *   calls check_flag_and_clear_bit or FUN_000cd7fe, or calls decrement_if_positive. It
 *   returns 0 in most paths, indicating a successful state transition or no action
 *   required.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int dispatch_state_machine_step(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  if ((DAT_0003ce00 & 0x80) == 0) {
    iVar1 = compute_and_dispatch_flag();
    if (iVar1 == 0) {
      param_1 = 0;
      if ((DAT_0003ce00 & 0x20) != 0) {
        DAT_0003ce00 = DAT_0003ce00 & 0xdf;
        param_1 = check_flag_and_clear_bit(0xffffffff);
      }
      if (param_1 == 0) {
        FUN_000cd7fe();
      }
    }
    else if (((DAT_0003ce00 & 0x40) == 0) || ((DAT_0003ce00 & 0x20) != 0)) {
      param_1 = 0;
      if (((DAT_0003c128 & 0x80) != 0) && ((DAT_0003f281 & 1) != 0)) {
        if ((DAT_0003c12f & 0x80) == 0) {
          uVar2 = 0;
          if ((((DAT_0003ce07 & 0x10) != 0) && ((DAT_0003f281 & 2) != 0)) &&
             ((DAT_0003ce01 & 1) == 0)) {
            uVar2 = 1;
          }
          param_1 = check_flag_and_clear_bit(uVar2);
        }
        else {
          DAT_0003ce00 = DAT_0003ce00 | 0x20;
          DAT_0003ce07 = DAT_0003ce07 | 0x10;
          FUN_000cd7fe();
        }
      }
    }
    else {
      iVar1 = decrement_if_positive();
      if (-1 < iVar1) {
        param_1 = 0;
      }
    }
  }
  return param_1;
}
