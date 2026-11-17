/* @k10d set_state_and_update_byte @ 0x103d3e9e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 074_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103d3f20) overlaps instruction at (ram,0x103d3f1e)
    */

int set_state_and_update_byte(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x14) = param_2;
  iVar2 = param_1;
  if (param_2 == 0x11) {
    if (*(int *)(param_1 + 0x18) == 0x1a8000f) {
      update_setting_and_refresh_copy_10485050((void *)(*(uint32_t *)(param_1 + 8)),0);
      *(uint8_t *)(param_1 + 0x22) = 0x50;
      iVar2 = 0;
    }
    else if (*(int *)(param_1 + 0x18) == 0x1a80012) {
      iVar2 = get_or_init_sram_object_103c63a0();
    }
  }
  if (*(int *)(param_1 + 0x14) == 0xc) {
    iVar2 = get_or_init_sram_object_103c63a0();
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
