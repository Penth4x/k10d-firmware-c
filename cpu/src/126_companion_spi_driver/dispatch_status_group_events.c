/* @k10d dispatch_status_group_events @ 0x1043e4ae
 * name: model (proposed by the local model from the decompile, confidence 0.80)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Tests three group bits in a status word and calls a handler for each active sub-status
 *   register.
 * summary:
 *   Gated on param_2 being 0x24, the function computes a masked status word from 0x6b000034
 *   and 0x6b000014. It tests bits 24, 25, and 26 to select one of three groups of four
 *   status registers (0x5c00300a-0x5c003122). For each register where bits 4 and 5 are set
 *   (0x30), it calls dispatch_event_to_matching_handlers_1043e61e with param_1 and a
 *   sequential ID (0x31-0x3c). The 0x5c003000 region is outside the 0x5c000000-0x5c002fff
 *   display-controller I/O block listed in the brief, so its specific subsystem role is not
 *   confirmed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1043e4c2) overlaps instruction at (ram,0x1043e4c0)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t dispatch_status_group_events(cls_105a0920 *param_1,int param_2)

{
  uint32_t uVar1;
  uint uVar2;
  
  if (param_2 == 0x24) {
    uVar1 = 0;
    uVar2 = (_DAT_6b000014 ^ 0xffffffff) & uRam6b000034;
    if ((uVar2 & 0x1000000) != 0) {
      if ((uRam5c00300a & 0x30) == 0x30) {
        uVar1 = dispatch_event_to_matching_handlers_1043e61e((int)param_1,0x31,0);
      }
      if ((uRam5c003012 & 0x30) == 0x30) {
        uVar1 = dispatch_event_to_matching_handlers_1043e61e((int)param_1,0x32,0);
      }
      if ((uRam5c00301a & 0x30) == 0x30) {
        uVar1 = dispatch_event_to_matching_handlers_1043e61e((int)param_1,0x33,0);
      }
      if ((uRam5c003022 & 0x30) == 0x30) {
        uVar1 = dispatch_event_to_matching_handlers_1043e61e((int)param_1,0x34,0);
      }
    }
    if ((uVar2 & 0x2000000) != 0) {
      if ((uRam5c00308a & 0x30) == 0x30) {
        uVar1 = dispatch_event_to_matching_handlers_1043e61e((int)param_1,0x35,0);
      }
      if ((uRam5c003092 & 0x30) == 0x30) {
        uVar1 = dispatch_event_to_matching_handlers_1043e61e((int)param_1,0x36,0);
      }
      if ((uRam5c00309a & 0x30) == 0x30) {
        uVar1 = dispatch_event_to_matching_handlers_1043e61e((int)param_1,0x37,0);
      }
      if ((uRam5c0030a2 & 0x30) == 0x30) {
        uVar1 = dispatch_event_to_matching_handlers_1043e61e((int)param_1,0x38,0);
      }
    }
    if ((uVar2 & 0x4000000) != 0) {
      if ((uRam5c00310a & 0x30) == 0x30) {
        uVar1 = dispatch_event_to_matching_handlers_1043e61e((int)param_1,0x39,0);
      }
      if ((uRam5c003112 & 0x30) == 0x30) {
        uVar1 = dispatch_event_to_matching_handlers_1043e61e((int)param_1,0x3a,0);
      }
      if ((uRam5c00311a & 0x30) == 0x30) {
        uVar1 = dispatch_event_to_matching_handlers_1043e61e((int)param_1,0x3b,0);
      }
      if ((uRam5c003122 & 0x30) == 0x30) {
        uVar1 = dispatch_event_to_matching_handlers_1043e61e((int)param_1,0x3c,0);
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
