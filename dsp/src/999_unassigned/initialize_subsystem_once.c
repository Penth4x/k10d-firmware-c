/* @k10d initialize_subsystem_once @ 0x000e3406
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * purpose:
 *   Performs a one-time initialization sequence guarded by a bit in DAT_0003c021.
 * summary:
 *   Checks bit 6 of DAT_0003c021; if clear, sets bits 4-5 of DAT_00000006, calls
 *   write_byte_to_ram_and_call_two_routines twice with parameters (9,0) and (8,0xff), calls
 *   call_subroutine_with_100, sets bit 3 of DAT_0000000f, writes 2 to DAT_0000042d, copies
 *   DAT_0003c054 to DAT_00000096, sets DAT_00000092 to 1, calls
 *   write_byte_to_ram_and_call_two_routines(9,0x70), and finally sets bit 6 of DAT_0003c021
 *   to mark initialization complete. The callees write_byte_to_ram_and_call_two_routines
 *   and call_subroutine_with_100 have unknown roles.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_subsystem_once(void)

{
  if ((DAT_0003c021 & 0x40) == 0) {
    DAT_00000006 = DAT_00000006 | 0x30;
    write_byte_to_ram_and_call_two_routines(9,0);
    write_byte_to_ram_and_call_two_routines(8,0xff);
    call_subroutine_with_100();
    DAT_0000000f = DAT_0000000f & 0xef | 8;
    DAT_0000042d = 2;
    DAT_00000096 = DAT_0003c054;
    DAT_00000092 = 1;
    write_byte_to_ram_and_call_two_routines(9,0x70);
    DAT_0003c021 = DAT_0003c021 | 0x40;
  }
  return;
}
