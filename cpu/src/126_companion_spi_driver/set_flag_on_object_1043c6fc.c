/* @k10d set_flag_on_object_1043c6fc @ 0x1043c6fc
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Converts a boolean parameter to 0/1 and passes it to a callee with a fixed third
 *   argument.
 * summary:
 *   The function takes an object pointer and an integer, converts the integer to a boolean
 *   (1 if non-zero, else 0), and calls update_status_word_bits_1043c816 with the object,
 *   the boolean, and the constant 1. The specific role of the flag or the object is not
 *   determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_on_object_1043c6fc(void *param_1,int param_2)

{
  update_status_word_bits_1043c816(param_1,(ushort)(param_2 != 0),1);
  return;
}
