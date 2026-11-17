/* @k10d read_first_word_10433098 @ 0x10433098
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 118_event_context_manager (unit names are model-proposed)
 * purpose:
 *   Returns the first 32-bit word from the memory location pointed to by param_1.
 * summary:
 *   The function dereferences the pointer passed in param_1 and returns the value stored at
 *   that address. It has no callees and performs no side effects. It is called by multiple
 *   functions in the 0x1043xxxx range, likely as a simple accessor for a data structure or
 *   queue head.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_first_word_10433098(uint32_t *param_1)

{
  return *param_1;
}
