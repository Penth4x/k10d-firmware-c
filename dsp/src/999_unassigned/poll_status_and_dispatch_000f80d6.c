/* @k10d poll_status_and_dispatch_000f80d6 @ 0x000f80d6
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Polls a status flag in DAT_00000005 and dispatches to different handler routines based
 *   on the result.
 * summary:
 *   The function waits for bit 1 of DAT_00000005 to be set, then checks bit 0 to determine
 *   the execution path. It calls FUN_000d5b38 with various arguments (0x4e, 0x41) and
 *   branches to different subroutines (store_byte_and_constant, infinite_loop_000f8214,
 *   etc.) depending on the status. Returns a status code (0, 5, 6, or 7) indicating the
 *   outcome of the operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int poll_status_and_dispatch_000f80d6(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = 0;
  do {
  } while ((DAT_00000005 & 2) != 0);
  if ((DAT_00000005 & 1) == 0) {
    bVar3 = (DAT_00000002 & 0x80) == 0;
    DAT_0000000a = DAT_0000000a | 0x80;
    clear_and_set_flag_bits_000d59c4();
    DAT_000000d1 = DAT_000000d1 & 0xfe;
    do {
    } while ((DAT_00000005 & 2) == 0);
    DAT_0000000a = DAT_0000000a & 0x7f | 0x80;
    iVar1 = FUN_000d5b38(0x4e);
    if (iVar1 == 0) {
      if (bVar3) {
        do {
        } while ((DAT_00000005 & 2) != 0);
      }
      else {
        store_byte_and_constant(0x3d08);
        do {
          if ((DAT_00000005 & 2) == 0) goto LAB_000f816e;
          iVar1 = test_bit_2_of_dat_000000cf();
          if (iVar1 != 0) {
            clear_bit_2_of_global_flag();
            update_low_address_byte_state();
            configure_timer_channels();
            FUN_000d5b38(0x41);
          }
          iVar1 = test_bit_2_of_dat_0003c030();
        } while (iVar1 == 0);
        iVar2 = 7;
LAB_000f816e:
        clear_dat_000000ce();
        if ((DAT_00000005 & 1) != 0) {
          iVar2 = 7;
        }
      }
      infinite_loop_000f8214(0xf423);
      if (iVar2 == 0) {
        copy_1798_bytes_from_rodata();
        copy_83_bytes_from_rodata();
        DAT_0000000a = DAT_0000000a & 0x7f;
        (*(code *)&SUB_0003ec00)(bVar3);
      }
      else {
        DAT_0000000a = DAT_0000000a & 0x7f;
      }
    }
    else {
      iVar2 = 5;
      DAT_0000000a = DAT_0000000a & 0x7f;
    }
  }
  else {
    iVar2 = 6;
    DAT_0000000a = DAT_0000000a & 0x7f;
  }
  if (iVar2 != 7) {
    toggle_bit_and_wait_for_flag_000f81d2();
  }
  clear_two_flag_bits_and_call_helpers();
  return iVar2;
}
