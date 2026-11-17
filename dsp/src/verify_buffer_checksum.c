/* @k10d verify_buffer_checksum @ 0x000f7384
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Polls a status flag, then computes and compares an XOR checksum of a buffer to verify
 *   data integrity.
 * summary:
 *   The function first waits for a condition (DAT_0003c13c == 1) with a timeout of 100
 *   iterations. If successful, it calculates the XOR of 0x1bfe bytes from the buffer
 *   pointed to by param_1. It then compares this calculated checksum against a value read
 *   from DAT_0003c13c (after a second call to poll_input_and_fill_buffer). Returns 1 if the
 *   checksums match, 0 otherwise. The callees appear to be low-level I/O or delay
 *   functions, but their specific roles are not verified.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t verify_buffer_checksum(int param_1)

{
  bool bVar1;
  uint32_t uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  
  bVar1 = false;
  iVar4 = 100;
  bVar5 = 0;
  poll_keypad_with_retry(0xa0,0x55);
  busy_wait_on_mode_flag(100);
  do {
    poll_input_and_fill_buffer(0xa2,1,(void *)&DAT_0003c13c,1);
    if (DAT_0003c13c == 1) {
      bVar1 = true;
    }
    else {
      iVar4 = iVar4 + -1;
    }
    FUN_000d5642(1);
  } while ((!bVar1) && (iVar4 != 0));
  if (iVar4 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_000d5642(0xe);
    send_two_byte_command_with_payload(0xa9,0xa2,(void *)param_1,0x1bfe);
    FUN_000d5642(500);
    uVar3 = 0;
    do {
      bVar5 = bVar5 ^ *(byte *)(uVar3 + param_1);
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x1bfe);
    busy_wait_on_mode_flag(100);
    poll_input_and_fill_buffer(0xa2,0x83,(void *)&DAT_0003c13c,1);
    FUN_000d5642(100);
    if (DAT_0003c13c == bVar5) {
      poll_keypad_with_retry(0xa0,0x80);
      uVar2 = 1;
    }
    else {
      poll_keypad_with_retry(0xa0,0x82);
      uVar2 = 0;
    }
  }
  return uVar2;
}
