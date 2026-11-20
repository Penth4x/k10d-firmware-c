/* @k10d adjust_char_based_on_state @ 0x000d2f86
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Modifies a character variable based on the values of two adjacent state bytes.
 * summary:
 *   The function initializes several global variables, including a pointer to DAT_000fb0d4
 *   and a value of 0x16. It calls lookup_next_byte_in_table to update DAT_0003c12b.
 *   Subsequently, it applies conditional logic to modify DAT_0003c12b if it matches
 *   specific ASCII characters (' ', '&') and DAT_0003c109 matches '8' or 'j'.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void adjust_char_based_on_state(void)

{
  DAT_0003cd63 = DAT_0003c108;
  DAT_0003cd62 = 0x16;
  _DAT_0003cd68 = (uint32_t)&DAT_000fb0d4;
  lookup_next_byte_in_table((void *)&DAT_0003c12b);
  if (DAT_0003c12b == ' ') {
    if (DAT_0003c109 == '8') {
      DAT_0003c12b = '!';
    }
    else if (DAT_0003c109 == 'j') {
      DAT_0003c12b = ')';
    }
  }
  else if ((DAT_0003c12b == '&') && (DAT_0003c109 == 'j')) {
    DAT_0003c12b = '*';
  }
  return;
}
