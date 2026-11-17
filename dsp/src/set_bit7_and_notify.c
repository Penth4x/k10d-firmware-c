/* @k10d set_bit7_and_notify @ 0x000dd620
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Sets bit 7 of DAT_0003c802 and calls update_bitmask_from_params with arguments 0, 7,
 *   and the updated value.
 * summary:
 *   The function performs a read-modify-write on the global byte DAT_0003c802, setting bit
 *   7 (0x80). It then invokes update_bitmask_from_params, passing 0, 7, and the new value
 *   of DAT_0003c802. The role of DAT_0003c802 and update_bitmask_from_params is not
 *   determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_bit7_and_notify(void)

{
  DAT_0003c802 = DAT_0003c802 | 0x80;
  update_bitmask_from_params(0,7,DAT_0003c802);
  return;
}
