/* @k10d dispatch_virtual_slot_three_10522630 @ 0x10522630
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 280_settings_manager (unit names are model-proposed)
 * purpose:
 *   Resolves and invokes a virtual method from a vtable based on an object field, then
 *   clears state fields.
 * summary:
 *   The function reads a byte at offset 0x30 of the object (param_1) to index into a table
 *   at 0x105d8ba0. It performs a two-level pointer dereference to find a function pointer
 *   and calls it with a computed 'this' pointer. After the call, it resets the byte at 0x30
 *   and the 4-byte field at 0x28 to zero. This is virtual method slot 3 of class
 *   cls_105d8bc8.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_slot_three_10522630(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  
  iVar2 = (uint)*(byte *)(param_1 + 0x30) * 8;
  iVar3 = *(short *)(&DAT_105d8ba0/*ROM*/ + iVar2) + param_1;
  pcVar1 = *(code **)(&DAT_105d8ba4/*ROM*/ + iVar2);
  if (-1 < *(short *)(&DAT_105d8ba2/*ROM*/ + iVar2)) {
    psVar4 = (short *)(*(int *)((short)pcVar1 + iVar3) + *(short *)(&DAT_105d8ba2/*ROM*/ + iVar2) * 8);
    iVar3 = *psVar4 + iVar3;
    pcVar1 = *(code **)(psVar4 + 2);
  }
  (*pcVar1)(iVar3);
  *(uint8_t *)(param_1 + 0x30) = 0;
  *(uint16_t *)(param_1 + 0x24) = 0;
  *(uint32_t *)(param_1 + 0x28) = 0;
  return;
}
