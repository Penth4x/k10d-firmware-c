/* @k10d send_two_byte_command_with_payload @ 0x000f2f14
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Sends a two-byte command followed by a payload buffer to a peripheral, with retry logic
 *   and status checks.
 * summary:
 *   The function checks two status bits in DAT_0003c126 and DAT_0003c143 to determine if a
 *   communication channel is ready. If ready, it enters a retry loop (up to 3 attempts)
 *   where it sends param_1 and param_2 as a command pair via wait_and_write_byte_000e0fec,
 *   then transmits the buffer pointed to by param_3 (length param_4) byte-by-byte via
 *   update_state_and_wait_flag. It handles specific command codes (0x80, 0xa9/0xa2) with
 *   different timing or follow-up calls. The function returns the value of DAT_0003c122,
 *   which appears to be a status or response byte.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

char send_two_byte_command_with_payload(uint param_1,short param_2,uint8_t *param_3,short param_4)

{
  uint8_t uVar1;
  bool bVar2;
  int iVar3;
  int iStack_24;
  
  uVar1 = DAT_00000420;
  bVar2 = false;
  iVar3 = 0;
  iStack_24 = 3;
  if (((DAT_0003c126 & 0x20) != 0) && ((DAT_0003c143 & 0x40) != 0)) {
    bVar2 = true;
  }
  if (bVar2) {
    FUN_000f3072();
    do {
      DAT_0003c122 = '\0';
      bRam00000000 = bRam00000000 & 0xf7 | 2;
      if ((param_1 & 0xf0) == 0x80) {
        iVar3 = wait_for_flag_and_set_state_000e1d48(5);
      }
      if (iVar3 == 0) {
        wait_and_write_byte_000e0fec(param_1 & 0xff);
        wait_and_write_byte_000e0fec((char)param_2);
        bRam00000000 = bRam00000000 & 0xf7;
        if ((param_1 & 0xf0) == 0x80) {
          iVar3 = wait_for_flag_and_set_state_000e1d14(200);
        }
        else if ((param_1 == 0xa9) && (param_2 == 0xa2)) {
          FUN_000d5642(500);
        }
        else {
          busy_wait_on_mode_flag(0x5a);
        }
        if (iVar3 == 0) {
          do {
            update_state_and_wait_flag(*param_3);
            param_3 = param_3 + 1;
            param_4 = param_4 + -1;
            if ((param_1 == 0xa9) && (param_2 == 0xa2)) {
              busy_wait_on_mode_flag(0xfa);
            }
          } while (param_4 != 0);
        }
      }
      if (DAT_0003c122 == '\b') {
        configure_two_parameter_state(0,1);
        configure_two_parameter_state(1,1);
        iStack_24 = iStack_24 + -1;
        busy_wait_on_mode_flag(0x14);
      }
      else {
        iStack_24 = 0;
      }
    } while (iStack_24 != 0);
    clear_bit_and_set_flag();
  }
  DAT_00000420 = uVar1;
  return DAT_0003c122;
}
