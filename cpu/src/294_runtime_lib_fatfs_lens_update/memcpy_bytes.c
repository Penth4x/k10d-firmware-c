/* @k10d memcpy_bytes @ 0x10545122
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed copy_bytes_from_source)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Copies param_3 bytes from param_2 to param_1 in a byte-wise loop.
 * summary:
 *   Performs a simple byte-by-byte copy from the source buffer (param_2) to the destination
 *   buffer (param_1) for param_3 bytes. The loop decrements the counter and copies one byte
 *   per iteration until the count reaches zero. No other side effects or MMIO operations
 *   are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void memcpy_bytes(void *dest,void *src,int count)

{
  bool still_positive;
  int idx;

  if (0 < count) {
    do {
      idx = count + -1;
      still_positive = 0 < count;
      *(uint8_t *)(idx + (int)dest) = *(uint8_t *)(idx + (int)src);
      count = idx;
    } while (still_positive && idx != 0);
  }
  return;
}
