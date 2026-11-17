/* @k10d apply_mode_setting_value_103d2296 @ 0x103d2296
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 072_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Stores a mode value into a struct and conditionally writes a related setting based on
 *   the mode and sub-mode.
 * summary:
 *   The function writes param_2 to offset 0x14 of the object pointed to by param_1. It then
 *   checks the value at offset 0x18 against specific constants (0x1ab000a, 0x1ab000f,
 *   0x1ab0014, 0x1ab0019) and, if the mode at 0x14 is in a specific set (0xc, 0xe, 0x11, 7,
 *   0, 1), calls setting_set to write a byte from global RAM variables to setting ID 0xb8.
 *   It also sets a byte at offset 0x22 to various values (0x8c, 0x50, 0xb4, 200) depending
 *   on the mode value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103d2436) overlaps instruction at (ram,0x103d2434)
    */

int apply_mode_setting_value_103d2296(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x14) = param_2;
  iVar2 = param_1;
  if (param_2 == 0xc) {
    iVar2 = get_or_init_sram_object_103c21d0();
  }
  if ((*(int *)(param_1 + 0x14) == 0xe) || (*(int *)(param_1 + 0x14) == 0x11)) {
    if (*(int *)(param_1 + 0x18) == 0x1ab000a) {
      setting_set(*(int *)(param_1 + 8),0xb8,(uint)bRam1059602c);
      iVar2 = get_or_init_sram_object_103c21d0();
    }
    if (*(int *)(param_1 + 0x18) == 0x1ab000f) {
      setting_set(*(int *)(param_1 + 8),0xb8,(uint)bRam1059602d);
      iVar2 = get_or_init_sram_object_103c21d0();
    }
    if (*(int *)(param_1 + 0x18) == 0x1ab0014) {
      setting_set(*(int *)(param_1 + 8),0xb8,(uint)bRam1059602e);
      iVar2 = get_or_init_sram_object_103c21d0();
    }
    if (*(int *)(param_1 + 0x18) == 0x1ab0019) {
      setting_set(*(int *)(param_1 + 8),0xb8,(uint)bRam1059602f);
      iVar2 = get_or_init_sram_object_103c21d0();
    }
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) {
    if (*(int *)(param_1 + 0x18) == 0x1ab000a) {
      setting_set(*(int *)(param_1 + 8),0xb8,(uint)bRam1059602c);
    }
    if (*(int *)(param_1 + 0x18) == 0x1ab000f) {
      setting_set(*(int *)(param_1 + 8),0xb8,(uint)bRam1059602d);
    }
    if (*(int *)(param_1 + 0x18) == 0x1ab0014) {
      setting_set(*(int *)(param_1 + 8),0xb8,(uint)bRam1059602e);
    }
    if (*(int *)(param_1 + 0x18) == 0x1ab0019) {
      setting_set(*(int *)(param_1 + 8),0xb8,(uint)bRam1059602f);
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
