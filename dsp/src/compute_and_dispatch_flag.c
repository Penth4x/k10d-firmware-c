/* @k10d compute_and_dispatch_flag @ 0x000cd6de
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Computes a flag value based on several global state bits and passes it to a callee if
 *   non-zero.
 * summary:
 *   The function retrieves an initial value from check_and_update_flag_bits and modifies it
 *   based on the state of DAT_0003c330, DAT_0003c3c2, and DAT_0003c3b3. If specific bits in
 *   DAT_0003f283 and DAT_0003c12d are set, the value is forced to zero. If the final value
 *   is non-zero, it calls check_two_flag_bits_000ce7a6 (setting bit 7 of DAT_0003ce06 if
 *   that returns 0) and then calls update_status_flags_000ce11e with the computed value,
 *   returning the result of that call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t compute_and_dispatch_flag(void)

{
  uint uVar1;
  int iVar2;
  uint32_t uVar3;
  
  uVar1 = check_and_update_flag_bits();
  if (((DAT_0003c330 & 1) == 0) && ((DAT_0003c330 & 4) == 0)) {
    if (DAT_0003c3c2 == '\0') {
      uVar1 = uVar1 & ((_DAT_00000001 & 0xf) >> 3 | (uint)(DAT_0003c3b3 != '\0'));
    }
    else {
      uVar1 = (_DAT_00000001 & 0xf) >> 3 | (uint)(DAT_0003c3b3 != '\0');
    }
  }
  if (((DAT_0003f283 & 8) != 0) && ((DAT_0003c12d & 8) != 0)) {
    uVar1 = 0;
  }
  uVar3 = 0;
  if (uVar1 != 0) {
    iVar2 = check_two_flag_bits_000ce7a6();
    if (iVar2 == 0) {
      DAT_0003ce06 = DAT_0003ce06 | 0x80;
    }
    uVar3 = update_status_flags_000ce11e(uVar1);
  }
  return uVar3;
}
