/* @k10d kernel_sched_setup @ 0x1000e59c
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed initialize_kernel_dispatch_state)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Sets a global flag and initializes a memory region by writing zeros to a calculated
 *   number of slots.
 * summary:
 *   The function sets DAT_6a003aa8 to 1, then calls set_byte_at_offset_0x2f and
 *   clear_kernel_flag. It calculates a count based on DAT_10011d4a and uses
 *   store_word_to_pointer_1000d41a to write zeros to memory starting at 0x6a003778,
 *   effectively clearing a queue or buffer structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void kernel_sched_setup(void)

{
  int iVar1;
  int iVar2;
  
  DAT_6a003aa8 = 1;
  set_byte_at_offset_0x2f();
  clear_kernel_flag();
  iVar1 = (DAT_10011d4a/*ROM*/ + 1) * 8 + 3;
  iVar1 = (int)(((uint)(iVar1 >> 1) >> 0x1e) + iVar1) >> 2;
  if (-1 < iVar1) {
    iVar1 = iVar1 + -2;
    iVar2 = 0;
    if (2 < iVar1) {
      do {
        store_word_to_pointer_1000d41a((uint32_t *)(iVar2 + 0x6a003778),0);
        store_word_to_pointer_1000d41a((uint32_t *)(iVar2 + 0x6a00377c),0);
        store_word_to_pointer_1000d41a((uint32_t *)(iVar2 + 0x6a003780),0);
        iVar1 = iVar1 + -3;
        iVar2 = iVar2 + 0xc;
      } while (-1 < iVar1);
    }
    for (iVar1 = iVar1 + 2; -1 < iVar1; iVar1 = iVar1 + -1) {
      store_word_to_pointer_1000d41a((uint32_t *)(iVar2 + 0x6a003778),0);
      iVar2 = iVar2 + 4;
    }
  }
  return;
}
