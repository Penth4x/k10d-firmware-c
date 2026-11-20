/* @k10d update_state_flags_and_value_000c6ea2 @ 0x000c6ea2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Copies a 12-byte table to the stack, updates bit flags in DAT_0003c4d5, and stores a
 *   computed value to DAT_0003c468.
 * summary:
 *   The function initializes a local array by copying 12 bytes from PTR_LAB_000fa138. It
 *   then manipulates bit flags in DAT_0003c4d5 based on the state of DAT_0003c035 and
 *   DAT_0003c3b8. Finally, it selects a value from the local array (or a default) and
 *   writes it to DAT_0003c468 if the value is not 0xff. No external functions are called.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_state_flags_and_value_000c6ea2(void)

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
    *(uint32_t *)((int)auStack_34 + iVar4) = *(uint32_t *)((int)&PTR_LAB_000fa138 + iVar4);
    iVar4 = iVar3;
  } while (bVar1 && iVar3 != 0);
  uVar2 = (uint)DAT_0003c468;
  if ((DAT_0003c035 & 8) == 0) {
    if ((DAT_0003c4d5 & 1) == 0) {
      DAT_0003c4d5 = DAT_0003c4d5 | 1;
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
    DAT_0003c4d5 = DAT_0003c4d5 | 0x4e;
  }
  else {
    DAT_0003c4d5 = DAT_0003c4d5 & 0xfe;
  }
  if (uVar2 != 0xff) {
    DAT_0003c468 = (byte)uVar2;
  }
  return;
}
