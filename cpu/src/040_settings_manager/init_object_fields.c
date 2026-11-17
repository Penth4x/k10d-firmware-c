/* @k10d init_object_fields @ 0x10397842
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Resets and sets several 16-bit and 8-bit fields at fixed offsets within a caller-
 *   provided object.
 * summary:
 *   The function writes zero to offsets 0x64 and 0x66, sets 0x68, 0x6a, and 0x6c to 1, and
 *   clears the byte at 0x6e. It is called by a verified constructor for a 0x70-byte class,
 *   indicating it performs part of the object's field initialization. No callees are
 *   present, and the specific meaning of these fields cannot be determined from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_fields(void *param_1)

{
  *(uint16_t *)((int)param_1 + 100) = 0;
  *(uint16_t *)((int)param_1 + 0x66) = 0;
  *(uint16_t *)((int)param_1 + 0x68) = 1;
  *(uint16_t *)((int)param_1 + 0x6a) = 1;
  *(uint16_t *)((int)param_1 + 0x6c) = 1;
  *(uint8_t *)((int)param_1 + 0x6e) = 0;
  return;
}
