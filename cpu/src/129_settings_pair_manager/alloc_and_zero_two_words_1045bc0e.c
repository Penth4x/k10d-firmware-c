/* @k10d alloc_and_zero_two_words_1045bc0e @ 0x1045bc0e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_and_zero_two_words_1045bc0e(uint32_t *buffer)

{
  /* If buffer is already non-null, use it; otherwise allocate 8 bytes.
   * Then zero both 32-bit words of the pair. */
  if ((buffer != (uint32_t *)0x0) ||
     (buffer = (uint32_t *)heap_alloc((void *)8), buffer != (uint32_t *)0x0)) {
    *buffer = 0;
    buffer[1] = 0;
  }
  return;
}
