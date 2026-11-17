/* @k10d apply_setting_value_by_id_103e76ba @ 0x103e76ba
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 083_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Stores a value into a struct field and conditionally writes it to the settings block
 *   based on the field's ID.
 * summary:
 *   The function writes param_2 to offset 0x14 of the object pointed to by param_1. It then
 *   checks the value at offset 0x18 against specific IDs (0x1b1000a, 0x1b1000f) and, if the
 *   ID at 0x14 matches certain criteria, calls setting_set to persist the value from global
 *   variables bRam105972a4 or bRam105972a5. It also sets a byte at offset 0x22 to various
 *   constants (0x8c, 0x50, 0xb4, 200) depending on the ID at 0x14.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103e77ba) overlaps instruction at (ram,0x103e77b8)
    */

int apply_setting_value_by_id_103e76ba(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x14) = param_2;
  iVar2 = param_1;
  if (param_2 == 0xc) {
    iVar2 = get_or_init_sram_object_103c531c();
  }
  if ((*(int *)(param_1 + 0x14) == 0xe) || (*(int *)(param_1 + 0x14) == 0x11)) {
    if (*(int *)(param_1 + 0x18) == 0x1b1000a) {
      setting_set(*(int *)(param_1 + 8),0xc9,(uint)bRam105972a4);
      iVar2 = get_or_init_sram_object_103c531c();
    }
    if (*(int *)(param_1 + 0x18) == 0x1b1000f) {
      setting_set(*(int *)(param_1 + 8),0xc9,(uint)bRam105972a5);
      iVar2 = get_or_init_sram_object_103c531c();
    }
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) {
    if (*(int *)(param_1 + 0x18) == 0x1b1000a) {
      setting_set(*(int *)(param_1 + 8),0xc9,(uint)bRam105972a4);
    }
    if (*(int *)(param_1 + 0x18) == 0x1b1000f) {
      setting_set(*(int *)(param_1 + 8),0xc9,(uint)bRam105972a5);
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
