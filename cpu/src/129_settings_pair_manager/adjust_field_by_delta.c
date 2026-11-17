/* @k10d adjust_field_by_delta @ 0x1045c168
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Reads a value from an object, subtracts it from a parameter, and writes the result to
 *   an offset field.
 * summary:
 *   The function calls get_second_word_of_struct with param_1 to retrieve an integer value.
 *   It then calls write_field_at_offset_four_1045c518, passing a pointer to param_1 + 8 and
 *   the difference between param_2 and the retrieved value. This pattern suggests updating
 *   a field at offset 8 with a delta or corrected value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void adjust_field_by_delta(void *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = get_second_word_of_struct(param_1);
  write_field_at_offset_four_1045c518((void *)((int)param_1 + 8),param_2 - iVar1);
  return;
}
