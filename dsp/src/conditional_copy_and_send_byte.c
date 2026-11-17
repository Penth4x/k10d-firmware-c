/* @k10d conditional_copy_and_send_byte @ 0x000f6f24
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Copies a value from DAT_0003cd5f to DAT_0003c13c and passes it to
 *   send_two_byte_command_with_payload if specific flag and value conditions are met.
 * summary:
 *   Checks if bit 6 of DAT_0003c128 is set and if DAT_0003cd5f is not -1. If both are true,
 *   it stores DAT_0003cd5f into DAT_0003c13c and calls send_two_byte_command_with_payload
 *   with arguments 0x89, 0x10, a pointer to DAT_0003c13c, and 1. The role of the globals
 *   and the callee is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void conditional_copy_and_send_byte(void)

{
  if (((DAT_0003c128 & 0x40) != 0) && (DAT_0003cd5f != -1)) {
    DAT_0003c13c = DAT_0003cd5f;
    send_two_byte_command_with_payload(0x89,0x10,(void *)&DAT_0003c13c,1);
  }
  return;
}
