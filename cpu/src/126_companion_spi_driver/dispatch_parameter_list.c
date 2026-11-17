/* @k10d dispatch_parameter_list @ 0x10438616
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Routes a parameter list to one of two handler functions based on the first element's
 *   value.
 * summary:
 *   Reads the first word of the list pointed to by param_2. If it is zero, it calls
 *   write_two_bytes_at_offset_four_104384e4 with the second word (masked to 16 bits) and
 *   then passes the pointer advanced by two words to copy_structured_array. If the first
 *   word is non-zero, it passes the pointer advanced by one word to copy_structured_array.
 *   The function acts as a simple dispatcher or parser for a variable-length data
 *   structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_parameter_list(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_2;
  if (iVar2 == 0) {
    write_two_bytes_at_offset_four_104384e4(param_1,param_2[1] & 0xffff);
    piVar1 = param_2 + 2;
    iVar2 = *param_2;
  }
  else {
    piVar1 = param_2 + 1;
  }
  copy_structured_array(param_1,piVar1,iVar2);
  return;
}
