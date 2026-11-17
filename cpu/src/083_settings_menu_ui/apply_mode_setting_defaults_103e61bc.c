/* @k10d apply_mode_setting_defaults_103e61bc @ 0x103e61bc
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 083_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Stores a mode value in a struct and conditionally writes default settings based on that
 *   mode and a sub-parameter.
 * summary:
 *   The function writes param_2 to offset 0x14 of the object pointed to by param_1. It then
 *   checks the value at offset 0x18 against specific constants (0x1a9000a, 0x1a9000f, etc.)
 *   and calls setting_set to write values from global RAM variables into the settings block
 *   if the mode at 0x14 is 0xe, 0x11, 7, 0, or 1. For other mode values (3, 0x19, 9, 0x18,
 *   0x2c, 10), it writes specific byte values to offset 0x22 of the object. It calls
 *   get_or_init_sram_object_103c0f94 in some branches, whose purpose is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103e635c) overlaps instruction at (ram,0x103e635a)
    */

int apply_mode_setting_defaults_103e61bc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x14) = param_2;
  iVar2 = param_1;
  if (param_2 == 0xc) {
    iVar2 = get_or_init_sram_object_103c0f94();
  }
  if ((*(int *)(param_1 + 0x14) == 0xe) || (*(int *)(param_1 + 0x14) == 0x11)) {
    if (*(int *)(param_1 + 0x18) == 0x1a9000a) {
      setting_set(*(int *)(param_1 + 8),0xb1,(uint)bRam10597178);
      iVar2 = get_or_init_sram_object_103c0f94();
    }
    if (*(int *)(param_1 + 0x18) == 0x1a9000f) {
      setting_set(*(int *)(param_1 + 8),0xb1,(uint)bRam10597179);
      iVar2 = get_or_init_sram_object_103c0f94();
    }
    if (*(int *)(param_1 + 0x18) == 0x1a90014) {
      setting_set(*(int *)(param_1 + 8),0xb1,(uint)bRam1059717a);
      iVar2 = get_or_init_sram_object_103c0f94();
    }
    if (*(int *)(param_1 + 0x18) == 0x1a90019) {
      setting_set(*(int *)(param_1 + 8),0xb1,(uint)bRam1059717b);
      iVar2 = get_or_init_sram_object_103c0f94();
    }
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) {
    if (*(int *)(param_1 + 0x18) == 0x1a9000a) {
      setting_set(*(int *)(param_1 + 8),0xb1,(uint)bRam10597178);
    }
    if (*(int *)(param_1 + 0x18) == 0x1a9000f) {
      setting_set(*(int *)(param_1 + 8),0xb1,(uint)bRam10597179);
    }
    if (*(int *)(param_1 + 0x18) == 0x1a90014) {
      setting_set(*(int *)(param_1 + 8),0xb1,(uint)bRam1059717a);
    }
    if (*(int *)(param_1 + 0x18) == 0x1a90019) {
      setting_set(*(int *)(param_1 + 8),0xb1,(uint)bRam1059717b);
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
