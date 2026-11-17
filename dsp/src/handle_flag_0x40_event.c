/* @k10d handle_flag_0x40_event @ 0x000e3464
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Processes a state change when bit 6 of DAT_0003c021 is set, updating several control
 *   flags and calling helper functions.
 * summary:
 *   The function checks if bit 6 (0x40) of DAT_0003c021 is set. If so, it modifies
 *   DAT_00000006, DAT_0000000d, and DAT_0000000f, clears DAT_00000092 and DAT_0000042d, and
 *   calls write_byte_to_ram_and_call_two_routines, call_subroutine_with_mode_delay, and
 *   FUN_000d5642 with specific arguments. Finally, it clears bit 6 of DAT_0003c021. The
 *   specific roles of the DAT globals and callees are not provided, so the exact subsystem
 *   is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void handle_flag_0x40_event(void)

{
  if ((DAT_0003c021 & 0x40) != 0) {
    DAT_00000006 = DAT_00000006 | 0x30;
    write_byte_to_ram_and_call_two_routines(9,0);
    write_byte_to_ram_and_call_two_routines(8,0xff);
    DAT_00000092 = 0;
    DAT_0000042d = 0;
    DAT_0000000d = DAT_0000000d & 0xfd;
    DAT_0000000f = DAT_0000000f | 0x18;
    call_subroutine_with_mode_delay();
    write_byte_to_ram_and_call_two_routines(9,DAT_0003c00a | 0xd);
    write_byte_to_ram_and_call_two_routines(8,0xff);
    FUN_000d5642(0x32);
    DAT_00000006 = DAT_00000006 | 0x30;
    write_byte_to_ram_and_call_two_routines(9,0x7d);
    DAT_0003c021 = DAT_0003c021 & 0xbf;
  }
  return;
}
