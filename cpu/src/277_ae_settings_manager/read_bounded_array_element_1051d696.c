/* @k10d read_bounded_array_element_1051d696 @ 0x1051d696
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns the 4-byte element at index param_2 of the array pointed to by param_1, or 0 if
 *   the index is out of bounds.
 * summary:
 *   The function performs a bounds check on param_2 against the constant 0x1a (26). If the
 *   index is valid, it calculates the byte offset (param_2 * 4) and reads the 32-bit value
 *   from the memory location param_1 + offset. If the index is invalid, it returns 0. There
 *   are no callees, and the specific data structure or subsystem is not identifiable from
 *   the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_bounded_array_element_1051d696(void *param_1,int param_2)

{
  uint32_t uVar1;
  
  if (param_2 < 0x1a) {
    uVar1 = *(uint32_t *)((int)param_1 + param_2 * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
