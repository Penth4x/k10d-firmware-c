/* @k10d update_flag_and_notify @ 0x000e3756
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Sets or clears bit 1 of DAT_0003c00a based on bit 6 of DAT_0003c021, then calls
 *   write_byte_to_ram_and_call_two_routines with the updated value.
 * summary:
 *   The function checks bit 6 (0x40) of the global DAT_0003c021. If the bit is clear, it
 *   sets bit 1 (value 2) in DAT_0003c00a; otherwise, it clears bit 1. It then invokes
 *   write_byte_to_ram_and_call_two_routines with the constant 9 and the modified
 *   DAT_0003c00a value. The specific roles of the globals and the callee are not
 *   determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_flag_and_notify(void)

{
  if ((DAT_0003c021 & 0x40) == 0) {
    DAT_0003c00a = DAT_0003c00a & 0xfd | 2;
  }
  else {
    DAT_0003c00a = DAT_0003c00a & 0xfd;
  }
  write_byte_to_ram_and_call_two_routines(9,DAT_0003c00a);
  return;
}
