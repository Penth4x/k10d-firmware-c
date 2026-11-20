/* @k10d FUN_000e7c0a @ 0x000e7c0a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t FUN_000e7c0a(void)

{
  int iVar1;
  
  DAT_0003c06b = 0;
  DAT_0003c02f = 0;
  DAT_0003c067 = DAT_0003c067 & 0xfd;
  compute_status_code_from_flags();
  if ((DAT_0003c003 & 0x10) == 0) {
    DAT_0003c060 = 4;
    if ((((DAT_0003c00b & 8) == 0) || ((DAT_0003c00b & 2) != 0)) || ((DAT_0003c00b & 4) != 0)) {
      DAT_0003c00b = DAT_0003c00b & 0xf9 | 8;
      write_byte_to_ram_and_call_two_routines(10,DAT_0003c00b);
    }
  }
  else {
    if ((DAT_0003c00f & 0x40) == 0) {
      call_subroutine_with_arg_9();
    }
    DAT_0003c064 = reset_state_by_mode(DAT_0003c061,0);
    DAT_0003c065 = DAT_0003c24e;
    if ((DAT_0003c066 & 1) == 0) {
      DAT_0003c062 = DAT_0003c244;
      DAT_0003c076 = DAT_0003c240;
      DAT_0003c063 = DAT_0003c245;
      DAT_0003c077 = DAT_0003c241;
    }
    else {
      DAT_0003c062 = DAT_0003c246;
      DAT_0003c076 = DAT_0003c242;
      DAT_0003c063 = DAT_0003c247;
      DAT_0003c077 = DAT_0003c243;
    }
    iVar1 = check_state_condition();
    if (iVar1 == 1) {
      DAT_0003c060 = 3;
      if ((DAT_0003c00b & 4) == 0) {
        DAT_0003c00b = DAT_0003c00b | 8;
        write_byte_to_ram_and_call_two_routines(10,DAT_0003c00b);
        DAT_0003c00b = DAT_0003c00b & 0xfd;
        write_byte_to_ram_and_call_two_routines(10,DAT_0003c00b);
        DAT_0003c00b = DAT_0003c00b | 4;
        write_byte_to_ram_and_call_two_routines(10,DAT_0003c00b);
        DAT_0003c00b = DAT_0003c00b & 0xf7;
        write_byte_to_ram_and_call_two_routines(10,DAT_0003c00b);
      }
      if ((DAT_0003c000 & 0x40) != 0) {
        DAT_0003c065 = 1;
      }
      DAT_0003c06b = DAT_0003c065;
    }
    else {
      DAT_0003c060 = 2;
      if ((DAT_0003c00b & 2) == 0) {
        DAT_0003c00b = DAT_0003c00b | 8;
        write_byte_to_ram_and_call_two_routines(10,DAT_0003c00b);
        DAT_0003c00b = DAT_0003c00b & 0xfb;
        write_byte_to_ram_and_call_two_routines(10,DAT_0003c00b);
        DAT_0003c00b = DAT_0003c00b | 2;
        write_byte_to_ram_and_call_two_routines(10,DAT_0003c00b);
        DAT_0003c00b = DAT_0003c00b & 0xf7;
        write_byte_to_ram_and_call_two_routines(10,DAT_0003c00b);
      }
      DAT_0003c06b = DAT_0003c064;
    }
    if ((DAT_0003c00b & 8) != 0) {
      DAT_0003c00b = DAT_0003c00b & 0xf7;
      write_byte_to_ram_and_call_two_routines(10,DAT_0003c00b);
    }
  }
  update_status_flags_from_code();
  return DAT_0003c06b;
}
