/* @k10d configure_mode_transition_state @ 0x103bf568
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 054_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Initializes object state and dispatches virtual calls to set up a new operating mode
 *   based on flags and settings.
 * summary:
 *   The function writes the input flag (param_2) to offset 0xc of the object and
 *   initializes offset 0x32. It retrieves a context object via menu_item_register and
 *   invokes virtual methods (slots at offsets 0x74 and 0xc) with arguments derived from the
 *   flag bits. It checks specific settings (setting_get id 0xd2) and internal states
 *   (get_or_init_sram_block_105342fe) to set a boolean flag at offset 0x35. Finally, it
 *   performs a series of virtual calls with argument 0 and registers the object's sub-
 *   structure at offset 0x14 with a global manager
 *   (get_or_create_singleton_object_1050b118) and another object
 *   (get_or_create_camera_object).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103bf772) overlaps instruction at (ram,0x103bf770)
    */

void configure_mode_transition_state(int *param_1,uint16_t param_2)

{
  uint8_t uVar1;
  int iVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar2 = get_or_create_singleton_object_104bb22a();
  write_exposure_settings_from_object(*(uint32_t *)(iVar2 + 4),param_1[2]);
  iVar2 = get_or_create_singleton_object_104fb12e();
  iVar8 = *(int *)(iVar2 + 0x74);
  *(uint16_t *)(param_1 + 3) = param_2;
  *(uint8_t *)((int)param_1 + 0x32) = 0xff;
  iVar2 = menu_item_register(*param_1);
  if (((*(ushort *)(param_1 + 3) & 2) == 2) || ((*(ushort *)(param_1 + 3) & 4) == 4)) {
    (**(code **)(*(int *)(iVar2 + 0xc) + 0x74))(*(short *)(*(int *)(iVar2 + 0xc) + 0x70) + iVar2,0);
  }
  else {
    (**(code **)(*(int *)(iVar2 + 0xc) + 0x74))(*(short *)(*(int *)(iVar2 + 0xc) + 0x70) + iVar2,1);
  }
  iVar2 = menu_item_register(*param_1);
  if ((*(ushort *)(param_1 + 3) & 1) == 1) {
    uVar3 = get_or_init_heap_block();
    uVar4 = get_setting_by_index((int)param_1,0x48);
    iVar8 = map_mode_index_to_code_1045b524(uVar3,uVar4);
    if (iVar8 == 0) {
      *(uint8_t *)((int)param_1 + 0x32) = 0;
    }
    (**(code **)(*(int *)(iVar2 + 0xc) + 0x74))(*(short *)(*(int *)(iVar2 + 0xc) + 0x70) + iVar2,0);
    iVar2 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
    iVar2 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
    iVar2 = *param_1;
  }
  else {
    uVar5 = query_object_byte_property_104f1ab6(iVar8);
    if (uVar5 == 3) {
      *(uint8_t *)((int)param_1 + 0x32) = 0;
    }
    (**(code **)(*(int *)(iVar2 + 0xc) + 0x74))(*(short *)(*(int *)(iVar2 + 0xc) + 0x70) + iVar2,1);
    iVar2 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
    iVar2 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
    iVar2 = *param_1;
  }
  iVar2 = menu_item_register(iVar2);
  uVar3 = get_or_init_sram_block_105342fe();
  iVar8 = (*(code *)0x10534358/*ROM*/)(uVar3,0x2c);
  uVar3 = get_or_init_sram_block_105342fe();
  iVar6 = (*(code *)0x10534358/*ROM*/)(uVar3,0x1a);
  iVar7 = setting_get(param_1[2],0xd2);
  if (((iVar7 == 1) && (((iVar8 == 0 || (iVar8 == 1)) || (iVar8 == 2)))) ||
     ((iVar8 == 2 && (iVar6 == 1)))) {
    (**(code **)(*(int *)(iVar2 + 0xc) + 0x74))(*(short *)(*(int *)(iVar2 + 0xc) + 0x70) + iVar2,1);
    uVar1 = 1;
  }
  else {
    (**(code **)(*(int *)(iVar2 + 0xc) + 0x74))(*(short *)(*(int *)(iVar2 + 0xc) + 0x70) + iVar2,0);
    uVar1 = 0;
  }
  *(uint8_t *)((int)param_1 + 0x35) = uVar1;
  iVar2 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  check_mode_transition_validity(param_1,0);
  iVar2 = get_or_create_singleton_object_1050b118();
  *(int **)(iVar2 + 0x58) = param_1 + 5;
  iVar2 = get_or_create_camera_object();
  iVar8 = **(int **)(iVar2 + 4);
  (**(code **)(iVar8 + 0x9c))
            ((int)*(int **)(iVar2 + 4) + (int)*(short *)(iVar8 + 0x98),param_1 + 5,param_1[0xb],
             param_1 + 9);
  *(uint8_t *)((int)param_1 + 0x36) = 1;
  return;
}
