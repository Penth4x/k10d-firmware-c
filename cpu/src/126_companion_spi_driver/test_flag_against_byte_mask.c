/* @k10d test_flag_against_byte_mask @ 0x1043d73c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns true if a bit from an unknown status byte is set in a byte at offset 0x126 of
 *   param_1.
 * summary:
 *   Calls read_byte_at_offset_0x114 to obtain a byte value, then bitwise-ANDs it with the
 *   byte located at param_1 + 0x126. Returns a boolean indicating whether any common bits
 *   are set. The specific meaning of the status byte and the struct field at 0x126 is not
 *   determinable from the provided pseudocode and unknown callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool test_flag_against_byte_mask(cls_105a0828 *param_1)

{
  byte bVar1;
  
  bVar1 = read_byte_at_offset_0x114((uint32_t)param_1);
  return (bVar1 & param_1->field_0x126) != 0;
}
