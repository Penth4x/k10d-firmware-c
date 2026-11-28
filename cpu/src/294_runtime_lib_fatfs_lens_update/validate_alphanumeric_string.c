/* @k10d validate_alphanumeric_string @ 0x1053ecf2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t validate_alphanumeric_string(char *str)

{
  uint32_t result;
  uint16_t str_len;
  uint16_t idx;
  char ch;

  if (str == (char *)0x0) {
    result = 0xffffffea;
  }
  else {
    str_len = (uint16_t)count_string_bytes(str);
    if ((str_len == 0) || (8 < str_len)) {
      result = 0xfffffdf8;
    }
    else {
      for (idx = 0; idx < str_len; idx = (uint16_t)(idx + 1)) {
        ch = str[idx];
        if ((((ch < 0x30) || ((0x39 < ch && (ch < 0x41)))) ||
            ((0x5a < ch && (ch < 0x61)))) || (0x7a < ch)) {
          return 0xfffffdf8;
        }
      }
      result = 0;
    }
  }
  return result;
}
