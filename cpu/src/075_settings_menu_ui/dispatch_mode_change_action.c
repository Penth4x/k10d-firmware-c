/* @k10d dispatch_mode_change_action @ 0x103d4428
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 075_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Stores a mode ID in a struct and dispatches to specific handlers or sets a status byte
 *   based on the mode value.
 * summary:
 *   The function writes param_2 to offset 0x14 of the object pointed to by param_1. It then
 *   checks this value against several constants (0x27, 0x28, 0xd, 0xe, 0xc, 0x11, etc.).
 *   For specific values, it calls helper functions (get_or_init_ram_object_103b95ee,
 *   get_or_init_singleton_object_103c8200, get_or_init_sram_object_103c0f94) or sets a byte
 *   at offset 0x22 to values like 0x50, 0x8c, or 0xb4. It also calls setting_set for
 *   certain conditions. The return value is either the result of a helper call or 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103d4518) overlaps instruction at (ram,0x103d4516)
    */

int dispatch_mode_change_action(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x14) = param_2;
  iVar2 = param_1;
  if (param_2 == 0x27) {
    iVar2 = get_or_init_ram_object_103b95ee();
  }
  if (*(int *)(param_1 + 0x14) == 0x28) {
    iVar2 = get_or_init_singleton_object_103c8200();
  }
  if (*(int *)(param_1 + 0x14) == 0xd) {
    if (*(int *)(param_1 + 0x18) == 0x196000b) {
      iVar2 = get_or_init_ram_object_103b95ee();
    }
    else {
      setting_set(*(int *)(param_1 + 8),0xb0,(uint)bRam10596309);
      iVar2 = get_or_init_sram_object_103c0f94();
    }
  }
  if (*(int *)(param_1 + 0x14) == 0xe) {
    if (*(int *)(param_1 + 0x18) == 0x196000b) {
      iVar2 = get_or_init_singleton_object_103c8200();
    }
    else {
      setting_set(*(int *)(param_1 + 8),0xb0,(uint)bRam10596309);
      iVar2 = get_or_init_sram_object_103c0f94();
    }
  }
  if ((*(int *)(param_1 + 0x14) == 0xc) || (*(int *)(param_1 + 0x14) == 0x11)) {
    *(uint8_t *)(param_1 + 0x22) = 0x50;
    iVar2 = 0;
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
