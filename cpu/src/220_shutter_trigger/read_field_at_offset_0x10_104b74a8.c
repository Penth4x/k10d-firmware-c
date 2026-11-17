/* @k10d read_field_at_offset_0x10_104b74a8 @ 0x104b74a8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 220_shutter_trigger (unit names are model-proposed)
 * purpose:
 *   Reads a 32-bit value from a structure field at offset 0x10 via a helper.
 * summary:
 *   Takes a pointer in param_1, adds 0x10 to it, and passes the resulting address to
 *   add_eight_to_param. Returns the value produced by that callee. The callee's role is
 *   unknown, so the specific data being accessed cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_field_at_offset_0x10_104b74a8(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = add_eight_to_param(param_1 + 0x10);
  return uVar1;
}
