/* @k10d alloc_two_word_pair_1045bc2e @ 0x1045bc2e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * alloc_two_word_pair_1045bc2e(uint32_t *pair_buf,uint32_t word0,uint32_t word1)

{
  if ((pair_buf != (uint32_t *)0x0) ||
     (pair_buf = (uint32_t *)heap_alloc((void *)8), pair_buf != (uint32_t *)0x0)) {
    *pair_buf = word0;
    pair_buf[1] = word1;
  }
  return pair_buf;
}
