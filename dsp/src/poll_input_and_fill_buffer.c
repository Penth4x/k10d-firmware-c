/* @k10d poll_input_and_fill_buffer @ 0x000f2e1c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Polls an input source and copies the resulting bytes into a caller-provided buffer.
 * summary:
 *   The function checks two status bits in DAT_0003c126 and DAT_0003c143 to determine if an
 *   input event is ready. If ready, it initializes state, waits for data via
 *   wait_for_flag_and_set_state_000e1d48, and then loops to read bytes using
 *   wait_for_flag_and_return_state, storing them into the buffer pointed to by param_3
 *   until param_4 bytes are read. It returns the last status byte read from DAT_0003c122.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

char poll_input_and_fill_buffer(byte param_1,uint8_t param_2,uint8_t *param_3,short param_4)

{
  uint8_t uVar1;
  bool bVar2;
  uint8_t uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = DAT_00000420;
  bVar2 = false;
  iVar4 = 0;
  iVar5 = 3;
  if (((DAT_0003c126 & 0x20) != 0) && ((DAT_0003c143 & 0x40) != 0)) {
    bVar2 = true;
  }
  if (bVar2) {
    FUN_000f3072();
    do {
      DAT_0003c122 = '\0';
      bRam00000000 = bRam00000000 & 0xf7 | 2;
      if ((param_1 & 0xf0) == 0x80) {
        iVar4 = wait_for_flag_and_set_state_000e1d48(5);
      }
      if (iVar4 == 0) {
        wait_and_write_byte_000e0fec(param_1);
        wait_and_write_byte_000e0fec(param_2);
        bRam00000000 = bRam00000000 | 8;
        if ((param_1 & 0xf0) == 0x80) {
          iVar4 = wait_for_flag_and_set_state_000e1d14(200);
        }
        else {
          busy_wait_on_mode_flag(0x5a);
        }
        if (iVar4 == 0) {
          do {
            uVar3 = wait_for_flag_and_return_state();
            *param_3 = uVar3;
            param_3 = param_3 + 1;
            param_4 = param_4 + -1;
          } while (param_4 != 0);
        }
      }
      if (DAT_0003c122 == '\b') {
        configure_two_parameter_state(0,1);
        configure_two_parameter_state(1,1);
        iVar5 = iVar5 + -1;
        busy_wait_on_mode_flag(0x14);
      }
      else {
        iVar5 = 0;
      }
    } while (iVar5 != 0);
    clear_bit_and_set_flag();
  }
  DAT_00000420 = uVar1;
  return DAT_0003c122;
}
