/* @k10d set_mode_and_update_timeout @ 0x103d0e12
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 069_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103d0e82) overlaps instruction at (ram,0x103d0e80)
    */

int set_mode_and_update_timeout(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x14) = param_2;
  if ((param_2 == 0xc) || (iVar2 = param_1, param_2 == 0x11)) {
    iVar2 = get_or_init_singleton_object_103c8200();
  }
  if ((*(int *)(param_1 + 0x14) == 0xd) || (*(int *)(param_1 + 0x14) == 0xe)) {
    setting_set(*(int *)(param_1 + 8),0x90,(uint)bRam10595f04);
    iVar2 = get_or_init_sram_object_103d0fa6();
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if ((((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) || (iVar1 == 3)) {
    *(uint8_t *)(param_1 + 0x22) = 0x8c;
    iVar2 = 0;
  }
  if ((*(int *)(param_1 + 0x14) == 0x19) || (*(int *)(param_1 + 0x14) == 9)) {
    *(uint8_t *)(param_1 + 0x22) = 0x50;
    iVar2 = 0;
  }
  if (*(int *)(param_1 + 0x14) == 0x18) {
    *(uint8_t *)(param_1 + 0x22) = 0xb4;
    iVar2 = 0;
  }
  if (*(int *)(param_1 + 0x14) == 0x2c) {
    *(uint8_t *)(param_1 + 0x22) = 0x8c;
    iVar2 = 0;
  }
  if (*(int *)(param_1 + 0x14) == 10) {
    *(uint8_t *)(param_1 + 0x22) = 200;
    iVar2 = 0;
  }
  return iVar2;
}
