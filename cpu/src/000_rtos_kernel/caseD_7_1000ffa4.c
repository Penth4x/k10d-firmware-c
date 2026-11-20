/* @k10d caseD_7_1000ffa4 @ 0x1000ffa4
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed check_task_state_bit)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Reads a 16-bit field from a table indexed by param_1 and returns 1 if the value is 2 or
 *   has bit 0 set, else 0.
 * summary:
 *   The function accesses a table at DAT_10011d04 with an offset of param_1 * 0xe - 6. It
 *   checks if the 16-bit value is exactly 2 or if its least significant bit is set. This
 *   pattern is consistent with checking a status or state flag in a kernel data structure,
 *   such as a task control block or ready-list entry, given the module context. No callees
 *   are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t switchD_1000ff64__caseD_7(short param_1)

{
  ushort uVar1;
  uint32_t uVar2;
  
  uVar1 = *(ushort *)(DAT_10011d04/*ROM*/ + param_1 * 0xe + -6);
  if (uVar1 == 2) {
    uVar2 = 1;
  }
  else {
    uVar2 = 1;
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
    }
  }
  return uVar2;
}
