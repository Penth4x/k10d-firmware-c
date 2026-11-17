/* @k10d copy_config_fields_to_struct @ 0x1037271e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 033_sr_menu_handler (unit names are model-proposed)
 * purpose:
 *   Copies values from a global state object and a sub-object into a struct via getter
 *   calls and switch mappings.
 * summary:
 *   The function reads fields from a global pointer at 0x800158d4 using
 *   get_setting_0x82_with_refresh, get_setting_0x83_with_refresh, and
 *   get_mode_dependent_setting_1039d5b4, storing them in param_1. It then retrieves a sub-
 *   object pointer from param_1+0x7c and calls read_struct_field_at_index_104c2890 with
 *   indices 1, 2, 3, 4, 7, and 10 to fetch values. These values are mapped through switch
 *   statements to specific byte values stored in param_1 at offsets 0x5e through 0x63. The
 *   function acts as a serialization or snapshot routine for configuration state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_config_fields_to_struct(int param_1)

{
  uint8_t uVar1;
  uint32_t uVar2;
  int iVar3;
  
  uVar2 = get_setting_0x82_with_refresh((uint32_t *)0x800158d4/*SDRAM*/);
  *(char *)(param_1 + 0x5c) = (char)uVar2;
  uVar2 = get_setting_0x83_with_refresh((uint32_t *)0x800158d4/*SDRAM*/);
  *(char *)(param_1 + 0x5d) = (char)uVar2;
  *(uint8_t *)(param_1 + 0x5f) = 2;
  uVar2 = get_mode_dependent_setting_1039d5b4((void *)0x800158d4/*SDRAM*/,0);
  *(uint32_t *)(param_1 + 0x6c) = uVar2;
  uVar2 = get_mode_dependent_setting_1039d5b4((void *)0x800158d4/*SDRAM*/,1);
  *(uint32_t *)(param_1 + 0x70) = uVar2;
  uVar2 = get_mode_dependent_setting_1039d5b4((void *)0x800158d4/*SDRAM*/,2);
  *(uint32_t *)(param_1 + 0x74) = uVar2;
  *(uint32_t *)(param_1 + 0x78) = 0;
  uVar2 = read_struct_field_at_index_104c2890(*(void **)(param_1 + 0x7c),7);
  switch(uVar2) {
  case 1:
    uVar1 = 0;
    break;
  case 2:
    uVar1 = 1;
    break;
  case 3:
    *(uint8_t *)(param_1 + 0x5e) = 2;
    goto LAB_103727ea;
  default:
    uVar1 = 0;
    break;
  case 5:
    uVar1 = 7;
    break;
  case 6:
    uVar1 = 9;
    break;
  case 7:
    uVar1 = 4;
    break;
  case 8:
    uVar1 = 5;
    break;
  case 9:
    uVar1 = 6;
    break;
  case 10:
    uVar1 = 8;
    break;
  case 0xb:
    uVar1 = 3;
    break;
  case 0xc:
    uVar2 = read_struct_field_at_index_104c2890(*(void **)(param_1 + 0x7c),10);
    *(uint32_t *)(param_1 + 0x78) = uVar2;
    uVar1 = 0xf;
  }
  *(uint8_t *)(param_1 + 0x5e) = uVar1;
LAB_103727ea:
  iVar3 = read_struct_field_at_index_104c2890(*(void **)(param_1 + 0x7c),1);
  if (iVar3 == 1) {
    uVar1 = 0;
  }
  else if (iVar3 == 2) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  *(uint8_t *)(param_1 + 0x60) = uVar1;
  uVar2 = read_struct_field_at_index_104c2890(*(void **)(param_1 + 0x7c),2);
  switch(uVar2) {
  case 1:
    uVar1 = 1;
    break;
  case 2:
    uVar1 = 3;
    break;
  case 3:
    uVar1 = 5;
    break;
  case 4:
    *(uint8_t *)(param_1 + 0x61) = 2;
    goto LAB_10372854;
  case 5:
    uVar1 = 4;
    break;
  case 6:
    uVar1 = 0;
    break;
  case 7:
    uVar1 = 6;
    break;
  default:
    uVar1 = 3;
  }
  *(uint8_t *)(param_1 + 0x61) = uVar1;
LAB_10372854:
  uVar2 = read_struct_field_at_index_104c2890(*(void **)(param_1 + 0x7c),4);
  switch(uVar2) {
  case 1:
    uVar1 = 1;
    break;
  case 2:
    uVar1 = 3;
    break;
  case 3:
    uVar1 = 5;
    break;
  case 4:
    uVar1 = 2;
    break;
  case 5:
    uVar1 = 4;
    break;
  case 6:
    uVar1 = 0;
    break;
  case 7:
    uVar1 = 6;
    break;
  default:
    uVar1 = 3;
  }
  *(uint8_t *)(param_1 + 0x62) = uVar1;
  uVar2 = read_struct_field_at_index_104c2890(*(void **)(param_1 + 0x7c),3);
  switch(uVar2) {
  case 1:
    uVar1 = 1;
    break;
  case 2:
    uVar1 = 3;
    break;
  case 3:
    uVar1 = 5;
    break;
  case 4:
    uVar1 = 2;
    break;
  case 5:
    uVar1 = 4;
    break;
  case 6:
    uVar1 = 0;
    break;
  case 7:
    uVar1 = 6;
    break;
  default:
    uVar1 = 3;
  }
  *(uint8_t *)(param_1 + 99) = uVar1;
  return;
}
