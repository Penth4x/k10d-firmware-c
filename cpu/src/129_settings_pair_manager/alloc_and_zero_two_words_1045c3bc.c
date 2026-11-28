/* @k10d alloc_and_zero_two_words_1045c3bc @ 0x1045c3bc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_and_zero_two_words_1045c3bc(uint32_t *buf)

{
  /* If buf is already valid, zero it in place; otherwise allocate 8 bytes
   * and zero the result.  The heap_alloc size (8) is passed in r4 via the
   * call:d delay slot. */
  if ((buf != (uint32_t *)0x0) ||
     (buf = (uint32_t *)heap_alloc((void *)8), buf != (uint32_t *)0x0)) {
    *buf = 0;
    buf[1] = 0;
  }
  return;
}
