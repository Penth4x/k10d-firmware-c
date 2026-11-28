/* @k10d read_first_word_1045bd4c @ 0x1045bd4c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* Return the 32-bit word stored at the given pointer (ld @r4,r4 in the
 * ret:d delay slot; result returned in r4). */
uint32_t read_first_word_1045bd4c(uint32_t *word_ptr)

{
  return *word_ptr;
}
