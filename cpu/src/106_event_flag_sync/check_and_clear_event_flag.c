/* @k10d check_and_clear_event_flag @ 0x10427c14
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 106_event_flag_sync (unit names are model-proposed)
 * purpose:
 *   Checks a flag in a 0x28-byte object and clears it if set, returning a boolean status.
 * summary:
 *   The function calls eventflag_wai_flg to inspect a 0x28-byte structure at param_1+8. If
 *   the call succeeds and the returned flag value (uStack_c) has bit 5 (0x20) clear, it
 *   returns 1. If bit 5 is set, it calls eventflag_clr_flg to clear the state, calls
 *   set_flg_obj, and returns 0. The specific meaning of the flag and the object type is not
 *   determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_and_clear_event_flag(void *param_1)

{
  uint32_t *puVar1;
  bool bVar2;
  uint32_t uVar3;
  uintptr_t sp;
  uint uStack_c;
  
  uStack_c = 0;
  puVar1 = (uint32_t *)((int)param_1 + 8);
  uVar3 = 0;
  bVar2 = eventflag_wai_flg(puVar1,0x28,&uStack_c,iRam105a2af4);
  if (bVar2) {
    if ((uStack_c & 0x20) == 0) {
      uVar3 = 1;
    }
    else {
      eventflag_clr_flg(puVar1,0x28);
      set_flg_obj(puVar1, 0x40);
      uVar3 = 0;
    }
  }
  return uVar3;
}
