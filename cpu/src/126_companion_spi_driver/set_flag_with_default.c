/* @k10d set_flag_with_default @ 0x1043c662
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls update_status_word_bits_1043c816 with a flag value of 0x10 or 0 based on param_2.
 * summary:
 *   The function selects a 16-bit value (0x10 if param_2 is non-zero, 0 otherwise) and
 *   passes it as the second argument to update_status_word_bits_1043c816 along with param_1
 *   and a constant third argument of 0x10. It acts as a simple wrapper or setter for the
 *   callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_with_default(void *param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = 0x10;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  update_status_word_bits_1043c816(param_1,uVar1,0x10);
  return;
}
