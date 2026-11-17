/* @k10d update_mode_parameter_state @ 0x103d30e0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 073_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Sets a mode field in a struct and updates a status byte based on the mode value and a
 *   secondary identifier.
 * summary:
 *   The function writes param_2 to offset 0x14 of the object pointed to by param_1. It then
 *   branches on the value at offset 0x14 (interpreted as a mode or state ID) and the value
 *   at offset 0x18 (interpreted as a sub-state or ID). Depending on these values, it calls
 *   apply_setting_from_table with specific byte parameters and sets the byte at offset 0x22
 *   to various constants (0x8c, 0x50, 0xb4, 200). It returns either the result of
 *   get_or_init_sram_object_103c30bc or NULL.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103d31d8) overlaps instruction at (ram,0x103d31d6)
    */

void * update_mode_parameter_state(void *param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  
  *(int *)((int)param_1 + 0x14) = param_2;
  pvVar2 = param_1;
  if (param_2 == 0xc) {
    pvVar2 = (void *)get_or_init_sram_object_103c30bc();
  }
  if ((*(int *)((int)param_1 + 0x14) == 0xe) || (*(int *)((int)param_1 + 0x14) == 0x11)) {
    if (*(int *)((int)param_1 + 0x18) == 0x1a7000a) {
      apply_setting_from_table(param_1,2,(uint)bRam10596150);
      pvVar2 = (void *)get_or_init_sram_object_103c30bc();
    }
    if (*(int *)((int)param_1 + 0x18) == 0x1a7000f) {
      apply_setting_from_table(param_1,2,(uint)bRam10596151);
      pvVar2 = (void *)get_or_init_sram_object_103c30bc();
    }
  }
  iVar1 = *(int *)((int)param_1 + 0x14);
  if (((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) {
    if (*(int *)((int)param_1 + 0x18) == 0x1a7000a) {
      apply_setting_from_table(param_1,2,(uint)bRam10596150);
    }
    if (*(int *)((int)param_1 + 0x18) == 0x1a7000f) {
      apply_setting_from_table(param_1,2,(uint)bRam10596151);
    }
    *(uint8_t *)((int)param_1 + 0x22) = 0x8c;
    pvVar2 = (void *)0x0;
  }
  if (*(int *)((int)param_1 + 0x14) == 3) {
    *(uint8_t *)((int)param_1 + 0x22) = 0x8c;
    pvVar2 = (void *)0x0;
  }
  if ((*(int *)((int)param_1 + 0x14) == 0x19) || (*(int *)((int)param_1 + 0x14) == 9)) {
    *(uint8_t *)((int)param_1 + 0x22) = 0x50;
    pvVar2 = (void *)0x0;
  }
  if (*(int *)((int)param_1 + 0x14) == 0x18) {
    *(uint8_t *)((int)param_1 + 0x22) = 0xb4;
    pvVar2 = (void *)0x0;
  }
  if (*(int *)((int)param_1 + 0x14) == 0x2c) {
    *(uint8_t *)((int)param_1 + 0x22) = 0x8c;
    pvVar2 = (void *)0x0;
  }
  if (*(int *)((int)param_1 + 0x14) == 10) {
    *(uint8_t *)((int)param_1 + 0x22) = 200;
    pvVar2 = (void *)0x0;
  }
  return pvVar2;
}
