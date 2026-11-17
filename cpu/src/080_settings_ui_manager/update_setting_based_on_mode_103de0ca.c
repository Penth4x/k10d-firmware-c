/* @k10d update_setting_based_on_mode_103de0ca @ 0x103de0ca
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 080_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Stores a mode value into a struct and conditionally updates a specific setting (0xb3)
 *   based on sub-mode and RAM flags.
 * summary:
 *   The function writes param_2 to offset 0x14 of the object pointed to by param_1. It then
 *   checks the value at offset 0x18 against specific constants (0x1b3000a, 0x1b3000f) and
 *   the value at offset 0x14 against a set of mode codes. If conditions match, it calls
 *   setting_set to update setting 0xb3 with values from bRam10596964 or bRam10596965. It
 *   also sets a byte at offset 0x22 to various values (0x8c, 0x50, 0xb4, 200) depending on
 *   the mode code. The function returns 0 in most branches or the result of
 *   get_or_init_sram_object_103c0f94 in others.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103de1ca) overlaps instruction at (ram,0x103de1c8)
    */

int update_setting_based_on_mode_103de0ca(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x14) = param_2;
  iVar2 = param_1;
  if (param_2 == 0xc) {
    iVar2 = get_or_init_sram_object_103c0f94();
  }
  if ((*(int *)(param_1 + 0x14) == 0xe) || (*(int *)(param_1 + 0x14) == 0x11)) {
    if (*(int *)(param_1 + 0x18) == 0x1b3000a) {
      setting_set(*(int *)(param_1 + 8),0xb3,(uint)bRam10596964);
      iVar2 = get_or_init_sram_object_103c0f94();
    }
    if (*(int *)(param_1 + 0x18) == 0x1b3000f) {
      setting_set(*(int *)(param_1 + 8),0xb3,(uint)bRam10596965);
      iVar2 = get_or_init_sram_object_103c0f94();
    }
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) {
    if (*(int *)(param_1 + 0x18) == 0x1b3000a) {
      setting_set(*(int *)(param_1 + 8),0xb3,(uint)bRam10596964);
    }
    if (*(int *)(param_1 + 0x18) == 0x1b3000f) {
      setting_set(*(int *)(param_1 + 8),0xb3,(uint)bRam10596965);
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
