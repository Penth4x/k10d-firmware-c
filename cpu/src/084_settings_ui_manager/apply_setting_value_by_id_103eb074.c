/* @k10d apply_setting_value_by_id_103eb074 @ 0x103eb074
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 084_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Stores a value into a struct field and conditionally writes it to the settings block
 *   based on the field's ID.
 * summary:
 *   The function writes param_2 to offset 0x14 of the object pointed to by param_1. It then
 *   checks the value at offset 0x18 against specific IDs (0x1ad000c, 0x1ad0010, 0x1ad0014).
 *   If the ID matches and the value at 0x14 is in a specific set (0xc, 0xe, 0x11, 7, 0, 1),
 *   it calls setting_set to persist the value from a global RAM variable. It also sets a
 *   byte at offset 0x22 to various constants (0x8c, 0x50, 0xb4, 200) depending on the value
 *   at 0x14.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103eb1c4) overlaps instruction at (ram,0x103eb1c2)
    */

int apply_setting_value_by_id_103eb074(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x14) = param_2;
  iVar2 = param_1;
  if (param_2 == 0xc) {
    iVar2 = get_or_init_sram_object_103c40b8();
  }
  if ((*(int *)(param_1 + 0x14) == 0xe) || (*(int *)(param_1 + 0x14) == 0x11)) {
    if (*(int *)(param_1 + 0x18) == 0x1ad000c) {
      setting_set(*(int *)(param_1 + 8),0xc5,(uint)bRam105978d0);
      iVar2 = get_or_init_sram_object_103c40b8();
    }
    if (*(int *)(param_1 + 0x18) == 0x1ad0010) {
      setting_set(*(int *)(param_1 + 8),0xc5,(uint)bRam105978d1);
      iVar2 = get_or_init_sram_object_103c40b8();
    }
    if (*(int *)(param_1 + 0x18) == 0x1ad0014) {
      setting_set(*(int *)(param_1 + 8),0xc5,(uint)bRam105978d2);
      iVar2 = get_or_init_sram_object_103c40b8();
    }
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) {
    if (*(int *)(param_1 + 0x18) == 0x1ad000c) {
      setting_set(*(int *)(param_1 + 8),0xc5,(uint)bRam105978d0);
    }
    if (*(int *)(param_1 + 0x18) == 0x1ad0010) {
      setting_set(*(int *)(param_1 + 8),0xc5,(uint)bRam105978d1);
    }
    if (*(int *)(param_1 + 0x18) == 0x1ad0014) {
      setting_set(*(int *)(param_1 + 8),0xc5,(uint)bRam105978d2);
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
