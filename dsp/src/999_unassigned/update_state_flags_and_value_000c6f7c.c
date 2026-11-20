/* @k10d update_state_flags_and_value_000c6f7c @ 0x000c6f7c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Copies a 12-byte block from DAT_000fa190 to the stack and updates flags in DAT_0003c4d5
 *   and DAT_0003c4de based on DAT_0003c035 and DAT_0003c3b8.
 * summary:
 *   The function first copies 12 bytes (0x2c down to 0) from DAT_000fa190 into a local
 *   stack array. It then checks bit 0 of DAT_0003c035. If clear, it sets bits 2, 3, and 5
 *   of DAT_0003c4d5 (and bit 7 of DAT_0003c4de if DAT_0003c3b8 is zero), and selects a
 *   value from the stack array or a default of 6. If bit 0 of DAT_0003c035 is set, it
 *   clears bit 2 of DAT_0003c4d5. Finally, it stores the selected value into DAT_0003c468
 *   if it is not 0xff. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_state_flags_and_value_000c6f7c(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uintptr_t sp;
  uint auStack_34 [12];
  int iVar4;
  
  iVar4 = 0x2c;
  do {
    iVar3 = iVar4 + -4;
    bVar1 = 3 < iVar4;
    *(uint32_t *)((int)auStack_34 + iVar4) = *(uint32_t *)((int)&DAT_000fa190 + iVar4);
    iVar4 = iVar3;
  } while (bVar1 && iVar3 != 0);
  uVar2 = (uint)DAT_0003c468;
  if ((DAT_0003c035 & 1) == 0) {
    if ((DAT_0003c4d5 & 4) == 0) {
      DAT_0003c4d5 = DAT_0003c4d5 | 4;
      if (DAT_0003c3b8 == '\0') {
        DAT_0003c4de = DAT_0003c4de | 0x80;
      }
      if (uVar2 == 0) {
        uVar2 = 6;
      }
      else {
        uVar2 = auStack_34[uVar2];
      }
    }
    DAT_0003c4d5 = DAT_0003c4d5 | 0x48;
  }
  else {
    DAT_0003c4d5 = DAT_0003c4d5 & 0xfb;
  }
  if (uVar2 != 0xff) {
    DAT_0003c468 = (byte)uVar2;
  }
  return;
}
