/* @k10d set_bit_six_in_dat_0003c038 @ 0x000f061e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Sets bit 6 (0x40) of the global variable DAT_0003c038.
 * summary:
 *   The function performs a single read-modify-write operation on the global variable
 *   DAT_0003c038, ORing it with the constant 0x40. This effectively sets bit 6 of the
 *   variable while leaving all other bits unchanged. No other side effects or function
 *   calls are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_bit_six_in_dat_0003c038(void)

{
  DAT_0003c038 = DAT_0003c038 | 0x40;
  return;
}
