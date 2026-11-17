/* @k10d apply_setting_based_on_mode_103ce1b8 @ 0x103ce1b8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 065_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Stores a mode value in a struct and conditionally updates a setting (0xd2) and a status
 *   byte based on that mode and a sub-state.
 * summary:
 *   The function writes param_2 to offset 0x14 of the object pointed to by param_1. It then
 *   checks the value at offset 0x18 against specific constants (0x1a3000a, 0x1a3000f) and
 *   the mode value at offset 0x14. Depending on these conditions, it calls setting_set to
 *   write a value from global RAM variables to setting ID 0xd2, and writes specific
 *   constants (0x8c, 0x50, 0xb4, 200) to offset 0x22 of the object. It returns 0 or the
 *   result of get_or_init_sram_object_103c63a0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103ce2b8) overlaps instruction at (ram,0x103ce2b6)
    */

int apply_setting_based_on_mode_103ce1b8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x14) = param_2;
  iVar2 = param_1;
  if (param_2 == 0xc) {
    iVar2 = get_or_init_sram_object_103c63a0();
  }
  if ((*(int *)(param_1 + 0x14) == 0xe) || (*(int *)(param_1 + 0x14) == 0x11)) {
    if (*(int *)(param_1 + 0x18) == 0x1a3000a) {
      setting_set(*(int *)(param_1 + 8),0xd2,(uint)bRam10595c1c);
      iVar2 = get_or_init_sram_object_103c63a0();
    }
    if (*(int *)(param_1 + 0x18) == 0x1a3000f) {
      setting_set(*(int *)(param_1 + 8),0xd2,(uint)bRam10595c1d);
      iVar2 = get_or_init_sram_object_103c63a0();
    }
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) {
    if (*(int *)(param_1 + 0x18) == 0x1a3000a) {
      setting_set(*(int *)(param_1 + 8),0xd2,(uint)bRam10595c1c);
    }
    if (*(int *)(param_1 + 0x18) == 0x1a3000f) {
      setting_set(*(int *)(param_1 + 8),0xd2,(uint)bRam10595c1d);
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
