/* @k10d dispatch_pending_event_flags_000d71a6 @ 0x000d71a6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Checks two 8-bit flag registers and calls a specific handler for each set bit, clearing
 *   the bit before dispatch.
 * summary:
 *   The function iterates through bits 0-7 of DAT_0003c33b and DAT_0003c33a. For each set
 *   bit, it clears the bit in the register and invokes a corresponding callee function
 *   (e.g., FUN_000d6396 for bit 0 of the first register). Some branches also update state
 *   variables like _DAT_0003c2ca or manipulate stack values before calling the handler. The
 *   pattern is consistent with a software interrupt or event queue dispatcher.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_pending_event_flags_000d71a6(void)

{
  ushort uVar1;
  uint8_t uVar2;
  uintptr_t sp;
  uint8_t *puVar3;
  uint8_t *puVar4;
  uint in_ps;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  
  bVar8 = 0;
  bVar7 = 0;
  puVar3 = &stack0xffffffec;
  puVar4 = &stack0xffffffec;
  if ((DAT_0003c33b & 1) != 0) {
    DAT_0003c33b = DAT_0003c33b & 0xfe;
    FUN_000d6396();
    puVar4 = puVar3;
  }
  if ((DAT_0003c33b & 2) != 0) {
    DAT_0003c33b = DAT_0003c33b & 0xfd;
    call_d5afc_with_0xc1();
  }
  if ((DAT_0003c33b & 4) != 0) {
    DAT_0003c33b = DAT_0003c33b & 0xfb;
    clear_low_nibble_and_write();
    uVar1 = _DAT_0003c2ca;
    _DAT_0003c2ca = _DAT_0003c2ca & 0xff;
    if ((DAT_00000005 & 0x20) != 0) {
      DAT_0003c2cb = (uint8_t)uVar1;
      _DAT_0003c2ca = CONCAT11(2,DAT_0003c2cb);
    }
    if ((DAT_00000005 & 0x40) == 0) {
      _DAT_0003c2ca = _DAT_0003c2ca | 0x100;
    }
    FUN_000d63b2();
  }
  if ((DAT_0003c33b & 8) != 0) {
    DAT_0003c33b = DAT_0003c33b & 0xf7;
    _DAT_0003c2ca = _DAT_0003c404;
    call_subroutine_with_arg_0xc3();
  }
  if ((DAT_0003c33b & 0x10) != 0) {
    DAT_0003c33b = DAT_0003c33b & 0xef;
    update_low_address_byte_state();
    configure_timer_channels();
    update_two_counter_deltas();
    FUN_000d63ce();
  }
  if ((DAT_0003c33b & 0x20) != 0) {
    DAT_0003c33b = DAT_0003c33b & 0xdf;
    update_state_machine_flags();
    dispatch_state_transition_000dfe8e();
    call_d5afc_with_0xc5();
  }
  if ((DAT_0003c33b & 0x40) != 0) {
    DAT_0003c33b = DAT_0003c33b & 0xbf;
    FUN_000d9e2c();
    process_camera_state_flags_000c4a56();
    call_subroutine_with_ten();
    dispatch_mode_transition_sequence();
    call_subroutine_with_ten();
    FUN_000d9e2c();
    process_camera_state_flags_000c4a56();
    call_subroutine_with_ten();
    dispatch_mode_transition_sequence();
    FUN_000d63ea();
  }
  bVar5 = 0;
  bVar6 = 0;
  if ((DAT_0003c33b & 0x80) != 0) {
    bVar5 = 0;
    bVar6 = 0;
    DAT_0003c33b = DAT_0003c33b & 0x7f;
    call_four_initialization_routines_000e25aa();
    FUN_000d63f8();
  }
  if ((DAT_0003c33a & 1) != 0) {
    DAT_0003c33a = DAT_0003c33a & 0xfe;
    uVar2 = FUN_000e2fc2(DAT_0003c40b);
    _DAT_0003c2ca = CONCAT11(uVar2,DAT_0003c2cb);
    FUN_000d6406();
  }
  if ((DAT_0003c33a & 2) != 0) {
    DAT_0003c33a = DAT_0003c33a & 0xfd;
    _DAT_0003c21e = (ushort)DAT_0003c40c;
    accumulate_ten_sample_values_000e9304();
    _DAT_0003c2ca = _DAT_0003c210;
    FUN_000d6414();
  }
  if ((DAT_0003c33a & 4) != 0) {
    DAT_0003c33a = DAT_0003c33a & 0xfb;
    *(uint *)(puVar4 + -4) =
         in_ps & 0xffffffc0 | (uint)(bVar8 & 1) * 0x20 | (uint)(bVar7 & 1) * 0x10 |
         (uint)(bVar6 & 1) * 2 | (uint)(bVar5 & 1);
    _DAT_0003c2ca = dispatch_command_by_index(DAT_0003c40d);
    FUN_000d6422();
  }
  if ((DAT_0003c33a & 8) != 0) {
    DAT_0003c33a = DAT_0003c33a & 0xf7;
    FUN_000d73f2();
    call_d5afc_with_0xcb();
  }
  if ((DAT_0003c33a & 0x10) != 0) {
    DAT_0003c33a = DAT_0003c33a & 0xef;
    sample_eight_channel_min_max_000e267a();
    process_camera_state_flags_000c4a56();
    _DAT_0003c2ca = *(ushort *)((uint)DAT_0003c40f * 4 + 0x3c500);
    _DAT_0003c2cc = *(uint16_t *)(((uint)DAT_0003c40f * 2 + 1) * 2 + 0x3c500);
    FUN_000d643e();
  }
  if ((DAT_0003c33a & 0x80) != 0) {
    DAT_0003c33a = DAT_0003c33a & 0x7f;
    _DAT_0003c2ca = CONCAT11(DAT_0003c3ca,DAT_0003c2cb);
    FUN_000d644c();
  }
  return;
}
