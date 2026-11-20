/* @k10d dispatch_on_byte_flag_000d77c2 @ 0x000d77c2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Branches on the value of DAT_0003c3f8 (0, 1, or 2) to perform distinct state updates
 *   and call helper functions.
 * summary:
 *   The function reads the byte at DAT_0003c3f8 and executes one of three code paths. If
 *   the value is 0, it calls clear_bit_in_dat_0003c00b, modifies several global flags
 *   (clearing/setting bits in DAT_0003c00c, DAT_0000000b, DAT_00000424, DAT_00000404,
 *   DAT_00000004), and calls write_masked_field_and_call_two_routines and
 *   check_flag_and_call_helper_000e7944. If the value is 1, it calls FUN_000ed8b8. If the
 *   value is 2, it sets bit 6 of DAT_0003c00c and calls
 *   write_masked_field_and_call_two_routines. The specific roles of the globals and callees
 *   are not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_on_byte_flag_000d77c2(void)

{
  if (DAT_0003c3f8 == '\0') {
    clear_bit_in_dat_0003c00b();
    DAT_0003c00c = DAT_0003c00c & 0xbf;
    write_masked_field_and_call_two_routines(0x1b,DAT_0003c00c);
    DAT_0000000b = DAT_0000000b & 0xfc;
    DAT_0000013e = 0;
    DAT_00000424 = DAT_00000424 & 0xf7;
    DAT_00000404 = DAT_00000404 | 8;
    DAT_00000004 = DAT_00000004 & 0xf7;
    check_flag_and_call_helper_000e7944();
  }
  else if (DAT_0003c3f8 == '\x01') {
    FUN_000ed8b8();
  }
  else if (DAT_0003c3f8 == '\x02') {
    DAT_0003c00c = DAT_0003c00c | 0x40;
    write_masked_field_and_call_two_routines(0x1b,DAT_0003c00c);
  }
  return;
}
