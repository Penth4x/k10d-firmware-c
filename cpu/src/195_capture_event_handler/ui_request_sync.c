/* @k10d ui_request_sync @ 0x104924e6
 * name: verified (structural evidence: decomp + emulator flag log: set by 0x1049248a in ui_request_dispatch, waited here)
 * unit: 195_capture_event_handler (unit names are model-proposed)
 * purpose:
 *   Posts a UI request (code 2/4/8/0x10/0x20/0x40/0x80/0x100) to the UI task queue and
 *   waits on flag 0x80048f20 for that code to complete.
 * summary:
 *   VERIFIED: decomp + emulator flag log: set by 0x1049248a in ui_request_dispatch, waited
 *   here
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ui_request_sync(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  uintptr_t sp;
  uint32_t uStack_c;
  
  uVar3 = 0;
  iVar2 = 1;
  iVar1 = 0;
  do {
    if (*(int *)(&DAT_105b4214/*ROM*/ + iVar1) == param_2) {
      uVar3 = *(uint32_t *)(&DAT_105b4218/*ROM*/ + iVar1);
    }
    if (*(int *)(&DAT_105b421c/*ROM*/ + iVar1) == param_2) {
      uVar3 = *(uint32_t *)(&DAT_105b4220/*ROM*/ + iVar1);
    }
    if (*(int *)(&DAT_105b4224/*ROM*/ + iVar1) == param_2) {
      uVar3 = *(uint32_t *)(&DAT_105b4228/*ROM*/ + iVar1);
    }
    if (*(int *)(&DAT_105b422c/*ROM*/ + iVar1) == param_2) {
      uVar3 = *(uint32_t *)(&DAT_105b4230/*ROM*/ + iVar1);
    }
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + 0x20;
  } while (-1 < iVar2);
  iVar1 = heap_alloc((void *)0xc);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    alloc_zeroed_ui_record((uint32_t *)(iVar1));
  }
  store_value_at_offset_8_10491ee2(iVar1,uVar3);
  set_object_field_at_offset_4_10491ed6(iVar1,(void *)(param_1 + 8));
  call_kernel_with_short_id((uint32_t *)0x80048f28/*SDRAM*/);
  set_flag_at_offset_0x21(*(uint32_t *)(param_1 + 0x18));
  eventflag_clr_flg((uint32_t *)(0x80048f20/*SDRAM*/),(uint)(param_2));
  if ((param_2 == 2) || (param_2 == 0x10)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  read_ui_state_field(*(uint32_t *)(param_1 + 0x18),iVar1,uVar3);
  uStack_c = 0;
  eventflag_wai_flg((uint32_t *)0x80048f20/*SDRAM*/,param_2,&uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg((uint32_t *)(0x80048f20/*SDRAM*/),(uint)(param_2));
  check_kernel_call_success_10459d88((uint32_t *)0x80048f28/*SDRAM*/);
  return;
}
