/* @k10d apply_mode_setting_value_103cce32 @ 0x103cce32
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 065_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Stores a mode value into a struct and conditionally updates a setting (0xb6) based on
 *   sub-mode and mode type.
 * summary:
 *   Writes param_2 to offset 0x14 of the object pointed to by param_1. Depending on the
 *   value at 0x14 and the sub-mode at 0x18 (0x19c000a or 0x19c000f), it calls setting_set
 *   with ID 0xb6 and a value from bRam10595a60 or bRam10595a61. It also sets a byte at
 *   offset 0x22 to various constants (0x8c, 0x50, 0xb4, 200) based on the mode value. Calls
 *   get_or_init_sram_object_103c21d0 in some branches.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103ccf32) overlaps instruction at (ram,0x103ccf30)
    */

int apply_mode_setting_value_103cce32(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x14) = param_2;
  iVar2 = param_1;
  if (param_2 == 0xc) {
    iVar2 = get_or_init_sram_object_103c21d0();
  }
  if ((*(int *)(param_1 + 0x14) == 0xe) || (*(int *)(param_1 + 0x14) == 0x11)) {
    if (*(int *)(param_1 + 0x18) == 0x19c000a) {
      setting_set(*(int *)(param_1 + 8),0xb6,(uint)bRam10595a60);
      iVar2 = get_or_init_sram_object_103c21d0();
    }
    if (*(int *)(param_1 + 0x18) == 0x19c000f) {
      setting_set(*(int *)(param_1 + 8),0xb6,(uint)bRam10595a61);
      iVar2 = get_or_init_sram_object_103c21d0();
    }
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) {
    if (*(int *)(param_1 + 0x18) == 0x19c000a) {
      setting_set(*(int *)(param_1 + 8),0xb6,(uint)bRam10595a60);
    }
    if (*(int *)(param_1 + 0x18) == 0x19c000f) {
      setting_set(*(int *)(param_1 + 8),0xb6,(uint)bRam10595a61);
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
