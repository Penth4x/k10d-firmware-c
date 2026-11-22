/* @k10d extract_field_from_status_word @ 0x1043d6a6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Extracts a 16-bit field from a status word using a mask and shift stored in a struct.
 * summary:
 *   Calls read_offset_0x110 to obtain a status or data word. Reads a 16-bit mask from
 *   offset 0x124 and a shift amount (masked to 5 bits) from offset 0x120 of the object
 *   pointed to by param_1. Returns the extracted 16-bit field. The specific subsystem is
 *   not identifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint extract_field_from_status_word(cls_105a0828 *param_1)

{
  uint uVar1;
  
  uVar1 = read_offset_0x110((int)(param_1)/* B-3: stock r4 = param_1 */);
  return (int)(uVar1 & (ushort)param_1->field_0x124) >> (param_1->field_0x120 & 0x1fU) & 0xffff;
}
