/* @k10d copy_word_to_two_bytes @ 0x000f3d70
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Copies the value of a 16-bit global into two adjacent 8-bit globals.
 * summary:
 *   The function reads the 16-bit value at DAT_0003c476 and writes it to both DAT_0003c475
 *   and DAT_0003c474. It has no callees and performs no other side effects. The specific
 *   role of these globals is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_word_to_two_bytes(void)

{
  DAT_0003c475 = DAT_0003c476;
  DAT_0003c474 = DAT_0003c476;
  return;
}
