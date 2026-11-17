/* @k10d set_mode_flag_from_state @ 0x1047c87a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 168_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_mode_flag_from_state(void *param_1)

{
  uint8_t uVar1;
  int iVar2;
  
  iVar2 = call_vtable_slot_two(*(void **)((int)param_1 + 0x58));
  if (iVar2 == 0x10) {
    uVar1 = 1;
    iVar2 = 4;
  }
  else if (iVar2 == 1) {
    uVar1 = 0;
    iVar2 = 3;
  }
  else {
    if (iVar2 == 0xf) {
      zero_six_bytes((void *)((int)param_1 + 0x48));
      return;
    }
    if ((iVar2 != 0xd) && (iVar2 != 0x16)) {
      return;
    }
    uVar1 = 1;
    iVar2 = 2;
  }
  *(uint8_t *)((int)param_1 + iVar2 + 0x48) = uVar1;
  return;
}
