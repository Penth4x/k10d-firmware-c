/* @k10d subtract_and_write_offset @ 0x1045c11c
 * name: model (proposed by the local model from the decompile, confidence 0.80)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Subtracts a value derived from param_1 from param_2 and passes the result to a helper.
 * summary:
 *   The function calls read_first_word_1045bd4c with param_1 to obtain an integer value. It
 *   then calls store_value_to_pointer_1045c510 with param_1 + 2 and the difference between
 *   param_2 and the result of the first call. The specific roles of the callees and the
 *   data structures are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void subtract_and_write_offset(uint32_t *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = read_first_word_1045bd4c(param_1);
  store_value_to_pointer_1045c510(param_1 + 2,param_2 - iVar1);
  return;
}
