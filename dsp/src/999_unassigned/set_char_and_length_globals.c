/* @k10d set_char_and_length_globals @ 0x000d585e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Writes a character (derived from a mode flag) and a fixed length value to two global
 *   variables.
 * summary:
 *   Checks bits 0-1 of DAT_00000484; if equal to 2, sets DAT_00000050 to 0x27 (ASCII '('
 *   minus 1), otherwise sets it to 0x09 (newline minus 1). Always sets DAT_00000056 to
 *   0x13. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_char_and_length_globals(void)

{
  char cVar1;
  
  if ((DAT_00000484 & 3) == 2) {
    cVar1 = '(';
  }
  else {
    cVar1 = '\n';
  }
  DAT_00000050 = cVar1 + -1;
  DAT_00000056 = 0x13;
  return;
}
