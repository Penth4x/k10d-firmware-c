/* @k10d apply_mode_setting_value_103e3716 @ 0x103e3716
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 082_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Stores a mode value into a struct and conditionally writes a related setting based on
 *   the mode and sub-mode.
 * summary:
 *   The function writes param_2 to offset 0x14 of the object pointed to by param_1. It then
 *   checks the value at offset 0x18 against specific constants (0x197000a, 0x197000f) and
 *   the value at offset 0x14 against various integers. If conditions match, it calls
 *   setting_set with the pointer at offset 8, the constant 0xc0, and a byte from RAM
 *   (bRam10596e54 or bRam10596e55). It also sets a byte at offset 0x22 to various values
 *   (0x8c, 0x50, 0xb4, 200) depending on the mode value. The function returns 0 or the
 *   result of get_or_init_sram_object_103c30bc.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103e3816) overlaps instruction at (ram,0x103e3814)
    */

int apply_mode_setting_value_103e3716(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x14) = param_2;
  iVar2 = param_1;
  if (param_2 == 0xc) {
    iVar2 = get_or_init_sram_object_103c30bc();
  }
  if ((*(int *)(param_1 + 0x14) == 0xe) || (*(int *)(param_1 + 0x14) == 0x11)) {
    if (*(int *)(param_1 + 0x18) == 0x197000a) {
      setting_set(*(int *)(param_1 + 8),0xc0,(uint)bRam10596e54);
      iVar2 = get_or_init_sram_object_103c30bc();
    }
    if (*(int *)(param_1 + 0x18) == 0x197000f) {
      setting_set(*(int *)(param_1 + 8),0xc0,(uint)bRam10596e55);
      iVar2 = get_or_init_sram_object_103c30bc();
    }
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) {
    if (*(int *)(param_1 + 0x18) == 0x197000a) {
      setting_set(*(int *)(param_1 + 8),0xc0,(uint)bRam10596e54);
    }
    if (*(int *)(param_1 + 0x18) == 0x197000f) {
      setting_set(*(int *)(param_1 + 8),0xc0,(uint)bRam10596e55);
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
