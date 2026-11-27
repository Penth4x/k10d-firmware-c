/* @k10d append_or_init_buffer @ 0x10438644
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Initializes a buffer structure if empty, then appends data to it via a helper function.
 * summary:
 *   Checks if the second element of the param_2 structure is zero. If so, it calls
 *   read_offset_four_104384ea to get an initial value, stores it in the first element, and
 *   calls copy_structured_record_10438596 with a pointer to the second element and a length
 *   of 0. If not empty, it calls copy_structured_record_10438596 with the structure pointer
 *   and the existing length. Returns the result of copy_structured_record_10438596 plus one
 *   if initialization occurred.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int append_or_init_buffer(int param_1,uint32_t *param_2)

{
  uint32_t uVar1;
  int iVar2;
  
  if (param_2[1] == 0) {
    uVar1 = read_offset_four_104384ea((uint32_t)param_1);
    *param_2 = uVar1;
    iVar2 = copy_structured_record_10438596(param_1,(int)(param_2 + 1),0);
    iVar2 = iVar2 + 1;
  }
  else {
    iVar2 = copy_structured_record_10438596(param_1,(int)param_2,param_2[1]);
  }
  return iVar2;
}
