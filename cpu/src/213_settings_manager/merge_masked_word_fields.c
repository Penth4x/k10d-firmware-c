/* @k10d merge_masked_word_fields @ 0x104acf56
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Writes a new value into a 32-bit word by clearing bits selected by a mask and ORing in
 *   new bits.
 * summary:
 *   The function reads the 32-bit value pointed to by *param_1, clears the bits where
 *   param_3 is set, and sets the bits where both param_2 and param_3 are set. It then
 *   writes the result back to the same location. The expression also ORs in param_1[2] and
 *   ANDs with param_1[3], which appear to be adjacent fields in the same structure, though
 *   their specific roles are not clear from this snippet alone. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void merge_masked_word_fields(uint32_t *param_1,uint param_2,uint param_3)

{
  *(uint *)*param_1 =
       (*(uint *)*param_1 & param_1[3] | param_1[2]) & (param_3 ^ 0xffffffff) | param_2 & param_3;
  return;
}
