/* @k10d run_state_machine_sequence @ 0x000ea7fa
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Executes a complex state machine sequence involving flag polling, conditional delays,
 *   and status code returns.
 * summary:
 *   The function manipulates multiple global flag registers (e.g., DAT_0003c1ed,
 *   DAT_0003f3e1) and polls status bits in DAT_00000005 and DAT_00000001. It calls numerous
 *   subroutines (e.g., update_low_three_bits_if_flag_set, initialize_state_block) in
 *   specific orders based on flag states, often inserting delays. It returns a short status
 *   code (0, 2, or 5) indicating the outcome of the sequence.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short run_state_machine_sequence(void)

{
  int iVar1;
  ushort uVar2;
  short sStack_1a;
  
  sStack_1a = 0;
  FUN_000ed7b6();
  copy_and_mask_four_bytes();
  DAT_0003c1ed = DAT_0003c1ed & 0xfc | 0x80;
  DAT_0003c1ea = DAT_0003c1ea & 99;
  if (((DAT_0003f3e1 & 2) != 0) &&
     ((DAT_0003c214 = DAT_0003c214 & 0xf7, (DAT_0003c035 & 0x60) == 0 ||
      ((DAT_0003c035 & 0x7f) >> 5 == 3)))) {
    DAT_0003c214 = DAT_0003c214 | 8;
    do {
    } while ((DAT_00000001 & 2) == 0);
  }
  if ((DAT_0003f3e1 & 0x80) == 0) {
    if ((DAT_0003c066 & 2) == 0) {
      if ((DAT_00000005 & 4) != 0) {
        return 5;
      }
      DAT_0000000a = DAT_0000000a | 0x80;
      if (((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) {
        write_three_bytes_to_low_memory();
        set_two_byte_state_pair_000ecd94();
        if ((DAT_0003c003 & 0x10) != 0) {
          _DAT_000000d4 = CONCAT31(_DAT_000000d4,0x13);
          _DAT_0003c262 = (short)_DAT_000000d4 << 2;
        }
        initialize_state_block(_DAT_0003c262);
      }
      while ((DAT_00000005 & 2) == 0) {
        if (((DAT_00000005 & 4) != 0) || (iVar1 = check_two_flag_conditions_000e6c7e(), iVar1 == 1)) {
          DAT_0000000a = DAT_0000000a & 0x7f;
          DAT_00000056 = 0;
          return 5;
        }
        if ((DAT_00000001 & 4) != 0) {
          sStack_1a = 2;
          DAT_00000056 = 0;
          break;
        }
        if ((((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) &&
           ((DAT_00000057 & 4) != 0)) {
          DAT_00000057 = DAT_00000057 & 0xfb;
          set_two_byte_state_pair_000ecd94();
          initialize_state_block(1000);
        }
      }
    }
  }
  else if ((DAT_0003f3e1 & 0x40) == 0) {
    uVar2 = 0;
    do {
      FUN_000d5642(1);
      if ((DAT_0003c396 & 0x10) == 0) {
        set_two_byte_state_pair_000ecd94();
        initialize_state_block(1000);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 10);
  }
  if (sStack_1a == 0) {
    DAT_0003c1ed = DAT_0003c1ed & 0xef;
    if (((DAT_0003f3e1 & 0x80) == 0) && ((DAT_00000005 & 4) != 0)) {
      DAT_0000000a = DAT_0000000a & 0x7f;
      return 5;
    }
    if ((DAT_0003c447 == '\x03') || (DAT_0003c447 == '\x05')) {
      DAT_0003c1ed = DAT_0003c1ed | 0x10;
      update_flag_bit_from_state_000ec6e2();
    }
    else {
      dispatch_on_state_flags_000ec0d6();
    }
    if (((DAT_00000001 & 4) == 0) && (((DAT_0003c000 & 8) != 0 || ((DAT_0003c391 & 4) != 0)))) {
      update_low_three_bits_if_flag_set(1);
      FUN_000eaf7a();
      if (((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) {
        store_param_and_call_sequence(2);
      }
      else {
        store_param_and_call_sequence(0);
      }
      if (((DAT_0003f3e1 & 1) == 0) && ((DAT_0003c396 & 0x10) == 0)) {
        run_timed_polling_loop();
      }
      else {
        FUN_000ecd00();
        FUN_000d5642(100);
        set_three_byte_flags_000ecde4();
      }
      if ((DAT_0003c1e7 & 0x10) == 0) {
        iVar1 = poll_status_flag_with_timeout();
        if (iVar1 == 0) {
          DAT_0003c1eb = DAT_0003c1eb & 0x7f;
          if ((DAT_0003c1ed & 0x10) != 0) {
            dispatch_on_state_flags_000ec0d6();
            dispatch_event_by_code_000da3b8();
          }
          if (((DAT_00000001 & 4) == 0) && (iVar1 = check_and_set_flag_if_conditions_met(), iVar1 == 0)) {
            if (((DAT_0003f3e1 & 0x80) == 0) && ((DAT_0003c066 & 2) == 0)) {
              DAT_0000000a = DAT_0000000a & 0x7f;
              DAT_00000050 = 0x97;
              DAT_00000056 = 3;
              while ((DAT_00000005 & 2) != 0) {
                if (((DAT_00000057 & 4) != 0) && ((DAT_00000001 & 4) != 0)) {
                  DAT_0003c1ea = DAT_0003c1ea | 0x10;
                }
                if ((((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) &&
                   ((DAT_0000004f & 4) != 0)) {
                  DAT_0000004f = DAT_0000004f & 0xfb;
                  update_status_flags_and_counters_000de274(1000);
                }
              }
              if (((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) {
                do {
                } while ((DAT_0000004f & 4) == 0);
                DAT_0000004f = DAT_0000004f & 0xfb;
                update_status_flags_and_counters_000de274(1000);
              }
              DAT_00000056 = 0;
            }
          }
          else {
            DAT_00000002 = DAT_00000002 & 0xfc;
            sStack_1a = 2;
          }
          if (sStack_1a == 0) {
            clear_three_status_bits();
            update_low_three_bits_if_flag_set(2);
            DAT_0003c00c = DAT_0003c00c | 4;
            write_masked_field_and_call_two_routines(0xb,DAT_0003c00c);
            if (((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) {
              do {
              } while ((DAT_0000004f & 4) == 0);
              DAT_0000004f = DAT_0000004f & 0xfb;
              set_three_byte_flags_000ecde4();
              set_two_byte_state_flags();
              update_status_flags_and_counters_000de274(1000);
              _DAT_0003c1e8 = 0;
              if (DAT_0003f3eb != 0) {
                do {
                  if ((DAT_0000004f & 4) != 0) {
                    _DAT_0003c1e8 = _DAT_0003c1e8 + 1;
                    DAT_0000004f = DAT_0000004f & 0xfb;
                    set_two_byte_state_flags();
                    update_status_flags_and_counters_000de274(1000);
                  }
                } while (_DAT_0003c1e8 < DAT_0003f3eb);
              }
            }
            _DAT_000000d4 = CONCAT31(_DAT_000000d4,0x13);
            if ((((DAT_0003c440 == '\b') || (DAT_0003c440 == '\x11')) || ((DAT_0003c4d1 & 8) != 0))
               || ((DAT_0003c4d0 & 0x40) != 0)) {
              _DAT_0003c1f0 = unsigned_divide(_DAT_000000d4,0xfa);
              _DAT_0003c1f0 = _DAT_0003c1f0 + 0xc;
            }
            else {
              _DAT_0003c1f0 = unsigned_divide(_DAT_000000d4,0xfa);
              _DAT_0003c1f0 = _DAT_0003c1f0 + 0x18;
            }
            if (((DAT_0003c036 & 1) == 0) && ((DAT_0003c58b & 0x40) != 0)) {
              _DAT_0003c1f0 = _DAT_0003c1f0 + 0x14;
            }
            wait_and_clear_flag_bit2();
            if (((DAT_0003c493 == '\t') || (DAT_0003c493 == '\b')) &&
               (((DAT_0003c4de & 0x10) != 0 && ((DAT_0003c036 & 1) == 0)))) {
              _DAT_0003c1f0 = _DAT_0003c1f0 + 0x14;
              _DAT_0003c1e8 = 0;
              do {
                if (((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) {
                  do {
                  } while ((DAT_0000004f & 4) == 0);
                  DAT_0000004f = DAT_0000004f & 0xfb;
                  update_status_flags_and_counters_000de274(1000);
                }
                _DAT_0003c1e8 = _DAT_0003c1e8 + 1;
              } while (_DAT_0003c1e8 < 0x14);
            }
            if ((DAT_0003c1ea & 0x10) == 0) {
              process_camera_state_update();
            }
            else {
              DAT_00000002 = DAT_00000002 & 0xfc;
            }
            DAT_0003c1ea = DAT_0003c1ea & 0xef;
            process_pending_state_flags();
            if ((DAT_0003f3e1 & 0x80) != 0) {
              FUN_000d5642(0x14);
            }
          }
          else {
            FUN_000da752();
            call_e31d6_with_0x1b_and_low_nibble();
            DAT_0003c4bf = DAT_0003c4bf & 0xf7;
          }
        }
        else {
          DAT_0003c1eb = DAT_0003c1eb | 0x80;
          FUN_000ec670();
          sStack_1a = 2;
        }
        if (((sStack_1a == 0) && ((DAT_0003f3e1 & 0x80) == 0)) && ((DAT_0003c066 & 2) == 0)) {
          DAT_0000000a = DAT_0000000a | 0x80;
          if (((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) {
            do {
            } while ((DAT_0000004f & 4) == 0);
            DAT_0000004f = DAT_0000004f & 0xfb;
            set_three_byte_flags_000ecde4();
            update_status_flags_and_counters_000de274(1000);
          }
          DAT_00000050 = 0xf;
          DAT_00000056 = 3;
          if (((DAT_0003c4d0 & 0x20) != 0) && ((DAT_0003c038 & 0x20) == 0)) {
            DAT_0003c041 = DAT_0003c041 + '\x01';
          }
          if ((((DAT_0003c447 == '\x01') || (DAT_0003c44a == '\x01')) ||
              ((DAT_0003c4d0 & 0x20) != 0)) && ((DAT_0003c391 & 2) == 0)) {
            DAT_0003f55e = DAT_0003f55e | 8;
          }
          else {
            DAT_0003f55e = DAT_0003f55e & 0xf7;
          }
          _DAT_0003c1e8 = 0;
          if (((DAT_0003c396 & 0x10) != 0) || ((DAT_0003f3e1 & 0x40) != 0)) {
            _DAT_0003c1e8 = 10;
          }
          while (((DAT_00000005 & 2) == 0 || (_DAT_0003c1e8 < 10))) {
            if (((DAT_0003c396 & 0x10) == 0) &&
               (((DAT_0003f3e1 & 0x40) == 0 && ((DAT_0000004f & 4) != 0)))) {
              DAT_0000004f = DAT_0000004f & 0xfb;
              _DAT_0003c1e8 = _DAT_0003c1e8 + 1;
              if (_DAT_0003c1e8 < 10) {
                update_status_flags_and_counters_000de274(1000);
              }
              else {
                update_global_state_flags(1000);
              }
            }
          }
          _DAT_0003c1e8 = 0;
          do {
            if (((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) {
              do {
              } while ((DAT_0000004f & 4) == 0);
              DAT_0000004f = DAT_0000004f & 0xfb;
              if (_DAT_0003c1e8 == 3) {
                set_two_byte_state_pair_000ecd94();
              }
              update_global_state_flags(1000);
            }
            _DAT_0003c1e8 = _DAT_0003c1e8 + 1;
          } while (_DAT_0003c1e8 < 4);
          execute_conditional_init_sequence();
          do {
          } while ((DAT_00000057 & 4) == 0);
          DAT_00000056 = 0;
          clear_bit_in_dat_0003c00b();
          FUN_000da752();
          call_e31d6_with_0x1b_and_low_nibble();
          DAT_0003c4bf = DAT_0003c4bf & 0xf7;
        }
        DAT_0003c1eb = DAT_0003c1eb & 0xf5;
        update_low_three_bits_if_flag_set(3);
        if (((DAT_0003f3e1 & 1) == 0) && ((DAT_0003c396 & 0x10) == 0)) {
          wait_for_status_flag();
          clear_three_flag_bits();
          DAT_0000004e = 0;
          DAT_00000056 = 0;
        }
        else {
          FUN_000d5642(0x32);
        }
      }
      else {
        sStack_1a = 2;
      }
      update_low_three_bits_if_flag_set(7);
    }
    else {
      sStack_1a = 2;
    }
  }
  if (((DAT_0003f3e1 & 0x80) == 0) && ((DAT_0003c066 & 2) == 0)) {
    if (sStack_1a != 0) {
      check_two_flag_conditions_000f04b2();
      FUN_000d5642(5);
    }
    DAT_0000000a = DAT_0000000a & 0x7f;
  }
  copy_four_bytes_between_dat();
  copy_and_send_two_values();
  DAT_0003c1ed = DAT_0003c1ed & 0x7f;
  return sStack_1a;
}
