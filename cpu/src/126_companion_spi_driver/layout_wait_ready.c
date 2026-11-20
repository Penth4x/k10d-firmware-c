/* @k10d layout_wait_ready @ 0x10447b60
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed wait_for_pointer_flag_then_ack)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Busy-waits until layout_ready_chk returns true for the object at offset 0x110, then
 *   calls layout_ready_chk2 on it.
 * summary:
 *   Reads a pointer from param_1+0x110 and polls layout_ready_chk on that pointer in a
 *   tight loop until it returns non-zero. Once the condition is met, it invokes
 *   layout_ready_chk2 on the same pointer. The specific meaning of the flag and the ack
 *   action is unknown because the callees are unnamed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void layout_wait_ready(cls_105a1a84 *param_1)

{
  bool bVar1;
  
  bVar1 = layout_ready_chk((char*)(param_1) ->field_0x110);
  while (!bVar1) {
    bVar1 = layout_ready_chk((char*)(param_1) ->field_0x110);
  }
  layout_ready_chk2((char*)(param_1) ->field_0x110);
  return;
}
