/* @k10d call_helper_with_two_bytes_1045c840 @ 0x1045c840
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 130_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads two bytes from a pointer and passes them to a helper function, returning the
 *   helper's byte result.
 * summary:
 *   The function dereferences param_1 to get a 16-bit value and the next byte, then calls
 *   lookup_byte_from_table with the pointer and these two values. It returns the byte
 *   result from the callee. The specific role of the helper is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint call_helper_with_two_bytes_1045c840(uint16_t *param_1)

{
  byte bVar1;
  
  bVar1 = lookup_byte_from_table(param_1,(uint)(ushort)*param_1,(uint)*(byte *)(param_1 + 1));
  return (uint)bVar1;
}
