/* @k10d read_nested_pointer_field @ 0x104e1f06
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Dereferences a pointer chain to return a 32-bit value at offset 4 of a nested
 *   structure.
 * summary:
 *   The function takes a base pointer (param_1) and an index (param_2). It reads a pointer
 *   from param_1+4, adds param_2*4 to it, dereferences that to get another pointer, and
 *   finally returns the 32-bit value at offset 4 of that final structure. No callees are
 *   present, and the specific data structures involved are not identifiable from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_nested_pointer_field(int param_1,int param_2)

{
  return *(uint32_t *)(*(int *)(*(int *)(param_1 + 4) + param_2 * 4) + 4);
}
