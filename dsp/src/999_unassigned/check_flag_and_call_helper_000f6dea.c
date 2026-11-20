/* @k10d check_flag_and_call_helper_000f6dea @ 0x000f6dea
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Tests bit 6 of DAT_0003c128 and calls send_two_byte_command_with_payload with fixed
 *   arguments if set.
 * summary:
 *   The function checks if bit 6 (0x40) of the global DAT_0003c128 is set. If it is, it
 *   invokes send_two_byte_command_with_payload with arguments 0x89, 0x22, a pointer to
 *   DAT_0003c141, and 1. The role of DAT_0003c128 and send_two_byte_command_with_payload is
 *   not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_flag_and_call_helper_000f6dea(void)

{
  if ((DAT_0003c128 & 0x40) != 0) {
    send_two_byte_command_with_payload(0x89,0x22,(void *)&DAT_0003c141,1);
  }
  return;
}
