/* @k10d copy_word_array_1045cd06 @ 0x1045cd06
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 130_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_word_array_1045cd06(void *ctx, uint32_t *src, uint32_t *src_end, uint32_t *dst)

{
  /* Copy 32-bit words from [src, src_end) to dst; ctx (r4) is unused. */
  for (; src != src_end; src = src + 1) {
    *dst = *src;
    dst = dst + 1;
  }
  return;
}
