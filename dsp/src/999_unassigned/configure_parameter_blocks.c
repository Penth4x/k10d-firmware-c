/* @k10d configure_parameter_blocks @ 0x000cfb04
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Sets up a series of parameter blocks by calling helper functions with calculated
 *   offsets and constants.
 * summary:
 *   The function clears bits in DAT_000000d1 and DAT_000000f6, then branches based on the
 *   return value of poll_flag_and_return_bits and the 0x80 bit of DAT_0003ce09. It
 *   repeatedly calls dispatch_mode_transition_000cfe18 or build_structured_message_buffer
 *   with varying parameters to initialize structures, using values from globals like
 *   DAT_0003f274. Finally, it restores the cleared bits and returns a stack value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t configure_parameter_blocks(void)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  uintptr_t sp;
  int *piVar4;
  uint8_t auStack_20 [4];
  uint32_t uStack_1c;
  
  piVar4 = (int *)auStack_20;
  uStack_1c = 0xe;
  check_two_flag_conditions_000cc6f0();
  if (_DAT_0003ce7c != 0) {
    do {
    } while (_DAT_0003ce7c < 0xb);
    if (0x27 < _DAT_0003ce7c) {
      do {
        if (_DAT_0003ce7c == 0) break;
      } while (_DAT_0003ce7c < 0x65);
    }
  }
  DAT_000000d1 = DAT_000000d1 & 0xfe;
  DAT_000000f6 = DAT_000000f6 & 0x7f;
  iVar1 = poll_flag_and_return_bits();
  if (iVar1 == 0) {
    if ((DAT_0003ce09 & 0x80) == 0) {
      _DAT_0003cfcc = 0x3ec02;
      iVar1 = (0x26 - (uint)DAT_0003f274) * 2;
      *piVar4 = iVar1 + 0x3d0e8;
      dispatch_mode_transition_000cfe18(2,0x1c9,0,iVar1 + 0x3d000,*piVar4);
      _DAT_0003cfcc = 0x3ecea;
      iVar1 = (0x26 - (uint)DAT_0003f276) * 2;
      *piVar4 = iVar1 + 0x3d2b8;
      dispatch_mode_transition_000cfe18(0,0x1d1,0,iVar1 + 0x3d1d0,*piVar4);
      _DAT_0003cfcc = 0x3edd2;
      iVar1 = (0x26 - (uint)DAT_0003f274) * 2;
      *piVar4 = iVar1 + 0x3d488;
      dispatch_mode_transition_000cfe18(1,0x1d9,0,iVar1 + 0x3d3a0,*piVar4);
      *piVar4 = 0x3dbe0;
      dispatch_mode_transition_000cfe18(3,0x790,0x660,0x3db30,*piVar4);
      _DAT_0003cfcc = 0x3eeba;
      iVar1 = (0x2c - (uint)DAT_0003f279) * 2;
      *piVar4 = iVar1 + 0x3d620;
      dispatch_mode_transition_000cfe18(4,0x660,0x550,iVar1 + 0x3d570,*piVar4);
      _DAT_0003cfcc = 0x3ef6a;
      iVar1 = (0x2c - (uint)DAT_0003f27b) * 2;
      *piVar4 = iVar1 + 0x3d780;
      dispatch_mode_transition_000cfe18(5,0x550,0x440,iVar1 + 0x3d6d0,*piVar4);
      _DAT_0003cfcc = 0x3f01a;
      iVar1 = (0x2c - (uint)DAT_0003f279) * 2;
      *piVar4 = iVar1 + 0x3d8e0;
      dispatch_mode_transition_000cfe18(6,0x440,0x330,iVar1 + 0x3d830,*piVar4);
      *piVar4 = 0x3dd40;
      dispatch_mode_transition_000cfe18(7,0x330,0x220,0x3dc90,*piVar4);
      _DAT_0003cfcc = 0x3f0ca;
      *piVar4 = 0x3d9f8;
      dispatch_mode_transition_000cfe18(8,0x220,0x110,0x3d990,*piVar4);
      _DAT_0003cfcc = 0x3f132;
      *piVar4 = 0x3dac8;
      dispatch_mode_transition_000cfe18(9,0x110,0,0x3da60,*piVar4);
    }
    else {
      iVar1 = 4;
      iVar3 = 2;
      do {
        compute_indexed_status_word(iVar1);
        compute_indexed_status_word(iVar1 + 1);
        compute_indexed_status_word(iVar1 + 2);
        iVar1 = iVar1 + 3;
        iVar3 = iVar3 + -1;
      } while (0 < iVar3);
      DAT_00000074 = DAT_0003f492;
      DAT_00000073 = 0xb2;
      DAT_00000072 = 0x13;
      DAT_00000070 = 0;
      DAT_00000077 = 2;
      uVar2 = build_structured_message_buffer(2,0x1cb,(uint16_t *)0x3d000);
      uVar2 = build_structured_message_buffer(0,0x1d3,uVar2);
      uVar2 = build_structured_message_buffer(1,0x1db,uVar2);
      uVar2 = build_structured_message_buffer(3,0x129,uVar2);
      uVar2 = build_structured_message_buffer(4,0x110,uVar2);
      uVar2 = build_structured_message_buffer(5,0x110,uVar2);
      uVar2 = build_structured_message_buffer(6,0x110,uVar2);
      uVar2 = build_structured_message_buffer(7,0x110,uVar2);
      uVar2 = build_structured_message_buffer(8,0x110,uVar2);
      build_structured_message_buffer(9,0x119,uVar2);
    }
    uStack_1c = 0xc;
  }
  DAT_000000d1 = DAT_000000d1 | 1;
  DAT_000000f6 = DAT_000000f6 | 0x80;
  return uStack_1c;
}
