/* @k10d update_mode_status_byte_103dfde4 @ 0x103dfde4
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 081_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Stores a mode code in a struct and sets a status byte at offset 0x22 based on the mode
 *   and sub-state.
 * summary:
 *   Writes param_2 to offset 0x14 of the object pointed to by param_1. Depending on the
 *   value at 0x14 and the value at 0x18, it calls setting_set to update setting 0xb7 with
 *   values from bRam10596b54 or bRam10596b55. It then sets the byte at offset 0x22 to
 *   specific values (0x8c, 0x50, 0xb4, 200) based on the mode code. Returns 0 or the result
 *   of get_or_init_sram_object_103c21d0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103dfee4) overlaps instruction at (ram,0x103dfee2)
    */

int update_mode_status_byte_103dfde4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x14) = param_2;
  iVar2 = param_1;
  if (param_2 == 0xc) {
    iVar2 = get_or_init_sram_object_103c21d0();
  }
  if ((*(int *)(param_1 + 0x14) == 0xe) || (*(int *)(param_1 + 0x14) == 0x11)) {
    if (*(int *)(param_1 + 0x18) == 0x19a000a) {
      setting_set(*(int *)(param_1 + 8),0xb7,(uint)bRam10596b54);
      iVar2 = get_or_init_sram_object_103c21d0();
    }
    if (*(int *)(param_1 + 0x18) == 0x19a000f) {
      setting_set(*(int *)(param_1 + 8),0xb7,(uint)bRam10596b55);
      iVar2 = get_or_init_sram_object_103c21d0();
    }
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) {
    if (*(int *)(param_1 + 0x18) == 0x19a000a) {
      setting_set(*(int *)(param_1 + 8),0xb7,(uint)bRam10596b54);
    }
    if (*(int *)(param_1 + 0x18) == 0x19a000f) {
      setting_set(*(int *)(param_1 + 8),0xb7,(uint)bRam10596b55);
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
