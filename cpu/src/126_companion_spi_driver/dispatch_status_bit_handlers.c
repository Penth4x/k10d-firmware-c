/* @k10d dispatch_status_bit_handlers @ 0x1043d024
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Tests bits of a masked status word and calls a handler with a code for each matching
 *   condition.
 * summary:
 *   Gated on param_2 == 0x23, the function computes a masked status word from 0x6b000010
 *   and 0x6b000030, then tests five bit positions (0x1000000 through 0x10000000). For each
 *   set bit, it checks specific bit patterns in registers at 0x5c006007, 0x5c006017,
 *   0x5c005000, 0x5c009000, and 0x5c000002/0x5c000004, calling
 *   dispatch_event_to_matching_handlers_1043d1a0 with param_1 and a distinct code
 *   (0x45-0x49) when patterns match. Returns the last handler result or 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1043d038) overlaps instruction at (ram,0x1043d036)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t dispatch_status_bit_handlers(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  uint32_t uVar4;
  uint uVar5;
  
  bVar3 = bRam5c006007;
  if (param_2 == 0x23) {
    uVar4 = 0;
    uVar5 = (_DAT_6b000010 ^ 0xffffffff) & uRam6b000030;
    if ((uVar5 & 0x1000000) != 0) {
      if ((bRam5c006007 & 0x50) == 0x50) {
        uVar4 = dispatch_event_to_matching_handlers_1043d1a0(param_1,0x45,0);
      }
      if ((bVar3 & 0x28) == 0x28) {
        uVar4 = dispatch_event_to_matching_handlers_1043d1a0(param_1,0x45,0);
      }
      if ((bVar3 & 0x24) == 0x24) {
        uVar4 = dispatch_event_to_matching_handlers_1043d1a0(param_1,0x45,0);
      }
    }
    bVar3 = bRam5c006017;
    if ((uVar5 & 0x2000000) != 0) {
      if ((bRam5c006017 & 0x50) == 0x50) {
        uVar4 = dispatch_event_to_matching_handlers_1043d1a0(param_1,0x46,0);
      }
      if ((bVar3 & 0x28) == 0x28) {
        uVar4 = dispatch_event_to_matching_handlers_1043d1a0(param_1,0x46,0);
      }
      if ((bVar3 & 0x24) == 0x24) {
        uVar4 = dispatch_event_to_matching_handlers_1043d1a0(param_1,0x46,0);
      }
    }
    bVar3 = bRam5c005000;
    if ((uVar5 & 0x4000000) != 0) {
      if ((bRam5c005000 & 3) == 3) {
        uVar4 = dispatch_event_to_matching_handlers_1043d1a0(param_1,0x47,0);
      }
      if ((bVar3 & 0xc0) == 0xc0) {
        uVar4 = dispatch_event_to_matching_handlers_1043d1a0(param_1,0x47,0);
      }
    }
    uVar1 = uRam5c009000;
    if ((uVar5 & 0x8000000) != 0) {
      if ((uRam5c009000 & 10) == 10) {
        uVar4 = dispatch_event_to_matching_handlers_1043d1a0(param_1,0x48,0);
      }
      if ((uVar1 & 5) == 5) {
        uVar4 = dispatch_event_to_matching_handlers_1043d1a0(param_1,0x48,0);
      }
    }
    uVar2 = uRam5c000004;
    uVar1 = uRam5c000002;
    if ((uVar5 & 0x10000000/*ROM*/) != 0) {
      if (((uRam5c000002 & 0x1000) != 0) && ((uRam5c000004 & 8) != 0)) {
        uVar4 = dispatch_event_to_matching_handlers_1043d1a0(param_1,0x49,0);
      }
      if (((uVar1 & 0x800) != 0) && ((uVar2 & 4) != 0)) {
        uVar4 = dispatch_event_to_matching_handlers_1043d1a0(param_1,0x49,0);
      }
      if (((uVar1 & 0x400) != 0) && ((uVar2 & 2) != 0)) {
        uVar4 = dispatch_event_to_matching_handlers_1043d1a0(param_1,0x49,0);
      }
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
