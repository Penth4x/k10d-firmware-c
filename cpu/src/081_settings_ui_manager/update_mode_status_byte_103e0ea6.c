/* @k10d update_mode_status_byte_103e0ea6 @ 0x103e0ea6
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 081_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Sets a status byte at offset 0x22 based on the mode value at offset 0x14 and updates
 *   settings for specific sub-modes.
 * summary:
 *   The function writes param_2 to offset 0x14 of the object in param_1. It then checks the
 *   value at offset 0x14 against several constants (0xc, 0xe, 0x11, 7, 0, 1, 3, 0x19, 9,
 *   0x18, 0x2c, 10). For specific combinations of the value at offset 0x14 and offset 0x18
 *   (0x19b000a, 0x19b000f, 0x19b0014), it calls setting_set with ID 0xb5 and a byte from
 *   bRam10596c80-82. It also calls get_or_init_sram_object_103c0f94 in some branches.
 *   Finally, it sets the byte at offset 0x22 to values like 0x8c, 0x50, 0xb4, or 200
 *   depending on the mode, and returns 0 or the result of get_or_init_sram_object_103c0f94.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103e0ff6) overlaps instruction at (ram,0x103e0ff4)
    */

int update_mode_status_byte_103e0ea6(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x14) = param_2;
  iVar2 = param_1;
  if (param_2 == 0xc) {
    iVar2 = get_or_init_sram_object_103c0f94();
  }
  if ((*(int *)(param_1 + 0x14) == 0xe) || (*(int *)(param_1 + 0x14) == 0x11)) {
    if (*(int *)(param_1 + 0x18) == 0x19b000a) {
      setting_set(*(int *)(param_1 + 8),0xb5,(uint)bRam10596c80);
      iVar2 = get_or_init_sram_object_103c0f94();
    }
    if (*(int *)(param_1 + 0x18) == 0x19b000f) {
      setting_set(*(int *)(param_1 + 8),0xb5,(uint)bRam10596c81);
      iVar2 = get_or_init_sram_object_103c0f94();
    }
    if (*(int *)(param_1 + 0x18) == 0x19b0014) {
      setting_set(*(int *)(param_1 + 8),0xb5,(uint)bRam10596c82);
      iVar2 = get_or_init_sram_object_103c0f94();
    }
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) {
    if (*(int *)(param_1 + 0x18) == 0x19b000a) {
      setting_set(*(int *)(param_1 + 8),0xb5,(uint)bRam10596c80);
    }
    if (*(int *)(param_1 + 0x18) == 0x19b000f) {
      setting_set(*(int *)(param_1 + 8),0xb5,(uint)bRam10596c81);
    }
    if (*(int *)(param_1 + 0x18) == 0x19b0014) {
      setting_set(*(int *)(param_1 + 8),0xb5,(uint)bRam10596c82);
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
