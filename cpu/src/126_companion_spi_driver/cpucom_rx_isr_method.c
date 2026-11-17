/* @k10d cpucom_rx_isr_method @ 0x1043bd0e
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed dispatch_rx_handler_and_clear_status)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 2 on the object's sub-object at offset 8, then calls a status-
 *   clear routine on the object.
 * summary:
 *   The function takes an object pointer, calls dispatch_single_subobj (virtual slot 2 of
 *   cls_1059e408) with the sub-object at offset 8, and stores the return value. It then
 *   calls sci_clear_status with the original object pointer. The return value from the
 *   first call is returned to the caller. The prior notes suggest this is a CPUCOM RX ISR
 *   method, but the code itself only shows a virtual dispatch followed by a second call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t cpucom_rx_isr_method(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = dispatch_single_subobj(param_1 + 8);
  sci_clear_status(param_1);
  return uVar1;
}
