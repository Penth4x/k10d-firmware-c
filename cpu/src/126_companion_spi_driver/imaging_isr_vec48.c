/* @k10d imaging_isr_vec48 @ 0x1043d300
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed dispatch_two_event_ids_on_flag_bits)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Checks two bits in a global flag word and calls a helper with event IDs 0x3e or 0x3f
 *   when param_2 is 0x20.
 * summary:
 *   Reads global uRam6b000024. If param_2 equals 0x20, it tests bit 24 (0x1000000) and bit
 *   25 (0x2000000). For each set bit, it calls dispatch_event_to_matching_handlers_1043d3fa
 *   with param_1, the corresponding event ID (0x3e or 0x3f), and param_3, storing the
 *   return value in uVar2. Returns the last helper result or 0. The role of the global flag
 *   word and the helper is not determinable from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t imaging_isr_vec48(cls_105a07cc *param_1,int param_2,uint32_t param_3)

{
  uint uVar1;
  uint32_t uVar2;
  
  uVar1 = uRam6b000024;
  uVar2 = 0;
  if (param_2 == 0x20) {
    if ((uRam6b000024 & 0x1000000) != 0) {
      uVar2 = dispatch_event_to_matching_handlers_1043d3fa((int)param_1,0x3e,param_3);
    }
    if ((uVar1 & 0x2000000) != 0) {
      uVar2 = dispatch_event_to_matching_handlers_1043d3fa((int)param_1,0x3f,param_3);
    }
  }
  return uVar2;
}
