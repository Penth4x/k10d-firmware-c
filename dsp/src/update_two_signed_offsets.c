/* @k10d update_two_signed_offsets @ 0x000d4ece
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Conditionally computes and stores two clamped signed 8-bit offset values into a per-
 *   instance structure.
 * summary:
 *   Gated by bit 5 of DAT_0003cbef, the function calls populate_global_state_from_index
 *   twice and shifts DAT_0003cd47 right by 1 each time. It computes a difference between
 *   _DAT_0003cbf0 and a short value at offset 0x3cbf2 in the param_1-scaled structure,
 *   clamps it to [-0x80, 0x7e], and writes the result to offsets 0x3cec0 and 0x3cec1. The
 *   computation is only performed if specific bits in DAT_0003cb9b are set and
 *   dispatch_state_machine_000d52dc returns 3.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_two_signed_offsets(int param_1)

{
  uint8_t uVar1;
  byte bVar2;
  uint8_t uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = DAT_0003cbd4;
  bVar2 = DAT_0003cb9b;
  uVar1 = DAT_0003cb80;
  if ((DAT_0003cbef & 0x20) != 0) {
    DAT_0003cb80 = 0;
    DAT_0003cbd4 = 0;
    populate_global_state_from_index(param_1);
    DAT_0003cd47 = DAT_0003cd47 >> 1;
    DAT_0003cc93 = 4;
    iVar6 = 0x7f;
    if (((bVar2 & 5) == 5) && (iVar4 = dispatch_state_machine_000d52dc(), iVar4 == 3)) {
      iVar6 = (int)_DAT_0003cbf0 - (int)*(short *)(param_1 * 2 + 0x3cbf2);
      if (iVar6 < 0x7f) {
        if (iVar6 < -0x80) {
          iVar6 = 0x80;
        }
      }
      else {
        iVar6 = 0x7e;
      }
    }
    iVar4 = param_1 * 2;
    *(char *)(iVar4 + 0x3cec0) = (char)iVar6;
    DAT_0003cb80 = 0;
    DAT_0003cbd4 = 0;
    populate_global_state_from_index(param_1);
    DAT_0003cd47 = DAT_0003cd47 >> 1;
    DAT_0003cc93 = 4;
    _DAT_0003cc88 = (uint)DAT_0003cd47 * 2 + _DAT_0003cc88;
    _DAT_0003cc8c = (uint)DAT_0003cd47 * 2 + _DAT_0003cc8c;
    iVar6 = 0x7f;
    if (((bVar2 >> 1 & 5) == 5) && (iVar5 = dispatch_state_machine_000d52dc(), iVar5 == 3)) {
      iVar6 = (int)_DAT_0003cbf0 - (int)*(short *)(iVar4 + 0x3cbf2);
      if (iVar6 < 0x7f) {
        if (iVar6 < -0x80) {
          iVar6 = 0x80;
        }
      }
      else {
        iVar6 = 0x7e;
      }
    }
    *(char *)(iVar4 + 0x3cec1) = (char)iVar6;
  }
  DAT_0003cb80 = uVar1;
  DAT_0003cbd4 = uVar3;
  return;
}
