/* @k10d copy_two_fields_from_offset_0x17d @ 0x1044a47a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Reads two 32-bit values from param_1+0x17d via two helper calls and stores them at
 *   param_1+0x14 and param_1+0xec.
 * summary:
 *   The function takes a pointer param_1, calls compute_sensor_pixel_count and
 *   compute_scaled_lookup_value with the address param_1+0x17d, and writes the returned
 *   32-bit values into offsets 0x14 and 0xec of the same object. It always returns 1. The
 *   callees are unnamed, so the specific data being copied is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t copy_two_fields_from_offset_0x17d(void *param_1)

{
  uint32_t uVar1;
  
  uVar1 = compute_sensor_pixel_count((void *)((int)param_1 + 0x17d));
  *(uint32_t *)((int)param_1 + 0x14) = uVar1;
  uVar1 = compute_scaled_lookup_value((void *)((int)param_1 + 0x17d));
  *(uint32_t *)((int)param_1 + 0xec) = uVar1;
  return 1;
}
