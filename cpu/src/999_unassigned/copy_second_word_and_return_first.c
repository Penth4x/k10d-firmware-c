/* @k10d copy_second_word_and_return_first @ 0x104de4e6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Copies the second word of param_1 into param_2 and returns the first word of param_1.
 * summary:
 *   A two-word accessor: writes param_1[1] to *param_2 and returns *param_1 in r4. No
 *   callees, no side effects beyond the single store. The role of the two words is not
 *   determinable from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t copy_second_word_and_return_first(uint32_t *param_1,uint32_t *param_2)

{
  *param_2 = param_1[1];
  return *param_1;
}
