/* @k10d set_flag_pair_from_ram @ 0x10367e66
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 009_mode_settings_manager (unit names are model-proposed)
 * purpose:
 *   Writes a 2-byte and 1-byte value into a struct based on a 3-state selector at offset
 *   0x9c.
 * summary:
 *   Checks the integer at param_1 + 0x9c. If it is 0, it copies uRam80015f0c and
 *   uRam80015f0e into offsets 0xa0 and 0xa2. If it is 1, it zeroes those same offsets. No
 *   other branches or side effects are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_pair_from_ram(void *param_1)

{
  if (*(int *)((int)param_1 + 0x9c) == 0) {
    *(uint16_t *)((int)param_1 + 0xa0) = uRam80015f0c;
    *(uint8_t *)((int)param_1 + 0xa2) = uRam80015f0e;
  }
  else if (*(int *)((int)param_1 + 0x9c) == 1) {
    *(uint16_t *)((int)param_1 + 0xa0) = 0;
    *(uint8_t *)((int)param_1 + 0xa2) = 0;
  }
  return;
}
