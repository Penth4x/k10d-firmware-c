/* @k10d set_two_byte_state_flag @ 0x1043c6e8
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Converts a boolean parameter into a 0 or 2 value and passes it to a helper function.
 * summary:
 *   The function takes a pointer and an integer flag. It maps the integer to 0 if it is
 *   zero, otherwise to 2. It then calls update_status_word_bits_1043c816 with the pointer,
 *   the mapped value, and the constant 2. The specific role of the state or the helper
 *   function is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_two_byte_state_flag(void *param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = 2;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  update_status_word_bits_1043c816(param_1,uVar1,2);
  return;
}
