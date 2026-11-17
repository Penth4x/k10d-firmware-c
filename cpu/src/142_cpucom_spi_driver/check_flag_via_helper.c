/* @k10d check_flag_via_helper @ 0x1046613a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns the boolean result of calling test_flag_clear_if_active on the pointer stored
 *   at offset 0x14 of the given object.
 * summary:
 *   The function dereferences param_1 + 0x14 to obtain a pointer and passes it to the
 *   helper test_flag_clear_if_active. It returns the boolean result of that call as an
 *   unsigned integer. The specific role of the flag or object is not determinable from the
 *   pseudocode alone, though it resides in the cpucom_spi_driver module.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint check_flag_via_helper(int param_1)

{
  bool bVar1;
  
  bVar1 = test_flag_clear_if_active(*(void **)(param_1 + 0x14));
  return (uint)bVar1;
}
