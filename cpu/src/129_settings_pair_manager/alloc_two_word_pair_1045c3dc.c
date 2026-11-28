/* @k10d alloc_two_word_pair_1045c3dc @ 0x1045c3dc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * alloc_two_word_pair_1045c3dc(uint32_t *pair_ptr,uint32_t word0,uint32_t word1)

{
  /* If pair_ptr is already valid, use it; otherwise allocate 8 bytes (two words).
   * On success, store word0 at offset 0 and word1 at offset 4. */
  if ((pair_ptr != (uint32_t *)0x0) ||
     (pair_ptr = (uint32_t *)heap_alloc((void *)8), pair_ptr != (uint32_t *)0x0)) {
    *pair_ptr = word0;
    pair_ptr[1] = word1;
  }
  return pair_ptr;
}
