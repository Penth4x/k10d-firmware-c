/* @k10d dispatch_parameter_pair @ 0x1043844a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Routes a parameter pair to one of two handler functions based on the first field's
 *   value.
 * summary:
 *   Reads the first integer from the param_2 array. If it is zero, it calls
 *   write_two_bytes_at_offset_four_10438322 with the second field masked to 16 bits, then
 *   advances the pointer to the third field. Otherwise, it advances the pointer to the
 *   second field. Finally, it calls copy_structured_data_block with the original first
 *   field and the advanced pointer. The specific roles of the callees are unknown, so the
 *   exact subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_parameter_pair(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_2;
  if (iVar2 == 0) {
    write_two_bytes_at_offset_four_10438322(param_1,param_2[1] & 0xffff);
    piVar1 = param_2 + 2;
    iVar2 = *param_2;
  }
  else {
    piVar1 = param_2 + 1;
  }
  copy_structured_data_block(param_1,piVar1,iVar2);
  return;
}
