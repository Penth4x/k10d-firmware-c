/* @k10d dereference_first_pointer_1045ba02 @ 0x1045ba02
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Replaces the first word of the pointed-to structure with the value at the address
 *   stored in that word.
 * summary:
 *   The function takes a pointer to a pointer (param_1), dereferences the first word to get
 *   an address, reads the value at that address, and writes it back into the first word of
 *   the structure. It then returns the original pointer. This is a classic indirect pointer
 *   dereference or 'chase' operation, often used to resolve a level of indirection in a
 *   data structure. No other side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * dereference_first_pointer_1045ba02(uint32_t *param_1)

{
  *param_1 = *(uint32_t *)*param_1;
  return param_1;
}
