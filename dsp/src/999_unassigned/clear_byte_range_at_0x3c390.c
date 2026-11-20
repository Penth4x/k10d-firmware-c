/* @k10d clear_byte_range_at_0x3c390 @ 0x000f3332
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Sets a series of individual bytes in the 0x3c390-0x3c41e range to zero.
 * summary:
 *   The function performs a sequence of direct memory writes, setting specific byte offsets
 *   within the DAT_0003c390 to DAT_0003c41e region to 0. It does not call any other
 *   functions and has no other side effects. The specific purpose of this memory region is
 *   not determinable from the provided pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_byte_range_at_0x3c390(void)

{
  DAT_0003c390 = 0;
  DAT_0003c391 = 0;
  DAT_0003c392 = 0;
  DAT_0003c393 = 0;
  DAT_0003c394 = 0;
  DAT_0003c395 = 0;
  DAT_0003c396 = 0;
  DAT_0003c39b = 0;
  DAT_0003c39c = 0;
  DAT_0003c39d = 0;
  DAT_0003c39e = 0;
  DAT_0003c39f = 0;
  DAT_0003c3a0 = 0;
  DAT_0003c3c9 = 0;
  DAT_0003c3ca = 0;
  DAT_0003c412 = 0;
  DAT_0003c413 = 0;
  DAT_0003c414 = 0;
  DAT_0003c415 = 0;
  DAT_0003c416 = 0;
  DAT_0003c417 = 0;
  DAT_0003c418 = 0;
  DAT_0003c419 = 0;
  DAT_0003c41a = 0;
  DAT_0003c41b = 0;
  DAT_0003c41c = 0;
  DAT_0003c41d = 0;
  DAT_0003c41e = 0;
  return;
}
