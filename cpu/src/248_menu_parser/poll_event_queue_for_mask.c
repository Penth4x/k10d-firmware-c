/* @k10d poll_event_queue_for_mask @ 0x104decf0
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 248_menu_parser (unit names are model-proposed)
 * purpose:
 *   Polls an event queue for a matching event ID, returning the event data or a timeout.
 * summary:
 *   The function reads a mask from param_1+0x6c and calls eventflag_wai_flg in a loop to
 *   retrieve an event ID (uStack_c) that matches the mask. It then calls eventflag_clr_flg
 *   to acknowledge or remove the event, and dispatch_state_change_callbacks to process it.
 *   If dispatch_state_change_callbacks returns 0, the loop exits and returns 0 (success).
 *   If the event ID is not in the mask, it returns the ID. If eventflag_wai_flg fails, it
 *   returns 0xffffffff. The structure suggests a standard event-driven state machine or
 *   message loop.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint poll_event_queue_for_mask(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  bool bVar3;
  int iVar2;
  int iVar4;
  uintptr_t sp;
  uint uStack_c;
  
  uStack_c = 0;
  uVar1 = *(uint *)(param_1 + 0x6c);
  if ((param_2 & uVar1) != 0) {
    uVar1 = 0;
  }
  iVar4 = _DAT_105a2af0/*ROM*/;
  if (param_3 != 0) {
    iVar4 = param_3;
  }
  while( true ) {
    bVar3 = eventflag_wai_flg(*(uint32_t **)(param_1 + 0x70),param_2 | uVar1,&uStack_c,iVar4);
    if (!bVar3) {
      return 0xffffffff;
    }
    eventflag_clr_flg((uint32_t *)(*(uint32_t *)(param_1 + 0x70)),(uint)(uStack_c));
    iVar2 = dispatch_state_change_callbacks(param_1,uStack_c);
    if (iVar2 == 0) break;
    uStack_c = uStack_c & (uVar1 ^ 0xffffffff);
    if (uStack_c != 0) {
      return uStack_c;
    }
  }
  return 0;
}
