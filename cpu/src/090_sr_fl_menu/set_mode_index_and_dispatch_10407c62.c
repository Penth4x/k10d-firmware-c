/* @k10d set_mode_index_and_dispatch_10407c62 @ 0x10407c62
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 090_sr_fl_menu (unit names are model-proposed)
 * purpose:
 *   Stores a mode index in the object, selects a corresponding data pointer, and invokes
 *   virtual callbacks.
 * summary:
 *   The function takes an object pointer and an index (param_2). It stores the index at
 *   offset 0x58 of the object. Based on the index, it selects a pointer to a static data
 *   block (DAT_105993c8..0x10599400) or sets a flag. It calls glyph_draw with the selected
 *   data pointer. It performs multiple virtual calls via menu_item_register, passing
 *   arguments 0 or 1. Finally, it calls set_mode_dependent_settings and
 *   update_viewfinder_overlay if the index is not 0xf or 0xffffffff.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_mode_index_and_dispatch_10407c62(void *param_1,uint32_t param_2)

{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  byte *pbVar4;
  int iVar5;
  
  iVar5 = (int)param_1 + 8;
  iVar2 = menu_item_register(iVar5);
  bVar1 = false;
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  pvVar3 = (void *)menu_item_register(iVar5);
  switch(param_2) {
  case 0:
    pbVar4 = (byte *)&DAT_105993c8/*ROM*/;
    *(uint8_t *)((int)param_1 + 0x58) = 0;
    break;
  case 1:
    pbVar4 = (byte *)0x105993cc/*ROM*/;
    *(uint8_t *)((int)param_1 + 0x58) = 1;
    break;
  case 2:
    pbVar4 = (byte *)0x105993d0/*ROM*/;
    *(uint8_t *)((int)param_1 + 0x58) = 2;
    break;
  case 3:
    pbVar4 = (byte *)0x105993d4/*ROM*/;
    *(uint8_t *)((int)param_1 + 0x58) = 3;
    break;
  case 4:
    pbVar4 = (byte *)0x105993d8/*ROM*/;
    *(uint8_t *)((int)param_1 + 0x58) = 4;
    break;
  case 5:
    pbVar4 = (byte *)0x105993dc/*ROM*/;
    *(uint8_t *)((int)param_1 + 0x58) = 5;
    break;
  case 6:
    pbVar4 = (byte *)0x105993e0/*ROM*/;
    *(uint8_t *)((int)param_1 + 0x58) = 6;
    break;
  case 7:
    *(uint8_t *)((int)param_1 + 0x58) = 7;
    glyph_draw(pvVar3,(void *)&DAT_105993e4/*ROM*/);
    iVar2 = menu_item_register(iVar5);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
    goto LAB_10407dd0;
  case 8:
    pbVar4 = (byte *)0x105993e8/*ROM*/;
    *(uint8_t *)((int)param_1 + 0x58) = 8;
    break;
  case 9:
    pbVar4 = (byte *)0x105993ec/*ROM*/;
    *(uint8_t *)((int)param_1 + 0x58) = 9;
    break;
  case 10:
    pbVar4 = (byte *)0x105993f0/*ROM*/;
    *(uint8_t *)((int)param_1 + 0x58) = 10;
    break;
  case 0xb:
    pbVar4 = (byte *)0x105993f4/*ROM*/;
    *(uint8_t *)((int)param_1 + 0x58) = 0xb;
    break;
  case 0xc:
    pbVar4 = (byte *)0x105993f8/*ROM*/;
    *(uint8_t *)((int)param_1 + 0x58) = 0xc;
    break;
  case 0xd:
    pbVar4 = (byte *)0x105993fc/*ROM*/;
    *(uint8_t *)((int)param_1 + 0x58) = 0xd;
    break;
  case 0xe:
    *(uint8_t *)((int)param_1 + 0x58) = 0xe;
    pbVar4 = (byte *)0x10599400/*ROM*/;
    break;
  case 0xf:
    bVar1 = true;
    goto LAB_10407dd0;
  case 0xffffffff:
    bVar1 = true;
    goto LAB_10407dd0;
  default:
    goto LAB_10407dd0;
  }
  glyph_draw(pvVar3,pbVar4);
LAB_10407dd0:
  iVar2 = menu_item_register(iVar5);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  if (*(char *)((int)param_1 + 0x58) != '\x0e') {
    iVar2 = menu_item_register(iVar5);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  }
  if (*(char *)((int)param_1 + 0x58) != '\0') {
    iVar2 = menu_item_register(iVar5);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  }
  if (!bVar1) {
    set_mode_dependent_settings(*(uint32_t *)((int)param_1 + 0x28),*(uint8_t *)((int)param_1 + 0x57),
                 *(uint8_t *)((int)param_1 + 0x58),*(uint8_t *)((int)param_1 + 0x54));
    update_viewfinder_overlay(param_1);
  }
  return;
}
