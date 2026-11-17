/* @k10d call_helper_with_zero_and_4096 @ 0x1043ed5e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper passing the input pointer, 0, and 0x1000.
 * summary:
 *   The function takes one pointer argument and immediately forwards it to
 *   update_flag_bits_in_word along with the constants 0 and 0x1000 (4096). It performs no
 *   other operations and returns void. The role of the callee is unknown, so the subsystem
 *   cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_zero_and_4096(void *param_1)

{
  update_flag_bits_in_word(param_1,0,0x1000);
  return;
}
