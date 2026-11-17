/* @k10d apply_mode_dependent_setting_10426c32 @ 0x10426c32
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 103_settings_ui_context (unit names are model-proposed)
 * purpose:
 *   Stores a mode value in a struct and conditionally updates a setting based on mode and
 *   sub-state.
 * summary:
 *   Writes param_2 to offset 0x14 of the object pointed to by param_1. Depending on the
 *   value at 0x14 and the value at 0x18, it calls setting_set with ID 0xc1 and a value from
 *   bRam1059e074 or bRam1059e075. It also sets a byte at offset 0x22 to various constants
 *   (0x8c, 0x50, 0xb4, 200) based on the mode value. Returns 0 or the result of
 *   get_or_init_sram_object_103c63a0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10426d32) overlaps instruction at (ram,0x10426d30)
    */

int apply_mode_dependent_setting_10426c32(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x14) = param_2;
  iVar2 = param_1;
  if (param_2 == 0xc) {
    iVar2 = get_or_init_sram_object_103c63a0();
  }
  if ((*(int *)(param_1 + 0x14) == 0xe) || (*(int *)(param_1 + 0x14) == 0x11)) {
    if (*(int *)(param_1 + 0x18) == 0x1c1000a) {
      setting_set(*(int *)(param_1 + 8),0xc1,(uint)bRam1059e074);
      iVar2 = get_or_init_sram_object_103c63a0();
    }
    if (*(int *)(param_1 + 0x18) == 0x1c1000f) {
      setting_set(*(int *)(param_1 + 8),0xc1,(uint)bRam1059e075);
      iVar2 = get_or_init_sram_object_103c63a0();
    }
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) {
    if (*(int *)(param_1 + 0x18) == 0x1c1000a) {
      setting_set(*(int *)(param_1 + 8),0xc1,(uint)bRam1059e074);
    }
    if (*(int *)(param_1 + 0x18) == 0x1c1000f) {
      setting_set(*(int *)(param_1 + 8),0xc1,(uint)bRam1059e075);
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
