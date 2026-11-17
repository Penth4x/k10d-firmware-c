/* @k10d append_or_init_buffer_entry @ 0x10438478
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Initializes a two-word structure if empty, then calls a helper to process param_1
 *   against it.
 * summary:
 *   Checks if the second word of the structure pointed to by param_2 is zero. If so, it
 *   calls read_offset_four_10438328 to get a value for the first word and calls
 *   copy_structured_record_array with the second word's address and 0. Otherwise, it calls
 *   copy_structured_record_array with the structure address and the existing second word
 *   value. Returns the result of copy_structured_record_array plus one if initialized,
 *   otherwise the raw result.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int append_or_init_buffer_entry(int param_1,uint32_t *param_2)

{
  uint32_t uVar1;
  int iVar2;
  
  if (param_2[1] == 0) {
    uVar1 = read_offset_four_10438328(__frv_reg_unset(4));
    *param_2 = uVar1;
    iVar2 = copy_structured_record_array(param_1,(int)(param_2 + 1),0);
    iVar2 = iVar2 + 1;
  }
  else {
    iVar2 = copy_structured_record_array(param_1,(int)param_2,param_2[1]);
  }
  return iVar2;
}
