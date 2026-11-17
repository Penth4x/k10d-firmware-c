/* @k10d apply_setting_value_by_mode_103cf2dc @ 0x103cf2dc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 065_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Stores a mode value in a struct and conditionally writes a specific setting ID based on
 *   that mode and a sub-parameter.
 * summary:
 *   The function writes param_2 to offset 0x14 of the object pointed to by param_1. It then
 *   checks the value at offset 0x18 against several constants (0x1af000c-0x1af001c) and, if
 *   the mode at 0x14 is 0xe or 0x11, calls setting_set with ID 199 and values from global
 *   RAM variables. It also sets a byte at offset 0x22 to various values (0x8c, 0x50, 0xb4,
 *   200) depending on the mode at 0x14. The return value is either 0 or the result of
 *   get_or_init_sram_object_103c40b8.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103cf484) overlaps instruction at (ram,0x103cf482)
    */

int apply_setting_value_by_mode_103cf2dc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x14) = param_2;
  iVar2 = param_1;
  if (param_2 == 0xc) {
    iVar2 = get_or_init_sram_object_103c40b8();
  }
  if ((*(int *)(param_1 + 0x14) == 0xe) || (*(int *)(param_1 + 0x14) == 0x11)) {
    if (*(int *)(param_1 + 0x18) == 0x1af000c) {
      setting_set(*(int *)(param_1 + 8),199,(uint)bRam10595d44);
      iVar2 = get_or_init_sram_object_103c40b8();
    }
    if (*(int *)(param_1 + 0x18) == 0x1af0010) {
      setting_set(*(int *)(param_1 + 8),199,(uint)bRam10595d45);
      iVar2 = get_or_init_sram_object_103c40b8();
    }
    if (*(int *)(param_1 + 0x18) == 0x1af0014) {
      setting_set(*(int *)(param_1 + 8),199,(uint)bRam10595d46);
      iVar2 = get_or_init_sram_object_103c40b8();
    }
    if (*(int *)(param_1 + 0x18) == 0x1af0018) {
      setting_set(*(int *)(param_1 + 8),199,(uint)bRam10595d47);
      iVar2 = get_or_init_sram_object_103c40b8();
    }
    if (*(int *)(param_1 + 0x18) == 0x1af001c) {
      setting_set(*(int *)(param_1 + 8),199,(uint)bRam10595d48);
      iVar2 = get_or_init_sram_object_103c40b8();
    }
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) {
    if (*(int *)(param_1 + 0x18) == 0x1af000c) {
      setting_set(*(int *)(param_1 + 8),199,(uint)bRam10595d44);
    }
    if (*(int *)(param_1 + 0x18) == 0x1af0010) {
      setting_set(*(int *)(param_1 + 8),199,(uint)bRam10595d45);
    }
    if (*(int *)(param_1 + 0x18) == 0x1af0014) {
      setting_set(*(int *)(param_1 + 8),199,(uint)bRam10595d46);
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
