/* @k10d dispatch_on_byte_flag_000d7604 @ 0x000d7604
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calls a common routine, then branches to one of four handlers based on the value of
 *   DAT_0003c3ef, and clears bits 1 and 4 of DAT_00000006.
 * summary:
 *   The function first invokes process_state_flags_and_dispatch_000cb0c6 unconditionally.
 *   It then reads the byte at DAT_0003c3ef and dispatches to one of four callees
 *   (clear_sixteen_byte_block, clear_sixteen_byte_buffer, fill_sixteen_bytes_with_0xf, or
 *   fill_sixteen_bytes_with_0xf0) depending on whether the value is 0, 1, 2, or 3. Finally,
 *   it clears bits 1 and 4 of the global DAT_00000006 by ANDing it with 0xcf. The specific
 *   roles of the callees and the meaning of the flag byte are not determinable from the
 *   provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_on_byte_flag_000d7604(void)

{
  process_state_flags_and_dispatch_000cb0c6();
  if (DAT_0003c3ef == '\0') {
    clear_sixteen_byte_block();
  }
  else if (DAT_0003c3ef == '\x01') {
    clear_sixteen_byte_buffer();
  }
  else if (DAT_0003c3ef == '\x02') {
    fill_sixteen_bytes_with_0xf();
  }
  else if (DAT_0003c3ef == '\x03') {
    fill_sixteen_bytes_with_0xf0();
  }
  DAT_00000006 = DAT_00000006 & 0xcf;
  return;
}
