/* @k10d apply_setting_based_on_mode_103d36f4 @ 0x103d36f4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 073_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Updates a mode field in a struct and conditionally writes specific settings or flags
 *   based on the mode value.
 * summary:
 *   The function stores param_2 into offset 0x14 of the object pointed to by param_1. It
 *   then checks this value against several constants (0xc, 0xe, 0x11, 7, 0, 1, 3, 0x19, 9,
 *   0x18, 0x2c, 10). For certain combinations of the mode value and the value at offset
 *   0x18, it calls setting_set to write values from global variables bRam105961e4 or
 *   bRam105961e5 into setting ID 0xc3. It also writes specific byte values (0x8c, 0x50,
 *   0xb4, 200) to offset 0x22 of the object for various mode values. It calls
 *   get_or_init_sram_object_103c40b8 in some branches.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103d37f4) overlaps instruction at (ram,0x103d37f2)
    */

int apply_setting_based_on_mode_103d36f4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x14) = param_2;
  iVar2 = param_1;
  if (param_2 == 0xc) {
    iVar2 = get_or_init_sram_object_103c40b8();
  }
  if ((*(int *)(param_1 + 0x14) == 0xe) || (*(int *)(param_1 + 0x14) == 0x11)) {
    if (*(int *)(param_1 + 0x18) == 0x1b5000a) {
      setting_set(*(int *)(param_1 + 8),0xc3,(uint)bRam105961e4);
      iVar2 = get_or_init_sram_object_103c40b8();
    }
    if (*(int *)(param_1 + 0x18) == 0x1b5000f) {
      setting_set(*(int *)(param_1 + 8),0xc3,(uint)bRam105961e5);
      iVar2 = get_or_init_sram_object_103c40b8();
    }
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) {
    if (*(int *)(param_1 + 0x18) == 0x1b5000a) {
      setting_set(*(int *)(param_1 + 8),0xc3,(uint)bRam105961e4);
    }
    if (*(int *)(param_1 + 0x18) == 0x1b5000f) {
      setting_set(*(int *)(param_1 + 8),0xc3,(uint)bRam105961e5);
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
