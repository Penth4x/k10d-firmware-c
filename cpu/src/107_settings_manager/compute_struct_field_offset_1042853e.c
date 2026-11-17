/* @k10d compute_struct_field_offset_1042853e @ 0x1042853e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 107_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns the byte offset of an array element within a structure given a base pointer and
 *   index.
 * summary:
 *   The function performs a simple arithmetic calculation: it adds the product of param_2
 *   and 8 to the value of param_1, then adds a constant offset of 0x38. This pattern is
 *   typical for calculating the address of an element in an array of 8-byte structures
 *   located at offset 0x38 within a larger object. No memory is accessed or modified, and
 *   no other functions are called.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compute_struct_field_offset_1042853e(void *param_1,int param_2)

{
  return (int)param_1 + param_2 * 8 + 0x38;
}
