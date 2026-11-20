/* @k10d dispatch_on_state_flags_000d34fe @ 0x000d34fe
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Selects and calls one of four handler functions based on bit flags in two global bytes.
 * summary:
 *   Reads DAT_0003c127 and DAT_0003c128 to determine a state. If bit 5 of DAT_0003c127 is
 *   clear and bit 3 is set, it branches on the value of DAT_0003c100 (0x18 or 0x28) to call
 *   adjust_char_based_on_state or remap_key_state_byte. If bit 5 of DAT_0003c127 is set, it
 *   branches on bit 7 of DAT_0003c128 to call FUN_000d2ecc or
 *   update_state_and_call_handler. No other side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_on_state_flags_000d34fe(void)

{
  if ((DAT_0003c127 & 0x20) == 0) {
    if ((DAT_0003c127 & 8) != 0) {
      if (DAT_0003c100 == '\x18') {
        adjust_char_based_on_state();
      }
      else if (DAT_0003c100 == '(') {
        remap_key_state_byte();
      }
    }
  }
  else if ((DAT_0003c128 & 0x80) == 0) {
    FUN_000d2ecc();
  }
  else {
    update_state_and_call_handler();
  }
  return;
}
