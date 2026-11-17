/* @k10d set_mode_and_init_timer_103e1e66 @ 0x103e1e66
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 082_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103e1f34) overlaps instruction at (ram,0x103e1f32)
    */

int set_mode_and_init_timer_103e1e66(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x14) = param_2;
  if ((param_2 == 0x25) || (iVar2 = param_1, param_2 == 0x26)) {
    iVar2 = initialize_sram_object();
    *(uint32_t *)(param_1 + 0x18) = 0x182002d;
  }
  if ((*(int *)(param_1 + 0x14) == 0xf) &&
     (((iVar1 = *(int *)(param_1 + 0x18), iVar1 == 0x182002d || (iVar1 == 0x1820030)) ||
      (iVar1 == 0x182002f)))) {
    iVar2 = initialize_sram_object();
  }
  if ((*(int *)(param_1 + 0x14) == 0x10) &&
     (((iVar1 = *(int *)(param_1 + 0x18), iVar1 == 0x182000f || (iVar1 == 0x1820012)) ||
      (iVar1 == 0x1820011)))) {
    iVar2 = initialize_sram_object();
  }
  if ((*(int *)(param_1 + 0x14) == 0xc) || (*(int *)(param_1 + 0x14) == 0x11)) {
    iVar2 = get_or_create_sram_object_103be36c();
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
