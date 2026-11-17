/* @k10d apply_setting_based_on_mode_103e06b6 @ 0x103e06b6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 081_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Stores a mode value in a struct and conditionally writes a specific setting based on
 *   that mode and a sub-parameter.
 * summary:
 *   The function writes param_2 to offset 0x14 of the object pointed to by param_1. It then
 *   checks the value at offset 0x18 against several constants (0x1a6000a, 0x1a6000f, etc.)
 *   and, if the mode at 0x14 is 0xe or 0x11, calls setting_set to write a byte from global
 *   RAM into setting ID 0xce. It also sets a byte at offset 0x22 to various values (0x8c,
 *   0x50, 0xb4, 200) depending on the mode value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103e08a6) overlaps instruction at (ram,0x103e08a4)
    */

int apply_setting_based_on_mode_103e06b6(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x14) = param_2;
  iVar2 = param_1;
  if (param_2 == 0xc) {
    iVar2 = get_or_init_sram_object_103c531c();
  }
  if ((*(int *)(param_1 + 0x14) == 0xe) || (*(int *)(param_1 + 0x14) == 0x11)) {
    if (*(int *)(param_1 + 0x18) == 0x1a6000a) {
      setting_set(*(int *)(param_1 + 8),0xce,(uint)bRam10596be8);
      iVar2 = get_or_init_sram_object_103c531c();
    }
    if (*(int *)(param_1 + 0x18) == 0x1a6000f) {
      setting_set(*(int *)(param_1 + 8),0xce,(uint)bRam10596be9);
      iVar2 = get_or_init_sram_object_103c531c();
    }
    if (*(int *)(param_1 + 0x18) == 0x1a60014) {
      setting_set(*(int *)(param_1 + 8),0xce,(uint)bRam10596bea);
      iVar2 = get_or_init_sram_object_103c531c();
    }
    if (*(int *)(param_1 + 0x18) == 0x1a60019) {
      setting_set(*(int *)(param_1 + 8),0xce,(uint)bRam10596beb);
      iVar2 = get_or_init_sram_object_103c531c();
    }
    if (*(int *)(param_1 + 0x18) == 0x1a6001e) {
      setting_set(*(int *)(param_1 + 8),0xce,(uint)bRam10596bec);
      iVar2 = get_or_init_sram_object_103c531c();
    }
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) {
    if (*(int *)(param_1 + 0x18) == 0x1a6000a) {
      setting_set(*(int *)(param_1 + 8),0xce,(uint)bRam10596be8);
    }
    if (*(int *)(param_1 + 0x18) == 0x1a6000f) {
      setting_set(*(int *)(param_1 + 8),0xce,(uint)bRam10596be9);
    }
    if (*(int *)(param_1 + 0x18) == 0x1a60014) {
      setting_set(*(int *)(param_1 + 8),0xce,(uint)bRam10596bea);
    }
    if (*(int *)(param_1 + 0x18) == 0x1a60019) {
      setting_set(*(int *)(param_1 + 8),0xce,(uint)bRam10596beb);
    }
    if (*(int *)(param_1 + 0x18) == 0x1a6001e) {
      setting_set(*(int *)(param_1 + 8),0xce,(uint)bRam10596bec);
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
