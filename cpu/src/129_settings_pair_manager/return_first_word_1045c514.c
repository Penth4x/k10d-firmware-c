/* @k10d return_first_word_1045c514 @ 0x1045c514
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Returns the first 32-bit word of the memory block pointed to by param_1.
 * summary:
 *   The function dereferences the pointer in param_1 and returns the value stored at that
 *   address. It has no callees and performs no side effects. The specific role of the data
 *   being accessed is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t return_first_word_1045c514(uint32_t *param_1)

{
  return *param_1;
}
