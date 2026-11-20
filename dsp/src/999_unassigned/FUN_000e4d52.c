/* @k10d FUN_000e4d52 @ 0x000e4d52
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t FUN_000e4d52(void)

{
  int iVar1;
  uint32_t uVar2;
  
  DAT_0003c020 = DAT_0003c020 | 0x20;
  uVar2 = 0;
  DAT_0003c07f = DAT_0003c07f & 0xf7;
  DAT_0003c02b = DAT_0003c02b & 0xf7;
  set_flags_if_bit3_set();
  DAT_00000041 = DAT_00000041 & 0xbf;
  DAT_00000040 = DAT_00000040 & 0xbf;
  iVar1 = set_flag_and_call_helper_000db7ba();
  if (iVar1 == 1) {
    call_d5642_with_100();
  }
  FUN_000da752();
  call_subroutine_with_arg_9();
  initialize_status_flags_000c8950();
  check_and_run_state_transitions_000f0174();
  if (((DAT_0003c00b & 0x40) == 0) && ((DAT_0003c02f & 1) == 0)) {
    update_status_flag_bits_000e7ade();
    if (((DAT_0003f3e1 & 0x80) == 0) && ((DAT_0003c066 & 1) != 0)) {
      configure_and_wait_status_flags();
      call_subroutine_with_arg_0x4e();
      call_d5afc_with_0x52();
      call_d5afc_with_0x55();
      FUN_000d5ff0();
    }
    else {
      DAT_0003c066 = DAT_0003c066 | 2;
    }
  }
  read_bytes_if_enabled(0x60,&DAT_0003c12c,1);
  call_subroutine_with_arg_two();
  FUN_000da752();
  if (((DAT_0003c003 & 0x10) == 0) && ((DAT_0003c030 & 4) == 0)) {
    DAT_0003c00b = DAT_0003c00b | 8;
    write_byte_to_ram_and_call_two_routines(10,DAT_0003c00b);
  }
  if ((((DAT_0003c066 & 2) == 0) && ((DAT_0003c066 & 1) != 0)) && ((DAT_0003c395 & 0x20) == 0)) {
    FUN_000d5fbe();
  }
  if ((DAT_0003c067 & 0x80) == 0) {
    update_state_flags_and_dispatch();
  }
  if (((DAT_0003c02f & 1) == 0) && (iVar1 = check_bit7_of_dat_0003c003(), iVar1 != 0)) {
    FUN_000e0528();
    set_flag_if_two_bits_set();
    FUN_000d9e2c();
    toggle_flag_and_call_two_routines();
    dispatch_sequential_subroutines();
    iVar1 = poll_status_and_set_flags();
    if (iVar1 == 0) {
      call_subroutine_with_ten();
      call_subroutine_with_ten();
      DAT_0003c32c = DAT_0003c32c & 0xfd;
      uVar2 = 1;
    }
    else {
      dispatch_on_flag_bits_000e7846();
    }
  }
  DAT_0003c020 = DAT_0003c020 & 0xdf;
  return uVar2;
}
