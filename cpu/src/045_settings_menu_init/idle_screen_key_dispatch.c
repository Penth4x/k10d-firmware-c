/* @k10d idle_screen_key_dispatch @ 0x103a5750
 * name: verified (structural evidence: emulator: the live dispatcher for keys from shooting idle)
 * unit: 045_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Shooting-idle screen key handler: event 0xc (MENU) requests the menu screen via the
 *   navigator (0x1120066), 0x18/9 request other screens; forwards to the base handler
 *   first.
 * summary:
 *   VERIFIED: emulator: the live dispatcher for keys from shooting idle
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void idle_screen_key_dispatch(int *param_1,int param_2,uint32_t param_3)

{
  bool bVar1;
  uint32_t uVar2;
  int iVar3;
  
  dispatch_event_0x29_via_vtable(param_1,param_2,param_3);
  uVar2 = 0;
  if (param_2 == 0xc) {
    iVar3 = *(int *)param_1[0xb];
    (**(code **)(iVar3 + 0x14))(param_1[0xb] + (int)*(short *)(iVar3 + 0x10),0x1120066,0);
    bVar1 = true;
  }
  else if (param_2 == 0x18) {
    uVar2 = 0x1120001;
    bVar1 = false;
  }
  else {
    if (param_2 == 9) {
      uVar2 = 0x112000c;
      iVar3 = *param_1;
      goto LAB_103a57b0;
    }
    bVar1 = true;
  }
  if (bVar1) {
    return;
  }
  iVar3 = *param_1;
LAB_103a57b0:
  (**(code **)(iVar3 + 0x74))((int)*(short *)(iVar3 + 0x70) + (int)param_1,uVar2,0);
  return;
}
