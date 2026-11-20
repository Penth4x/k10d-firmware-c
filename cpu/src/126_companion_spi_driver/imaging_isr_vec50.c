/* @k10d imaging_isr_vec50 @ 0x1043e8b8
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed check_three_mmio_status_flags)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Checks three MMIO status words and calls a helper with distinct IDs if specific bits
 *   are set.
 * summary:
 *   The function first checks if param_2 equals 0x22. It then computes a value from
 *   DAT_6b00000c and uRam6b00002c. It checks bits 24, 25, and 26 of this computed value.
 *   For each bit that is set, it verifies that the corresponding MMIO register at
 *   0x5c004000, 0x5c004020, or 0x5c004040 has bits 12 and 13 set (0x1800). If the condition
 *   is met, it calls dispatch_event_to_registered_handlers with param_1 and a unique ID
 *   (0x41, 0x42, or 0x43). The return value is the result of the last helper call or 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t imaging_isr_vec50(cls_105a0978 *param_1,int param_2)

{
  uint32_t uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if (param_2 == 0x22) {
    uVar2 = (_DAT_6b00000c ^ 0xffffffff) & uRam6b00002c;
    if (((uVar2 & 0x1000000) != 0) && ((uRam5c004000 & 0x1800) == 0x1800)) {
      uVar1 = dispatch_event_to_registered_handlers((int)param_1,0x41,0);
    }
    if (((uVar2 & 0x2000000) != 0) && ((uRam5c004020 & 0x1800) == 0x1800)) {
      uVar1 = dispatch_event_to_registered_handlers((int)param_1,0x42,0);
    }
    if (((uVar2 & 0x4000000) != 0) && ((uRam5c004040 & 0x1800) == 0x1800)) {
      uVar1 = dispatch_event_to_registered_handlers((int)param_1,0x43,0);
    }
  }
  return uVar1;
}
