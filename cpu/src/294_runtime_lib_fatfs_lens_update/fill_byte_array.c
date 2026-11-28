/* @k10d fill_byte_array @ 0x10545132
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void fill_byte_array(void *dest, uint8_t fill_val, int count)

{
  bool still_positive;
  int idx;

  /* Fill `count` bytes at `dest` with `fill_val`, writing from the last byte backwards. */
  if (0 < count) {
    do {
      idx = count + -1;
      still_positive = 0 < count;
      *(uint8_t *)(idx + (int)dest) = fill_val;
      count = idx;
    } while (still_positive && idx != 0);
  }
  return;
}
