/* @k10d copy_two_shorts_from_source @ 0x1048cc3e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 187_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_two_shorts_from_source(uint16_t *dst,uint32_t *src)

{
  uint32_t word;

  // First word: original passes r4=dst, r5=src to the callee
  word = read_first_word_1045bd4c(src);
  *dst = (short)word;

  // Second word: original passes the first call's return value in r4
  word = get_second_word_of_struct(src);
  dst[1] = (short)word;
  return;
}
