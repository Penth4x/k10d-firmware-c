/* @k10d call_helper_if_flag_set_1043ee1a @ 0x1043ee1a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes a helper function when a specific field in the passed structure is non-zero.
 * summary:
 *   The function checks if the integer at offset 0x10 of the object pointed to by param_1
 *   is non-zero. If the condition is met, it calls set_bit_in_mmio_register. Otherwise, it
 *   returns immediately without performing any action.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_if_flag_set_1043ee1a(int param_1, uint32_t param_2)
{
  if (*(int *)(param_1 + 0x10) != 0) {
    set_bit_in_mmio_register((uint32_t)param_1, (uint32_t)param_2);
  }
  return;
}
