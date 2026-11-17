/* @k10d apply_mode_setting_value_103d7b1e @ 0x103d7b1e
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 078_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Stores a mode value into a struct and conditionally writes a setting based on the mode
 *   and sub-state.
 * summary:
 *   Writes param_2 to offset 0x14 of the object in param_1. Depending on the value at 0x14
 *   and the value at 0x18, it calls setting_set with ID 0xb2 and a value from bRam105964c0
 *   or bRam105964c1. It also sets a byte at offset 0x22 to various constants (0x8c, 0x50,
 *   0xb4, 200) based on the mode value. Calls get_or_init_sram_object_103c0f94 in some
 *   branches.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103d7c1e) overlaps instruction at (ram,0x103d7c1c)
    */

int apply_mode_setting_value_103d7b1e(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x14) = param_2;
  iVar2 = param_1;
  if (param_2 == 0xc) {
    iVar2 = get_or_init_sram_object_103c0f94();
  }
  if ((*(int *)(param_1 + 0x14) == 0xe) || (*(int *)(param_1 + 0x14) == 0x11)) {
    if (*(int *)(param_1 + 0x18) == 0x198000a) {
      setting_set(*(int *)(param_1 + 8),0xb2,(uint)bRam105964c0);
      iVar2 = get_or_init_sram_object_103c0f94();
    }
    if (*(int *)(param_1 + 0x18) == 0x198000f) {
      setting_set(*(int *)(param_1 + 8),0xb2,(uint)bRam105964c1);
      iVar2 = get_or_init_sram_object_103c0f94();
    }
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) {
    if (*(int *)(param_1 + 0x18) == 0x198000a) {
      setting_set(*(int *)(param_1 + 8),0xb2,(uint)bRam105964c0);
    }
    if (*(int *)(param_1 + 0x18) == 0x198000f) {
      setting_set(*(int *)(param_1 + 8),0xb2,(uint)bRam105964c1);
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
