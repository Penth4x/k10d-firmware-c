/* @k10d dispatch_two_value_update @ 0x1051a570
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Writes two values from a sub-structure into param_2 via a 16-bit or 32-bit setter based
 *   on a type tag.
 * summary:
 *   Reads a 16-bit tag at param_2+2. If the tag is 3, it calls write_word_to_dynamic_array
 *   twice with 16-bit values loaded from offsets 8 and 0xc of the structure pointed to by
 *   *(param_1+0x5c). If the tag is 4, it calls write_to_dynamic_array twice with 32-bit
 *   values from the same offsets. The function acts as a type-dispatching wrapper for
 *   updating two fields in param_2.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_two_value_update(int param_1,int param_2)

{
  if (*(short *)(param_2 + 2) == 3) {
    write_word_to_dynamic_array(param_2,0,(short)*(uint32_t *)(*(int *)(param_1 + 0x5c) + 8));
    write_word_to_dynamic_array(param_2,1,(short)*(uint32_t *)(*(int *)(param_1 + 0x5c) + 0xc));
  }
  else if (*(short *)(param_2 + 2) == 4) {
    write_to_dynamic_array(param_2,0,*(uint32_t *)(*(int *)(param_1 + 0x5c) + 8));
    write_to_dynamic_array(param_2,1,*(uint32_t *)(*(int *)(param_1 + 0x5c) + 0xc));
  }
  return;
}
