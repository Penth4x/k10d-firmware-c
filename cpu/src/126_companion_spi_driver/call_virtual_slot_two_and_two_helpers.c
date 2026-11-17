/* @k10d call_virtual_slot_two_and_two_helpers @ 0x1043fc1e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 2 on an object field, then calls two unnamed helpers with the same
 *   object pointer.
 * summary:
 *   The function takes an object pointer in param_1, reads the vtable entry at offset 8
 *   (virtual slot 2) via dispatch_single_subobj and stores the result. It then calls
 *   serdev_clear_ready and clear_high_bit_at_offset_0x1c, both passing the original object
 *   pointer. The return value is the result of the virtual call. Without names for the two
 *   helper functions, the specific subsystem role cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_virtual_slot_two_and_two_helpers(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = dispatch_single_subobj(param_1 + 8);
  serdev_clear_ready(param_1);
  clear_high_bit_at_offset_0x1c(param_1);
  return uVar1;
}
