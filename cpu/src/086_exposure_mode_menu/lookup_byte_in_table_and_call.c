/* @k10d lookup_byte_in_table_and_call @ 0x103f19b0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 086_exposure_mode_menu (unit names are model-proposed)
 * purpose:
 *   Scans a 4-byte table for a match with param_2, returns the offset (or 0xff), and passes
 *   it to a callee.
 * summary:
 *   The function iterates over four consecutive bytes in ROM starting at 0x10597a4e. It
 *   compares each byte to param_2 and records the relative offset (0-3) of the first match
 *   in uVar2, defaulting to 0xff if no match is found. Finally, it calls
 *   dispatch_seven_virtual_commands_103f1580 with param_1 and the resulting offset. The
 *   caller is a virtual method of class cls_10597b5c.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void lookup_byte_in_table_and_call(void *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = 0xff;
  iVar4 = 1;
  uVar1 = 0;
  do {
    uVar3 = uVar1;
    if (*(byte *)(uVar3 + 0x10597a4e/*ROM*/) == param_2) {
      uVar2 = uVar3 & 0xff;
    }
    if (*(byte *)(uVar3 + 0x10597a4f/*ROM*/) == param_2) {
      uVar2 = uVar3 + 1 & 0xff;
    }
    if (*(byte *)(uVar3 + 0x10597a50/*ROM*/) == param_2) {
      uVar2 = uVar3 + 2 & 0xff;
    }
    iVar4 = iVar4 + -1;
    uVar1 = uVar3 + 3;
  } while (-1 < iVar4);
  if (*(byte *)(uVar3 + 0x10597a51/*ROM*/) == param_2) {
    uVar2 = uVar3 + 3 & 0xff;
  }
  dispatch_seven_virtual_commands_103f1580(param_1,uVar2);
  return;
}
