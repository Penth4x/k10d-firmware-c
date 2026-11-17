/* @k10d alloc_zeroed_three_word_block @ 0x1045b9a4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_zeroed_three_word_block(void)

{
  uint32_t *puVar1;
  
  puVar1 = (uint32_t *)heap_alloc((void *)0xc);
  if (puVar1 != (uint32_t *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  return;
}
