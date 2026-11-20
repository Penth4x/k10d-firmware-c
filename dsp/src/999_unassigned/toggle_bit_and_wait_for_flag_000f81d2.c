/* @k10d toggle_bit_and_wait_for_flag_000f81d2 @ 0x000f81d2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Sets bit 2 of DAT_00000501, clears bit 2 of DAT_00000401, and waits for bit 2 of
 *   DAT_00000001 to be set.
 * summary:
 *   The function modifies two global variables (DAT_00000501 and DAT_00000401) by setting
 *   and clearing bit 2 respectively. It then calls infinite_loop_000f8214 with argument 5,
 *   followed by a busy-wait loop checking if bit 2 of DAT_00000001 is set. It repeats a
 *   similar pattern with argument 0x30d3 twice more, waiting for the same flag after each
 *   call. The role of the global variables and the specific hardware or subsystem involved
 *   is not determinable from the provided pseudocode and callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_bit_and_wait_for_flag_000f81d2(void)

{
  DAT_00000501 = DAT_00000501 | 4;
  DAT_00000401 = DAT_00000401 & 0xfb;
  infinite_loop_000f8214(5);
  do {
  } while ((DAT_00000001 & 4) == 0);
  infinite_loop_000f8214(0x30d3);
  do {
  } while ((DAT_00000001 & 4) == 0);
  infinite_loop_000f8214(0x30d3);
  do {
  } while ((DAT_00000001 & 4) == 0);
  return;
}
