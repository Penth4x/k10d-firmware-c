/* @k10d intc_init @ 0x10427fb4
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed initialize_interrupt_controller_registers)
 * unit: 107_settings_manager (unit names are model-proposed)
 * purpose:
 *   Writes initial priority and enable values to a contiguous block of 48 interrupt
 *   controller registers.
 * summary:
 *   The function performs a sequence of byte writes to memory addresses 0x440 through
 *   0x46e, setting specific values (0x1f, 0x1b, 0x13, 0x14, 0x18, 0x1a, 0x17) to each
 *   location. This pattern is consistent with initializing interrupt controller registers
 *   (ICRs) to set interrupt priorities and enable bits. No other functions are called, and
 *   the side effect is the modification of these 48 memory locations.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void intc_init(void)

{
  DAT_00000440 = 0x1f;
  DAT_00000441 = 0x1f;
  DAT_00000442 = 0x1f;
  DAT_00000443 = 0x1f;
  DAT_00000444 = 0x1f;
  DAT_00000445 = 0x1f;
  DAT_00000446 = 0x1f;
  DAT_00000447 = 0x1f;
  DAT_00000449 = 0x1b;
  DAT_0000044a = 0x1b;
  DAT_0000044b = 0x1f;
  DAT_0000044c = 0x1f;
  DAT_0000044d = 0x1f;
  DAT_0000044e = 0x13;
  DAT_0000044f = 0x13;
  DAT_00000450 = 0x13;
  DAT_00000451 = 0x1f;
  DAT_00000452 = 0x14;
  DAT_00000453 = 0x14;
  DAT_00000454 = 0x14;
  DAT_00000455 = 0x14;
  DAT_00000456 = 0x14;
  DAT_00000457 = 0x14;
  DAT_00000458 = 0x14;
  DAT_00000459 = 0x14;
  DAT_0000045a = 0x14;
  DAT_0000045b = 0x14;
  DAT_0000045c = 0x14;
  DAT_00000460 = 0x18;
  DAT_00000461 = 0x18;
  DAT_00000462 = 0x14;
  DAT_00000463 = 0x1f;
  DAT_00000464 = 0x1f;
  DAT_00000465 = 0x1f;
  DAT_00000466 = 0x1f;
  DAT_00000467 = 0x1f;
  DAT_00000468 = 0x1b;
  DAT_00000469 = 0x1f;
  DAT_0000046a = 0x1a;
  DAT_0000046b = 0x17;
  DAT_0000046c = 0x17;
  DAT_0000046d = 0x1a;
  DAT_0000046e = 0x1f;
  return;
}
