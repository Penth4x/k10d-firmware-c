/* @k10d kernel_cyclic_tick_isr @ 0x1000e55c
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed broadcast_kernel_event_and_wait)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Iterates over a table of function pointers to broadcast a kernel event, then enters an
 *   infinite loop.
 * summary:
 *   The function checks a count in DAT_10011d18 and, if non-zero, loops through an array of
 *   pointers at PTR_DAT_10011cb8. For each entry, it calls a function pointer with
 *   arguments (4, 0, 0, value_at_ptr+4). After the loop, it executes an infinite do-while
 *   loop, effectively halting the current execution context. The prior notes suggest this
 *   is a kernel ISR or event handler, but the infinite loop at the end is characteristic of
 *   a system halt or a specific wait state rather than a standard interrupt return.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void kernel_cyclic_tick_isr(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_10011d18/*ROM*/) {
    iVar1 = 0;
    do {
      (((vtbl_entry*)((char*)PTR_DAT_10011cb8 + iVar1))[1].fn)(4,0,0,*(uint32_t *)((char*)PTR_DAT_10011cb8 + 4));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0xc;
    } while (iVar2 < DAT_10011d18/*ROM*/);
  }
  __halt();
}
