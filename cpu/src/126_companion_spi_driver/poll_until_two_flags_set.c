/* @k10d poll_until_two_flags_set @ 0x10448880
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Polls two status checks on an object until both return true, with a retry limit.
 * summary:
 *   The function loops, calling check_bit1_of_nested_ptr and
 *   check_flag_bit_in_nested_struct on the object at offset 0x110. It exits successfully
 *   (return 1) when both checks return true. If either check fails, it calls layout_pump
 *   (likely a wait/yield) and increments a counter. If the counter exceeds 69999, it
 *   returns 0 indicating timeout. The specific subsystem is not identifiable from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t poll_until_two_flags_set(void *param_1)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = 0;
  while ((bVar1 = check_bit1_of_nested_ptr(*(void **)((int)param_1 + 0x110)), !bVar1 ||
         (bVar1 = check_flag_bit_in_nested_struct(*(void **)((int)param_1 + 0x110)), !bVar1))) {
    layout_pump(param_1);
    uVar2 = uVar2 + 1;
    if (69999 < uVar2) {
      return 0;
    }
  }
  return 1;
}
