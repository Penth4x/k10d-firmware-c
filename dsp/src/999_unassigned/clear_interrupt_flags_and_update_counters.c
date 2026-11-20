/* @k10d clear_interrupt_flags_and_update_counters @ 0x000ea250
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Clears specific bits in global status registers and increments several counter
 *   variables.
 * summary:
 *   The function calls FUN_000d5820, then performs bitwise operations on multiple global
 *   variables (DAT_0003c023, bRam00000000, DAT_0000000a, etc.) to clear or set specific
 *   flags. It also moves the value from DAT_00000420 to DAT_0003c274 and resets
 *   DAT_00000420 to zero. The role of the specific flags and counters is not determinable
 *   from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clear_interrupt_flags_and_update_counters(void)

{
  uintptr_t sp;
  uint8_t *puVar1;
  uint in_ps;
  byte in_CF;
  byte in_VF;
  byte in_ZF;
  byte in_NF;
  byte bVar2;
  byte bVar3;
  
  bVar3 = 0;
  bVar2 = 0;
  puVar1 = &stack0xfffffff4;
  FUN_000d5820();
  DAT_0003c023 = DAT_0003c023 & 0xbf;
  *(uint *)(puVar1 + -4) =
       in_ps & 0xffffffc0 | (uint)(bVar3 & 1) * 0x20 | (uint)(bVar2 & 1) * 0x10 |
       (uint)(in_NF & 1) * 8 | (uint)(in_ZF & 1) * 4 | (uint)(in_VF & 1) * 2 | (uint)(in_CF & 1);
  _DAT_0003c014 = *(uint32_t *)(puVar1 + -4);
  DAT_0003c274 = DAT_00000420;
  DAT_00000420 = 0;
  bRam00000000 = bRam00000000 & 0xf9 | 1;
  DAT_0000000a = DAT_0000000a | 1;
  DAT_0000040a = DAT_0000040a | 1;
  DAT_00000400 = DAT_00000400 & 0xfe;
  DAT_00000002 = DAT_00000002 | 4;
  return;
}
