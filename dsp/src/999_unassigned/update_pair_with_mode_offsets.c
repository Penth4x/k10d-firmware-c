/* @k10d update_pair_with_mode_offsets @ 0x000c6190
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Updates two byte values in DAT_0003c496/0003c497 based on mode flags and offset
 *   calculations.
 * summary:
 *   The function reads state flags from DAT_0003c4d0, DAT_0003c4d2, and DAT_0003c4d3 to
 *   determine how to process input parameters. It calculates differences between
 *   DAT_0003c47d/0003c480 and the stored values, then applies these offsets to update
 *   DAT_0003c496 and DAT_0003c497. It calls dispatch_mode_change_event with values from
 *   DAT_0003c47d/0003c480 or param_1, and store_and_dispatch_event in one branch, and
 *   clears bit 4 of DAT_0003c4d2 upon completion.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_pair_with_mode_offsets(uint32_t param_1,byte param_2)

{
  uint16_t uVar1;
  char cVar2;
  char cVar3;
  
  uVar1 = _DAT_0003c562;
  cVar3 = '\0';
  cVar2 = '\0';
  if ((DAT_0003c4d2 & 0x10) == 0) {
    if ((DAT_0003c4d3 & 4) == 0) {
      DAT_0003c564 = (byte)param_1;
      _DAT_0003c562 = uVar1;
      DAT_0003c565 = param_2;
    }
    else {
      if ((DAT_0003c4d0 & 0x20) != 0) {
        if ((DAT_0003c3ba == '\x02') || ((DAT_0003c4df & 8) != 0)) {
          cVar3 = '\0';
          cVar2 = DAT_0003c480 - DAT_0003c497;
        }
        else if (DAT_0003c3ba == '\x01') {
          cVar3 = DAT_0003c47d - DAT_0003c496;
          cVar2 = '\0';
        }
        else {
          cVar3 = DAT_0003c47d - DAT_0003c496;
          cVar2 = DAT_0003c480 - DAT_0003c497;
        }
      }
      _DAT_0003c562 = _DAT_0003c58e;
      store_and_dispatch_event(__frv_reg_unset(4), __frv_reg_unset(5));
      _DAT_0003c562 = uVar1;
      if ((DAT_0003c4d0 & 0x20) != 0) {
        if ((DAT_0003c3ba == '\x02') || ((DAT_0003c4df & 8) != 0)) {
          DAT_0003c496 = DAT_0003c564;
          DAT_0003c497 = DAT_0003c565 - cVar2;
          DAT_0003c565 = DAT_0003c497;
        }
        else if (DAT_0003c3ba == '\x01') {
          DAT_0003c496 = DAT_0003c564 - cVar3;
          DAT_0003c497 = DAT_0003c565;
          DAT_0003c564 = DAT_0003c496;
        }
        else {
          DAT_0003c496 = DAT_0003c564 - cVar3;
          DAT_0003c497 = DAT_0003c565 - cVar2;
          DAT_0003c564 = DAT_0003c496;
          DAT_0003c565 = DAT_0003c497;
        }
      }
    }
  }
  else {
    if ((DAT_0003c4d0 & 0x20) != 0) {
      if ((DAT_0003c3ba == '\x02') || ((DAT_0003c4df & 8) != 0)) {
        cVar3 = '\0';
        cVar2 = DAT_0003c480 - DAT_0003c497;
      }
      else if (DAT_0003c3ba == '\x01') {
        cVar3 = DAT_0003c47d - DAT_0003c496;
        cVar2 = '\0';
      }
      else {
        cVar3 = DAT_0003c47d - DAT_0003c496;
        cVar2 = DAT_0003c480 - DAT_0003c497;
      }
    }
    if ((DAT_0003c4df & 8) == 0) {
      dispatch_mode_change_event(DAT_0003c47d,DAT_0003c480);
    }
    else {
      dispatch_mode_change_event(param_1,DAT_0003c480);
    }
    if ((DAT_0003c4d3 & 4) != 0) {
      _DAT_0003c58e = (ushort)DAT_0003c564 + (ushort)DAT_0003c565;
    }
    if ((DAT_0003c4d0 & 0x20) != 0) {
      if ((DAT_0003c3ba == '\x02') || ((DAT_0003c4df & 8) != 0)) {
        DAT_0003c496 = DAT_0003c564;
        DAT_0003c497 = DAT_0003c565 - cVar2;
        DAT_0003c565 = DAT_0003c497;
      }
      else if (DAT_0003c3ba == '\x01') {
        DAT_0003c496 = DAT_0003c564 - cVar3;
        DAT_0003c497 = DAT_0003c565;
        DAT_0003c564 = DAT_0003c496;
      }
      else {
        DAT_0003c496 = DAT_0003c564 - cVar3;
        DAT_0003c497 = DAT_0003c565 - cVar2;
        DAT_0003c564 = DAT_0003c496;
        DAT_0003c565 = DAT_0003c497;
      }
    }
    DAT_0003c4d2 = DAT_0003c4d2 & 0xef;
  }
  return;
}
