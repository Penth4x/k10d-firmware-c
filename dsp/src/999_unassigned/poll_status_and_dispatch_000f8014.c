/* @k10d poll_status_and_dispatch_000f8014 @ 0x000f8014
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * purpose:
 *   Polls a status flag in DAT_00000005 and conditionally invokes a sequence of handler
 *   functions based on bit states.
 * summary:
 *   The function waits for bit 1 of DAT_00000005 to clear, then checks bit 0 and bit 7 of
 *   DAT_00000002 to determine execution path. It manipulates DAT_0000000a (setting/clearing
 *   bit 7) and calls various subroutines (clear_and_set_flag_bits_000d59c4,
 *   store_byte_and_constant, etc.) in a loop while bit 1 of DAT_00000005 is set. Returns a
 *   status code (0, 6, or 7) indicating the outcome of the polling sequence.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int poll_status_and_dispatch_000f8014(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = 0;
  bVar1 = DAT_0000000a | 0x80;
  do {
  } while ((DAT_00000005 & 2) != 0);
  if ((DAT_00000005 & 1) == 0) {
    bVar4 = (DAT_00000002 & 0x80) != 0;
    DAT_0000000a = bVar1;
    if (bVar4) {
      clear_and_set_flag_bits_000d59c4();
      DAT_000000d1 = DAT_000000d1 & 0xfe;
    }
    do {
    } while ((DAT_00000005 & 2) == 0);
    DAT_0000000a = DAT_0000000a & 0x7f | 0x80;
    if (bVar4) {
      store_byte_and_constant(0x3d08);
      do {
        if ((DAT_00000005 & 2) == 0) goto LAB_000f8098;
        iVar2 = test_bit_2_of_dat_000000cf();
        if (iVar2 != 0) {
          clear_bit_2_of_global_flag();
          update_low_address_byte_state();
          configure_timer_channels();
          FUN_000d5b38(0x41);
        }
        iVar2 = test_bit_2_of_dat_0003c030();
      } while (iVar2 == 0);
      iVar3 = 7;
LAB_000f8098:
      clear_dat_000000ce();
      if ((DAT_00000005 & 1) != 0) {
        iVar3 = 7;
      }
    }
    else {
      do {
      } while ((DAT_00000005 & 2) != 0);
    }
    DAT_0000000a = DAT_0000000a & 0x7f;
    if (iVar3 == 0) {
      do {
      } while ((DAT_00000005 & 2) == 0);
      do {
      } while ((DAT_00000005 & 2) != 0);
    }
  }
  else {
    iVar3 = 6;
    DAT_0000000a = DAT_0000000a & 0x7f;
  }
  if (iVar3 != 7) {
    toggle_bit_and_wait_for_flag_000f81d2();
  }
  clear_two_flag_bits_and_call_helpers();
  return iVar3;
}
