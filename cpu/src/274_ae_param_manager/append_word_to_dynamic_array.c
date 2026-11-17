/* @k10d append_word_to_dynamic_array @ 0x10516b48
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Appends a 16-bit value to a heap-allocated array tracked by a header struct.
 * summary:
 *   Checks that the struct pointer is non-null and the current count (at offset 0xc) is
 *   non-zero. If valid, writes param_2 to the array element at offset 0x10 plus twice the
 *   current count, then increments the count. The struct layout suggests a dynamic array
 *   with a header containing a type/flag byte, a size or capacity field, and a current
 *   element count.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void append_word_to_dynamic_array(char *param_1,uint16_t param_2)

{
  if ((*param_1 != '\0') && (*(int *)(param_1 + 4) != 0)) {
    *(uint16_t *)(param_1 + *(int *)(param_1 + 0xc) * 2 + 0x10) = param_2;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
  return;
}
