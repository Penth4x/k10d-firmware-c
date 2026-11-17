/* @k10d call_helper_with_byte_and_ptr_104675b8 @ 0x104675b8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 146_firmware_update (unit names are model-proposed)
 * purpose:
 *   Calls test_bit_in_offset_array with param_1, a low byte from DAT_105a7f68, and
 *   DAT_105a7f6c, returning the result.
 * summary:
 *   This is a thin wrapper that forwards its single argument plus two globals (a masked
 *   byte and a pointer) to test_bit_in_offset_array and returns that callee's return value.
 *   The module is firmware_update, but the callee's role is unknown, so no camera-specific
 *   term is applied.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t call_helper_with_byte_and_ptr_104675b8(uint32_t param_1)

{
  uint32_t uVar1;
  
  uVar1 = test_bit_in_offset_array(param_1,_DAT_105a7f68/*ROM*/ & 0xff,DAT_105a7f6c/*ROM*/);
  return uVar1;
}
