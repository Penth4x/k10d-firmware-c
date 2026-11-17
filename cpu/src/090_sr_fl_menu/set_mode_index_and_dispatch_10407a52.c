/* @k10d set_mode_index_and_dispatch_10407a52 @ 0x10407a52
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 090_sr_fl_menu (unit names are model-proposed)
 * purpose:
 *   Stores a mode index in the object, selects a corresponding data pointer, and invokes
 *   virtual callbacks.
 * summary:
 *   The function takes an object pointer and an index (param_2). It writes the index to
 *   offset 0x57 of the object. Based on the index, it selects a pointer to a static data
 *   block (DAT_1059938c..DAT_105993c4) or sets a flag. It calls glyph_draw with the
 *   selected data pointer and a value obtained from menu_item_register. It performs
 *   multiple virtual calls (via vtable at offset 0xc) with arguments 0 and 1. Finally, if
 *   the flag is not set, it calls set_mode_dependent_settings with fields from the object
 *   and calls update_viewfinder_overlay.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_mode_index_and_dispatch_10407a52(void *param_1,uint32_t param_2)

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
    pbVar4 = (byte *)&DAT_1059938c/*ROM*/;
    *(uint8_t *)((int)param_1 + 0x57) = 0;
    break;
  case 1:
    pbVar4 = (byte *)0x10599390/*ROM*/;
    *(uint8_t *)((int)param_1 + 0x57) = 1;
    break;
  case 2:
    pbVar4 = (byte *)0x10599394/*ROM*/;
    *(uint8_t *)((int)param_1 + 0x57) = 2;
    break;
  case 3:
    pbVar4 = (byte *)0x10599398/*ROM*/;
    *(uint8_t *)((int)param_1 + 0x57) = 3;
    break;
  case 4:
    pbVar4 = (byte *)0x1059939c/*ROM*/;
    *(uint8_t *)((int)param_1 + 0x57) = 4;
    break;
  case 5:
    pbVar4 = (byte *)0x105993a0/*ROM*/;
    *(uint8_t *)((int)param_1 + 0x57) = 5;
    break;
  case 6:
    pbVar4 = (byte *)0x105993a4/*ROM*/;
    *(uint8_t *)((int)param_1 + 0x57) = 6;
    break;
  case 7:
    *(uint8_t *)((int)param_1 + 0x57) = 7;
    glyph_draw(pvVar3,(void *)&DAT_105993a8/*ROM*/);
    iVar2 = menu_item_register(iVar5);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
    goto LAB_10407bc0;
  case 8:
    pbVar4 = (byte *)0x105993ac/*ROM*/;
    *(uint8_t *)((int)param_1 + 0x57) = 8;
    break;
  case 9:
    pbVar4 = (byte *)0x105993b0/*ROM*/;
    *(uint8_t *)((int)param_1 + 0x57) = 9;
    break;
  case 10:
    pbVar4 = (byte *)0x105993b4/*ROM*/;
    *(uint8_t *)((int)param_1 + 0x57) = 10;
    break;
  case 0xb:
    pbVar4 = (byte *)0x105993b8/*ROM*/;
    *(uint8_t *)((int)param_1 + 0x57) = 0xb;
    break;
  case 0xc:
    pbVar4 = (byte *)0x105993bc/*ROM*/;
    *(uint8_t *)((int)param_1 + 0x57) = 0xc;
    break;
  case 0xd:
    pbVar4 = (byte *)0x105993c0/*ROM*/;
    *(uint8_t *)((int)param_1 + 0x57) = 0xd;
    break;
  case 0xe:
    *(uint8_t *)((int)param_1 + 0x57) = 0xe;
    pbVar4 = (byte *)0x105993c4/*ROM*/;
    break;
  case 0xf:
    bVar1 = true;
    goto LAB_10407bc0;
  case 0xffffffff:
    bVar1 = true;
    goto LAB_10407bc0;
  default:
    goto LAB_10407bc0;
  }
  glyph_draw(pvVar3,pbVar4);
LAB_10407bc0:
  iVar2 = menu_item_register(iVar5);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  if (*(char *)((int)param_1 + 0x57) != '\x0e') {
    iVar2 = menu_item_register(iVar5);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  }
  if (*(char *)((int)param_1 + 0x57) != '\0') {
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
