/* @k10d update_setting_based_on_mode_103e82f2 @ 0x103e82f2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 083_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Stores a mode value in a struct and conditionally updates a specific setting (0xcb)
 *   based on sub-state and mode.
 * summary:
 *   The function writes param_2 to offset 0x14 of the object pointed to by param_1. It then
 *   checks the value at offset 0x18 against specific constants (0x1a4000a, 0x1a4000f) and
 *   the mode value at 0x14. If conditions match, it calls setting_set to update setting ID
 *   0xcb with values from global variables bRam105973cc or bRam105973cd. It also sets a
 *   byte at offset 0x22 to various values (0x8c, 0x50, 0xb4, 200) depending on the mode.
 *   The function returns 0 or the result of get_or_init_sram_object_103c531c.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103e83f2) overlaps instruction at (ram,0x103e83f0)
    */

int update_setting_based_on_mode_103e82f2(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x14) = param_2;
  iVar2 = param_1;
  if (param_2 == 0xc) {
    iVar2 = get_or_init_sram_object_103c531c();
  }
  if ((*(int *)(param_1 + 0x14) == 0xe) || (*(int *)(param_1 + 0x14) == 0x11)) {
    if (*(int *)(param_1 + 0x18) == 0x1a4000a) {
      setting_set(*(int *)(param_1 + 8),0xcb,(uint)bRam105973cc);
      iVar2 = get_or_init_sram_object_103c531c();
    }
    if (*(int *)(param_1 + 0x18) == 0x1a4000f) {
      setting_set(*(int *)(param_1 + 8),0xcb,(uint)bRam105973cd);
      iVar2 = get_or_init_sram_object_103c531c();
    }
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) {
    if (*(int *)(param_1 + 0x18) == 0x1a4000a) {
      setting_set(*(int *)(param_1 + 8),0xcb,(uint)bRam105973cc);
    }
    if (*(int *)(param_1 + 0x18) == 0x1a4000f) {
      setting_set(*(int *)(param_1 + 8),0xcb,(uint)bRam105973cd);
    }
    *(uint8_t *)(param_1 + 0x22) = 0x8c;
    iVar2 = 0;
  }
  if (*(int *)(param_1 + 0x14) == 3) {
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
