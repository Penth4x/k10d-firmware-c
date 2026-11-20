/* @k10d set_flag_and_notify @ 0x000e7b70
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Sets bit 3 of a global flag byte and calls two helper functions.
 * summary:
 *   The function ORs the value 8 into the global variable DAT_0003c00b. It then calls
 *   write_byte_to_ram_and_call_two_routines with arguments 10 and the updated value of
 *   DAT_0003c00b. Finally, it calls set_multiple_status_flags. The specific roles of the
 *   callees and the global variable are not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_and_notify(void)

{
  DAT_0003c00b = DAT_0003c00b | 8;
  write_byte_to_ram_and_call_two_routines(10,DAT_0003c00b);
  set_multiple_status_flags();
  return;
}
