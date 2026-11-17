/* @k10d apply_setting_based_on_mode_103da98e @ 0x103da98e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 079_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Stores a mode value in a struct and conditionally writes specific settings or timeout
 *   values based on that mode and a sub-parameter.
 * summary:
 *   The function writes param_2 to offset 0x14 of the object pointed to by param_1. It then
 *   checks the value at offset 0x18 against specific constants (0x1a0000a, 0x1a0000f,
 *   0x1a00014) and calls setting_set with a fixed ID of 200 and values from global RAM
 *   variables if the mode at 0x14 matches certain criteria (0xc, 0xe, 0x11, 7, 0, 1). For
 *   other mode values (3, 0x19, 9, 0x18, 0x2c, 10), it writes specific byte values (0x8c,
 *   0x50, 0xb4, 200) to offset 0x22 of the object. It returns 0 or the result of
 *   get_or_init_sram_object_103c40b8.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103daade) overlaps instruction at (ram,0x103daadc)
    */

int apply_setting_based_on_mode_103da98e(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x14) = param_2;
  iVar2 = param_1;
  if (param_2 == 0xc) {
    iVar2 = get_or_init_sram_object_103c40b8();
  }
  if ((*(int *)(param_1 + 0x14) == 0xe) || (*(int *)(param_1 + 0x14) == 0x11)) {
    if (*(int *)(param_1 + 0x18) == 0x1a0000a) {
      setting_set(*(int *)(param_1 + 8),200,(uint)bRam1059668c);
      iVar2 = get_or_init_sram_object_103c40b8();
    }
    if (*(int *)(param_1 + 0x18) == 0x1a0000f) {
      setting_set(*(int *)(param_1 + 8),200,(uint)bRam1059668d);
      iVar2 = get_or_init_sram_object_103c40b8();
    }
    if (*(int *)(param_1 + 0x18) == 0x1a00014) {
      setting_set(*(int *)(param_1 + 8),200,(uint)bRam1059668e);
      iVar2 = get_or_init_sram_object_103c40b8();
    }
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) {
    if (*(int *)(param_1 + 0x18) == 0x1a0000a) {
      setting_set(*(int *)(param_1 + 8),200,(uint)bRam1059668c);
    }
    if (*(int *)(param_1 + 0x18) == 0x1a0000f) {
      setting_set(*(int *)(param_1 + 8),200,(uint)bRam1059668d);
    }
    if (*(int *)(param_1 + 0x18) == 0x1a00014) {
      setting_set(*(int *)(param_1 + 8),200,(uint)bRam1059668e);
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
