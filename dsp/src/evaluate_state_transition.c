/* @k10d evaluate_state_transition @ 0x000e6d12
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Evaluates multiple status flags to determine a state transition code and updates
 *   related control bits.
 * summary:
 *   The function reads various DAT_0003xxxx globals and calls
 *   update_status_flags_and_dispatch_000e70d2 to check conditions. Based on the results, it
 *   sets a return code (1-5) and modifies bits in DAT_0003c022, DAT_0003c02b, and other
 *   state variables. It may invoke a sequence of functions (set_two_globals_to_constants,
 *   clear_dat_0003c01e, etc.) and enter a loop if specific conditions are met.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte evaluate_state_transition(void)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  
  bVar2 = 0;
  bVar3 = false;
  _DAT_0003c262 = (uint16_t)_DAT_000000d8;
  iVar1 = update_status_flags_and_dispatch_000e70d2();
  if ((iVar1 == 1) || ((DAT_0003c05d & 0x20) != 0)) {
    DAT_0003c022 = DAT_0003c022 & 0xbf;
    DAT_0003c02b = DAT_0003c02b & 0xbf;
    bVar3 = true;
    bVar2 = 1;
  }
  else if (((((((_DAT_00000001 & 0x2000000) == 0) || ((DAT_0003c022 & 0x40) != 0)) ||
             ((DAT_0003c330 & 2) != 0)) ||
            (((DAT_0003c330 & 4) != 0 || ((DAT_0003c038 & 0x20) != 0)))) &&
           ((_DAT_00000001 & 0x4000000) == 0)) && ((DAT_0003c021 & 2) == 0)) {
    if ((((DAT_0003c58b & 2) == 0) && ((DAT_0003c036 & 1) == 0)) &&
       (((DAT_0003c58b & 0x40) == 0 &&
        ((((DAT_0003c58b & 0x80) == 0 && ((DAT_0003c395 & 0x40) == 0)) &&
         ((DAT_0003c038 & 0x20) == 0)))))) {
      DAT_0003c022 = DAT_0003c022 & 0xbf;
      DAT_0003c02b = DAT_0003c02b & 0xbf;
      bVar3 = true;
      bVar2 = 3;
    }
    else if ((((DAT_0003ce06 & 0x80) == 0) && ((DAT_0003c021 & 1) != 0)) &&
            (((DAT_0003c127 & 1) == 0 && ((DAT_0003c038 & 0x20) == 0)))) {
      bVar3 = (DAT_0003ce06 & 0x10) != 0;
      if (bVar3) {
        DAT_0003c022 = DAT_0003c022 & 0xbf;
        DAT_0003c02b = DAT_0003c02b & 0xbf;
      }
      bVar2 = 4;
    }
    else if ((((DAT_0003f3e1 & 0x80) == 0) && ((DAT_0003c066 & 2) == 0)) &&
            (((DAT_00000005 & 4) != 0 ||
             ((iVar1 = check_two_flag_conditions_000e6c7e(), iVar1 != 0 || ((DAT_0003c321 & 2) != 0)))))) {
      if ((DAT_0003c022 & 0x40) == 0) {
        if (((DAT_0003c330 & 2) != 0) || ((DAT_0003c330 & 4) != 0)) {
          if ((DAT_0003c02b & 0x40) == 0) {
            DAT_0003c02b = DAT_0003c02b | 0x40;
            _DAT_0003c05e = 0;
          }
          else {
            _DAT_0003c05e = _DAT_0003c05e + 1;
          }
        }
      }
      else if ((DAT_0003c02b & 0x40) == 0) {
        if ((DAT_0003c022 & 0x40) == 0) {
          DAT_0003c02b = DAT_0003c02b & 0xbf;
        }
        else {
          DAT_0003c02b = DAT_0003c02b | 0x40;
        }
        _DAT_0003c05e = 0;
      }
      else {
        _DAT_0003c05e = _DAT_0003c05e + 1;
      }
      if (999 < _DAT_0003c05e) {
        _DAT_0003c05e = 0;
        DAT_0003c022 = DAT_0003c022 & 0xbf;
        DAT_0003c02b = DAT_0003c02b & 0xbf;
        if ((DAT_0003c330 & 0x10) == 0) {
          DAT_0003c330 = DAT_0003c330 & 0xf9;
        }
        DAT_0003c038 = DAT_0003c038 & 0xfb;
        bVar3 = true;
        bVar2 = 5;
      }
    }
    else {
      iVar1 = check_and_clear_state_flags_000e6ca2();
      if (iVar1 != 1) {
        set_two_globals_to_constants();
        clear_dat_0003c01e();
        clear_flag_bits_in_globals_000e5f86();
        DAT_0003c038 = DAT_0003c038 & 0x7f;
        if ((DAT_0003c003 & 0x10) != 0) {
          DAT_0003c00b = DAT_0003c00b & 0xf7;
          write_byte_to_ram_and_call_two_routines(10,DAT_0003c00b);
        }
        if ((_DAT_00000001 & 1) == 0) {
          DAT_0003c030 = DAT_0003c030 & 0xfe;
        }
        else {
          DAT_0003c030 = DAT_0003c030 | 1;
        }
        if ((_DAT_00000001 & 3) >> 1 == 0) {
          DAT_0003c030 = DAT_0003c030 & 0xfd;
        }
        else {
          DAT_0003c030 = DAT_0003c030 | 2;
        }
        DAT_0003c06e = DAT_0003c06e & 0xf8;
        update_status_flag_bits_000cb4c6();
        DAT_000000f6 = DAT_000000f6 & 0x7f;
        bVar2 = process_frame_timing_state();
        DAT_0003c06e = DAT_0003c06e & 0xf8 | bVar2 & 7;
        DAT_000000f6 = DAT_000000f6 | 0x80;
        iVar1 = check_unknown_flag_condition();
        if (iVar1 == 0) {
          DAT_0003c07f = DAT_0003c07f & 0xf7;
          DAT_0003c02b = DAT_0003c02b | 8;
        }
        else {
          DAT_0003c07f = DAT_0003c07f | 8;
          DAT_0003c02b = DAT_0003c02b & 0xf7;
        }
        update_status_flags_from_dat();
        if (((((DAT_0003c06e & 7) == 0) && ((DAT_0003c036 & 1) == 0)) &&
            ((DAT_0003c395 & 0x10) != 0)) && ((DAT_0003c58b & 1) != 0)) {
          check_flag_and_call_helper_000db7e6();
          DAT_0003c198 = DAT_0003c198 & 0xf8;
        }
        if ((DAT_0003c003 & 0x10) == 0) {
          DAT_0003c00b = DAT_0003c00b | 8;
          write_byte_to_ram_and_call_two_routines(10,DAT_0003c00b);
        }
        FUN_000f040e();
        DAT_0003c07e = DAT_0003c07e | 0x40;
        if ((DAT_0003c038 & 0x20) != 0) {
          DAT_0003c05d = DAT_0003c05d | 0x20;
        }
        DAT_0003c038 = DAT_0003c038 | 0x80;
        clear_and_set_state_flags();
        if ((DAT_0003c02f & 1) == 0) {
          update_status_flags_and_dispatch_000e70d2();
          do {
            clear_dat_0003c01e();
            run_camera_state_loop_000e4eaa();
LAB_000e3c4e:
            do {
              FUN_000e52be();
              clear_dat_0003c01e();
              wait_for_state_flag_clear();
              iVar1 = FUN_000e4d52();
            } while (iVar1 != 1);
          } while( true );
        }
        DAT_0003c07e = DAT_0003c07e & 0xbf;
        DAT_0003f55e = DAT_0003f55e & 0xf7;
        goto LAB_000e3c4e;
      }
      bVar3 = true;
      bVar2 = 5;
    }
  }
  else {
    DAT_0003c022 = DAT_0003c022 & 0xbf;
    DAT_0003c02b = DAT_0003c02b & 0xbf;
    bVar3 = true;
    bVar2 = 2;
  }
  DAT_0003c067 = DAT_0003c067 & 0xfb;
  if ((bVar3) && (((DAT_0003c330 & 2) != 0 || ((DAT_0003c330 & 4) != 0)))) {
    DAT_0003c06e = DAT_0003c06e & 0xf8 | bVar2;
    DAT_0003c067 = DAT_0003c067 | 4;
  }
  return bVar2;
}
