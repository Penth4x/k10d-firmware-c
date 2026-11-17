/* @k10d register_and_activate_menu_items_1038a3d0 @ 0x1038a3d0
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Resets 13 objects retrieved from a container and then activates one selected by an
 *   index parameter.
 * summary:
 *   The function calls menu_item_register 13 times with param_1 to retrieve object
 *   pointers. It invokes a virtual method (slot 2) on each object with argument 0, likely
 *   to reset their state. A switch statement on param_2 then calls the same virtual method
 *   with argument 1 on a specific object, or handles special cases involving
 *   format_string_to_buffer_10545140 and glyph_draw. The specific role of the objects and
 *   the virtual method is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1038a5ee) overlaps instruction at (ram,0x1038a5ec)
    */

void register_and_activate_menu_items_1038a3d0(int param_1,uint32_t param_2,void *param_3,void *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  void *pvVar13;
  void *pcVar14;
  void *pvVar15;
  
  pvVar15 = param_3;
  iVar1 = menu_item_register(param_1);
  iVar2 = menu_item_register(param_1);
  iVar3 = menu_item_register(param_1);
  iVar4 = menu_item_register(param_1);
  iVar5 = menu_item_register(param_1);
  iVar6 = menu_item_register(param_1);
  iVar7 = menu_item_register(param_1);
  iVar8 = menu_item_register(param_1);
  iVar9 = menu_item_register(param_1);
  iVar10 = menu_item_register(param_1);
  iVar11 = menu_item_register(param_1);
  iVar12 = menu_item_register(param_1);
  pvVar13 = (void *)menu_item_register(param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,0);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,0);
  (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,0);
  (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,0);
  (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(*(short *)(*(int *)(iVar5 + 0xc) + 8) + iVar5,0);
  (**(code **)(*(int *)(iVar6 + 0xc) + 0xc))(*(short *)(*(int *)(iVar6 + 0xc) + 8) + iVar6,0);
  (**(code **)(*(int *)(iVar7 + 0xc) + 0xc))(*(short *)(*(int *)(iVar7 + 0xc) + 8) + iVar7,0);
  (**(code **)(*(int *)(iVar8 + 0xc) + 0xc))(*(short *)(*(int *)(iVar8 + 0xc) + 8) + iVar8,0);
  (**(code **)(*(int *)(iVar9 + 0xc) + 0xc))(*(short *)(*(int *)(iVar9 + 0xc) + 8) + iVar9,0);
  (**(code **)(*(int *)(iVar10 + 0xc) + 0xc))(*(short *)(*(int *)(iVar10 + 0xc) + 8) + iVar10,0);
  (**(code **)(*(int *)(iVar11 + 0xc) + 0xc))(*(short *)(*(int *)(iVar11 + 0xc) + 8) + iVar11,0);
  (**(code **)(*(int *)(iVar12 + 0xc) + 0xc))(*(short *)(*(int *)(iVar12 + 0xc) + 8) + iVar12,0);
  (**(code **)(*(int *)((int)pvVar13 + 0xc) + 0xc))
            ((int)*(short *)(*(int *)((int)pvVar13 + 0xc) + 8) + (int)pvVar13,0);
  switch(param_2) {
  case 1:
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,1);
    break;
  case 2:
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,1);
    break;
  case 3:
    (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
    break;
  case 4:
    (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(*(short *)(*(int *)(iVar5 + 0xc) + 8) + iVar5,1);
    break;
  case 5:
    (**(code **)(*(int *)(iVar9 + 0xc) + 0xc))(*(short *)(*(int *)(iVar9 + 0xc) + 8) + iVar9,1);
    break;
  case 6:
    (**(code **)(*(int *)(iVar11 + 0xc) + 0xc))(*(short *)(*(int *)(iVar11 + 0xc) + 8) + iVar11,1);
    break;
  case 7:
    (**(code **)(*(int *)(iVar8 + 0xc) + 0xc))(*(short *)(*(int *)(iVar8 + 0xc) + 8) + iVar8,1);
    break;
  case 8:
    (**(code **)(*(int *)(iVar6 + 0xc) + 0xc))(*(short *)(*(int *)(iVar6 + 0xc) + 8) + iVar6,1);
    break;
  case 9:
    (**(code **)(*(int *)(iVar7 + 0xc) + 0xc))(*(short *)(*(int *)(iVar7 + 0xc) + 8) + iVar7,1);
    break;
  case 10:
    (**(code **)(*(int *)(iVar10 + 0xc) + 0xc))(*(short *)(*(int *)(iVar10 + 0xc) + 8) + iVar10,1);
    break;
  case 0xb:
    (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,1);
    break;
  case 0xc:
    if (param_3 == (void *)0x2710) {
      (**(code **)(*(int *)(iVar12 + 0xc) + 0xc))(*(short *)(*(int *)(iVar12 + 0xc) + 8) + iVar12,1)
      ;
    }
    else {
      if ((int)param_3 < 1) {
        pcVar14 = &DAT_105598f0/*ROM*/;
        param_3 = pvVar15;
      }
      else if ((int)param_3 < 0x2711) {
        pcVar14 = &DAT_10559900/*ROM*/;
      }
      else {
        pcVar14 = &DAT_105598f8/*ROM*/;
        param_3 = pvVar15;
      }
      format_string_to_buffer_10545140((uint8_t *)0x800197bc/*SDRAM*/,pcVar14,param_3,param_4);
      glyph_draw(pvVar13,(byte *)0x800197bc/*SDRAM*/);
      (**(code **)(*(int *)((int)pvVar13 + 0xc) + 0xc))
                ((int)*(short *)(*(int *)((int)pvVar13 + 0xc) + 8) + (int)pvVar13,1);
    }
    break;
  default:
    glyph_draw(pvVar13,(byte *)0x10559908/*ROM*/);
    (**(code **)(*(int *)((int)pvVar13 + 0xc) + 0xc))
              ((int)*(short *)(*(int *)((int)pvVar13 + 0xc) + 8) + (int)pvVar13,1);
  }
  return;
}
