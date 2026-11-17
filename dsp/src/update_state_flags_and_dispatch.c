/* @k10d update_state_flags_and_dispatch @ 0x000e7e68
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Updates a cluster of global state variables and flag bits, conditionally dispatching
 *   events via write_byte_to_ram_and_call_two_routines.
 * summary:
 *   The function manipulates several global variables (DAT_0003c0xx) and calls
 *   reset_state_by_mode to derive new values for them. It conditionally invokes
 *   write_byte_to_ram_and_call_two_routines with a constant first argument (10) and a
 *   modified flag byte, suggesting an event or notification mechanism. The function returns
 *   the updated value of DAT_0003c06b.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

byte update_state_flags_and_dispatch(void)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  
  bVar1 = false;
  DAT_0003c06b = 0;
  DAT_0003c02f = 0;
  DAT_0003c067 = DAT_0003c067 & 0xfd;
  compute_status_code_from_flags();
  if ((DAT_0003c003 & 0x10) == 0) {
    if ((DAT_0003c086 & 4) != 0) {
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
    }
    DAT_0003c060 = '\x04';
    if ((((DAT_0003c00b & 8) == 0) || ((DAT_0003c00b & 2) != 0)) || ((DAT_0003c00b & 4) != 0)) {
      DAT_0003c00b = DAT_0003c00b & 0xf9 | 8;
      write_byte_to_ram_and_call_two_routines(10,DAT_0003c00b);
    }
  }
  else {
    if ((DAT_0003c00f & 0x40) == 0) {
      call_subroutine_with_arg_9();
    }
    bVar3 = DAT_0003c065;
    bVar2 = DAT_0003c064;
    if ((DAT_0003c086 & 4) == 0) {
      if ((DAT_0003c000 & 0x40) == 0) {
        if (DAT_0003c060 == '\x02') {
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
          DAT_0003c064 = reset_state_by_mode(DAT_0003c061,1);
          if ((DAT_0003c066 & 1) == 0) {
            DAT_0003c062 = DAT_0003c244;
            DAT_0003c076 = DAT_0003c240;
          }
          else {
            DAT_0003c062 = DAT_0003c246;
            DAT_0003c076 = DAT_0003c242;
          }
          DAT_0003c06b = DAT_0003c064;
          if (DAT_0003c064 < bVar2) {
            bVar1 = true;
          }
        }
        else {
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
          DAT_0003c065 = reset_state_by_mode(DAT_0003c061,2);
          if ((DAT_0003c066 & 1) == 0) {
            DAT_0003c063 = DAT_0003c245;
            DAT_0003c077 = DAT_0003c241;
          }
          else {
            DAT_0003c063 = DAT_0003c247;
            DAT_0003c077 = DAT_0003c243;
          }
          DAT_0003c06b = DAT_0003c065;
          if (DAT_0003c065 < bVar3) {
            bVar1 = true;
          }
        }
      }
      else {
        DAT_0003c060 = '\x02';
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
        DAT_0003c064 = reset_state_by_mode(DAT_0003c061,1);
        DAT_0003c06b = DAT_0003c064;
        if ((DAT_0003c066 & 1) == 0) {
          DAT_0003c062 = DAT_0003c244;
          DAT_0003c076 = DAT_0003c240;
        }
        else {
          DAT_0003c062 = DAT_0003c246;
          DAT_0003c076 = DAT_0003c242;
        }
      }
    }
    else {
      bVar1 = true;
    }
    if ((DAT_0003c00b & 8) != 0) {
      DAT_0003c00b = DAT_0003c00b & 0xf7;
      write_byte_to_ram_and_call_two_routines(10,DAT_0003c00b);
    }
    if ((bVar1) && ((DAT_0003c067 & 0x40) == 0)) {
      FUN_000e7c0a();
    }
    else {
      update_status_flags_from_code();
    }
  }
  if ((DAT_0003c066 & 0x40) == 0) {
    check_flag_and_call_subroutine_000f0594();
    write_conditional_byte_to_0x89();
  }
  if ((DAT_0003c02b & 0x80) != 0) {
    if ((DAT_0003c003 & 0x10) == 0) {
      DAT_0003c066 = DAT_0003c066 & 0x7f;
    }
    else {
      DAT_0003c066 = DAT_0003c066 | 0x80;
    }
    if ((DAT_0003c000 & 0x40) == 0) {
      DAT_0003c067 = DAT_0003c067 & 0xf7;
    }
    else {
      DAT_0003c067 = DAT_0003c067 | 8;
    }
  }
  return DAT_0003c06b;
}
