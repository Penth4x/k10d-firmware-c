/* @k10d render_menu_item_labels @ 0x103b07c6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 049_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Reads two state values from an object, selects string constants by index, and writes
 *   them to two display objects.
 * summary:
 *   The function retrieves state values from an object at offset 0x28 using
 *   get_setting_by_mode_flag_104f07f4 and get_setting_by_index_and_mode. It uses these
 *   values to select specific string constants from two tables (DAT_10565dc0..DAT_10565df8
 *   and DAT_10565dfc..DAT_10565e34) and writes them to objects obtained via
 *   menu_item_register using glyph_draw. It also calls read_setting_by_index to update
 *   internal state and conditionally triggers virtual method calls on the objects if
 *   certain status conditions are met.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void render_menu_item_labels(void *param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint32_t extraout_r4;
  uint32_t uVar5;
  void *pvVar6;
  void *pvVar7;
  int iVar8;
  
  iVar1 = get_setting_by_mode_flag_104f07f4(*(int *)((int)param_1 + 0x28));
  iVar8 = (int)param_1 + 8;
  iVar2 = menu_item_register(iVar8);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  switch(iVar1) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
    break;
  case 9:
  case 10:
  case 0xb:
    break;
  case 0xc:
  case 0xd:
  case 0xe:
    iVar1 = get_setting_by_mode_index_104f0e20(*(int *)((int)param_1 + 0x28),iVar1);
    if (iVar1 != 0x58) {
      pvVar6 = (void *)menu_item_register(iVar8);
      pbVar3 = (byte *)select_and_copy_rodata_entry(*(uint32_t *)((int)param_1 + 0x28),iVar1);
      glyph_draw(pvVar6,pbVar3);
    }
  }
  iVar1 = menu_item_register(iVar8);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  iVar1 = *(int *)((int)param_1 + 0x28);
  uVar4 = get_setting_by_mode_flag_104f07f4(iVar1);
  read_setting_by_index(iVar1,uVar4);
  iVar1 = *(int *)((int)param_1 + 0x28);
  uVar4 = get_setting_by_mode_flag_104f07f4(iVar1);
  uVar5 = get_setting_by_index_and_mode(iVar1,uVar4);
  pvVar6 = (void *)menu_item_register(iVar8);
  pvVar7 = (void *)menu_item_register(iVar8);
  switch(extraout_r4) {
  case 0:
    pbVar3 = (byte *)&DAT_10565dc0/*ROM*/;
    break;
  case 1:
    pbVar3 = (byte *)&DAT_10565dc4/*ROM*/;
    break;
  case 2:
    pbVar3 = (byte *)&DAT_10565dc8/*ROM*/;
    break;
  case 3:
    pbVar3 = (byte *)&DAT_10565dcc/*ROM*/;
    break;
  case 4:
    pbVar3 = (byte *)&DAT_10565dd0/*ROM*/;
    break;
  case 5:
    pbVar3 = (byte *)&DAT_10565dd4/*ROM*/;
    break;
  case 6:
    pbVar3 = (byte *)&DAT_10565dd8/*ROM*/;
    break;
  case 7:
    pbVar3 = (byte *)&DAT_10565ddc/*ROM*/;
    break;
  case 8:
    pbVar3 = (byte *)&DAT_10565de0/*ROM*/;
    break;
  case 9:
    pbVar3 = (byte *)&DAT_10565de4/*ROM*/;
    break;
  case 10:
    pbVar3 = (byte *)&DAT_10565de8/*ROM*/;
    break;
  case 0xb:
    pbVar3 = (byte *)&DAT_10565dec/*ROM*/;
    break;
  case 0xc:
    pbVar3 = (byte *)&DAT_10565df0/*ROM*/;
    break;
  case 0xd:
    pbVar3 = (byte *)&DAT_10565df4/*ROM*/;
    break;
  case 0xe:
    pbVar3 = (byte *)&DAT_10565df8/*ROM*/;
    break;
  default:
    goto code_r0x103b09e4;
  }
  glyph_draw(pvVar6,pbVar3);
code_r0x103b09e4:
  switch(uVar5) {
  case 0:
    pbVar3 = (byte *)&DAT_10565dfc/*ROM*/;
    break;
  case 1:
    pbVar3 = (byte *)&DAT_10565e00/*ROM*/;
    break;
  case 2:
    pbVar3 = (byte *)&DAT_10565e04/*ROM*/;
    break;
  case 3:
    pbVar3 = (byte *)&DAT_10565e08/*ROM*/;
    break;
  case 4:
    pbVar3 = (byte *)&DAT_10565e0c/*ROM*/;
    break;
  case 5:
    pbVar3 = (byte *)&DAT_10565e10/*ROM*/;
    break;
  case 6:
    pbVar3 = (byte *)&DAT_10565e14/*ROM*/;
    break;
  case 7:
    pbVar3 = (byte *)&DAT_10565e18/*ROM*/;
    break;
  case 8:
    pbVar3 = (byte *)&DAT_10565e1c/*ROM*/;
    break;
  case 9:
    pbVar3 = (byte *)&DAT_10565e20/*ROM*/;
    break;
  case 10:
    pbVar3 = (byte *)&DAT_10565e24/*ROM*/;
    break;
  case 0xb:
    pbVar3 = (byte *)&DAT_10565e28/*ROM*/;
    break;
  case 0xc:
    pbVar3 = (byte *)&DAT_10565e2c/*ROM*/;
    break;
  case 0xd:
    pbVar3 = (byte *)&DAT_10565e30/*ROM*/;
    break;
  case 0xe:
    pbVar3 = (byte *)&DAT_10565e34/*ROM*/;
    break;
  default:
    goto switchD_103b09f0_default;
  }
  glyph_draw(pvVar7,pbVar3);
switchD_103b09f0_default:
  iVar1 = get_setting_by_mode_flag_104f07f4(*(int *)((int)param_1 + 0x28));
  if ((iVar1 != 0) || (iVar1 = check_setting_0xbb_is_one(*(uint32_t *)((int)param_1 + 0x28)), iVar1 != 0)) {
    (**(code **)(*(int *)((int)pvVar6 + 0xc) + 0xc))
              ((int)*(short *)(*(int *)((int)pvVar6 + 0xc) + 8) + (int)pvVar6,1);
    (**(code **)(*(int *)((int)pvVar7 + 0xc) + 0xc))
              ((int)*(short *)(*(int *)((int)pvVar7 + 0xc) + 8) + (int)pvVar7,1);
  }
  return;
}
