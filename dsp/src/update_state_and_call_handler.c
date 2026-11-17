/* @k10d update_state_and_call_handler @ 0x000d2f20
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Writes a small state structure and calls a handler function, then conditionally
 *   increments a status byte.
 * summary:
 *   The function sets DAT_0003cd63 from DAT_0003c136, sets DAT_0003cd62 to 8, and points
 *   _DAT_0003cd68 to DAT_000fb110. It then calls lookup_next_byte_in_table with a pointer
 *   to DAT_0003c12b. If DAT_0003c12b equals 0x0c and _DAT_0003c138 equals 0x69, it sets
 *   DAT_0003c12b to 0x0f. The role of the specific data fields and the handler is not
 *   determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_state_and_call_handler(void)

{
  DAT_0003cd63 = (uint8_t)_DAT_0003c136;
  DAT_0003cd62 = 8;
  _DAT_0003cd68 = &DAT_000fb110;
  lookup_next_byte_in_table(&DAT_0003c12b);
  if ((DAT_0003c12b == '\f') && (_DAT_0003c138 == 0x69)) {
    DAT_0003c12b = '\x0f';
  }
  return;
}
