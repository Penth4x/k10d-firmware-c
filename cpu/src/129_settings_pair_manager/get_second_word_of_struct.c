/* @k10d get_second_word_of_struct @ 0x1045bd56
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_second_word_of_struct(void *struct_ptr)

{
  /* r13 = 4; ret:d with delay-slot ld @(r13,r4),r4 → return *(base + 4) */
  return *(uint32_t *)((int)struct_ptr + 4);
}
