/* @k10d process_event_flags @ 0x104ab748
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 210_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_event_flags(void *param_1)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  
  puVar4 = *(uint **)((int)param_1 + 0x2c);
  uVar3 = *puVar4;
  uVar1 = 0;
  *puVar4 = *puVar4 & (uVar3 & 0x18000000 ^ 0xffffffff) & 0x18000000;
  if ((uVar3 & 0x10000000/*ROM*/) != 0) {
    iVar2 = (**(code **)(*(int *)((int)param_1 + 4) + 0x44))
                      ((int)*(short *)(*(int *)((int)param_1 + 4) + 0x40) + (int)param_1);
    clear_object_flags(param_1,iVar2);
    if (*(char *)((int)param_1 + 0x16) == '\0') {
      *(uint8_t *)((int)param_1 + 0x16) = 1;
      invoke_virtual_slot_5_104acd10(param_1);
      uVar1 = 1;
    }
    else {
      invoke_virtual_slot_two_104acd48(__frv_reg_unset(4));
      uVar1 = 1;
    }
  }
  if ((uVar3 & 0x8000000) != 0) {
    iVar2 = *(int *)**(int **)((int)param_1 + 0x1c);
    iVar2 = (**(code **)(iVar2 + 0x1c))
                      (**(int **)((int)param_1 + 0x1c) + (int)*(short *)(iVar2 + 0x18));
    if (iVar2 != 0) {
      invoke_virtual_slot_7_104acd80(param_1);
    }
    uVar1 = 1;
  }
  return uVar1;
}
