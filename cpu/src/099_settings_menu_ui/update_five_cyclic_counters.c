/* @k10d update_five_cyclic_counters @ 0x104244da
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 099_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Increments or decrements five 0-4 cyclic counters in a struct based on event codes and
 *   dispatches the new values.
 * summary:
 *   The function stores param_2 into the struct at offset 0x14. It then checks the struct's
 *   type field (offset 0x18) against five specific values (0x1be0005, 0x1be000a, 0x1be000f,
 *   0x1be0014, 0x1be0019). For each matching type, it adjusts a corresponding counter
 *   (offsets 0x20, 0x24, 0x28, 0x2c, 0x30) by +1 or -1 (wrapping 0-4) if param_2 is 0xd or
 *   0xe, and calls menu_list_build with the result. Finally, it dispatches based on the
 *   stored event code: if 0x11, it calls set_sysparam_store_entry five times with the
 *   counter values; if 0xc, it calls get_or_init_sram_object_104248cc; otherwise it sets a
 *   byte at offset 0x35 to a value determined by the event code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1042478e) overlaps instruction at (ram,0x1042478c)
    */

cls_1059ddb0 * update_five_cyclic_counters(cls_1059ddb0 *param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  cls_1059ddb0 *pcVar3;
  uintptr_t sp;
  uint16_t uStack_a;
  
  uStack_a = 0;
  *(int *)&param_1->field_0x14 = param_2;
  if (param_1->field_0x18 == 0x1be0005) {
    if (param_2 == 0xd) {
      if (*(int *)&param_1->field_0x20 < 4) {
        iVar1 = *(int *)&param_1->field_0x20 + 1;
      }
      else {
        iVar1 = 0;
      }
LAB_10424520:
      *(int *)&param_1->field_0x20 = iVar1;
    }
    else if (param_2 == 0xe) {
      if (*(int *)&param_1->field_0x20 < 1) {
        iVar1 = 4;
      }
      else {
        iVar1 = *(int *)&param_1->field_0x20 + -1;
      }
      goto LAB_10424520;
    }
    uVar2 = menu_item_register((int)param_1->field_0x0);
    uStack_a = (uint16_t)*(uint32_t *)&param_1->field_0x20;
    menu_list_build((int *)(uVar2),(uint16_t *)(&uStack_a),(uint8_t)(1),(uint8_t)(0));
  }
  if (param_1->field_0x18 == 0x1be000a) {
    if (*(int *)&param_1->field_0x14 == 0xd) {
      if (*(int *)&param_1->field_0x24 < 4) {
        iVar1 = *(int *)&param_1->field_0x24 + 1;
      }
      else {
        iVar1 = 0;
      }
LAB_10424582:
      *(int *)&param_1->field_0x24 = iVar1;
    }
    else if (*(int *)&param_1->field_0x14 == 0xe) {
      if (*(int *)&param_1->field_0x24 < 1) {
        iVar1 = 4;
      }
      else {
        iVar1 = *(int *)&param_1->field_0x24 + -1;
      }
      goto LAB_10424582;
    }
    uVar2 = menu_item_register((int)param_1->field_0x0);
    uStack_a = (uint16_t)*(uint32_t *)&param_1->field_0x24;
    menu_list_build((int *)(uVar2),(uint16_t *)(&uStack_a),(uint8_t)(1),(uint8_t)(0));
  }
  if (param_1->field_0x18 == 0x1be000f) {
    if (*(int *)&param_1->field_0x14 == 0xd) {
      if (*(int *)&param_1->field_0x28 < 4) {
        iVar1 = *(int *)&param_1->field_0x28 + 1;
      }
      else {
        iVar1 = 0;
      }
LAB_104245e4:
      *(int *)&param_1->field_0x28 = iVar1;
    }
    else if (*(int *)&param_1->field_0x14 == 0xe) {
      if (*(int *)&param_1->field_0x28 < 1) {
        iVar1 = 4;
      }
      else {
        iVar1 = *(int *)&param_1->field_0x28 + -1;
      }
      goto LAB_104245e4;
    }
    uVar2 = menu_item_register((int)param_1->field_0x0);
    uStack_a = (uint16_t)*(uint32_t *)&param_1->field_0x28;
    menu_list_build((int *)(uVar2),(uint16_t *)(&uStack_a),(uint8_t)(1),(uint8_t)(0));
  }
  if (param_1->field_0x18 == 0x1be0014) {
    if (*(int *)&param_1->field_0x14 == 0xd) {
      if (*(int *)&param_1->field_0x2c < 4) {
        iVar1 = *(int *)&param_1->field_0x2c + 1;
      }
      else {
        iVar1 = 0;
      }
LAB_10424646:
      *(int *)&param_1->field_0x2c = iVar1;
    }
    else if (*(int *)&param_1->field_0x14 == 0xe) {
      if (*(int *)&param_1->field_0x2c < 1) {
        iVar1 = 4;
      }
      else {
        iVar1 = *(int *)&param_1->field_0x2c + -1;
      }
      goto LAB_10424646;
    }
    uVar2 = menu_item_register((int)param_1->field_0x0);
    uStack_a = (uint16_t)*(uint32_t *)&param_1->field_0x2c;
    menu_list_build((int *)(uVar2),(uint16_t *)(&uStack_a),(uint8_t)(1),(uint8_t)(0));
  }
  if (param_1->field_0x18 != 0x1be0019) goto LAB_104246d4;
  if (*(int *)&param_1->field_0x14 == 0xd) {
    if (*(int *)&param_1->field_0x30 < 4) {
      iVar1 = *(int *)&param_1->field_0x30 + 1;
    }
    else {
      iVar1 = 0;
    }
LAB_104246a8:
    *(int *)&param_1->field_0x30 = iVar1;
  }
  else if (*(int *)&param_1->field_0x14 == 0xe) {
    if (*(int *)&param_1->field_0x30 < 1) {
      iVar1 = 4;
    }
    else {
      iVar1 = *(int *)&param_1->field_0x30 + -1;
    }
    goto LAB_104246a8;
  }
  uVar2 = menu_item_register((int)param_1->field_0x0);
  uStack_a = (uint16_t)*(uint32_t *)&param_1->field_0x30;
  menu_list_build((int *)(uVar2),(uint16_t *)(&uStack_a),(uint8_t)(1),(uint8_t)(0));
LAB_104246d4:
  pcVar3 = param_1;
  if (*(int *)&param_1->field_0x14 == 0x11) {
    uVar2 = get_sysparam_store_instance();
    set_sysparam_store_entry(uVar2,0,*(uint32_t *)&param_1->field_0x20);
    uVar2 = get_sysparam_store_instance();
    set_sysparam_store_entry(uVar2,1,*(uint32_t *)&param_1->field_0x24);
    uVar2 = get_sysparam_store_instance();
    set_sysparam_store_entry(uVar2,2,*(uint32_t *)&param_1->field_0x28);
    uVar2 = get_sysparam_store_instance();
    set_sysparam_store_entry(uVar2,3,*(uint32_t *)&param_1->field_0x2c);
    uVar2 = get_sysparam_store_instance();
    set_sysparam_store_entry(uVar2,4,*(uint32_t *)&param_1->field_0x30);
    param_1->field_0x35 = 0x50;
    pcVar3 = (cls_1059ddb0 *)0x0;
  }
  if (*(int *)&param_1->field_0x14 == 0xc) {
    pcVar3 = (cls_1059ddb0 *)get_or_init_sram_object_104248cc();
  }
  iVar1 = *(int *)&param_1->field_0x14;
  if ((((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) || (iVar1 == 3)) {
    param_1->field_0x35 = 0x8c;
    pcVar3 = (cls_1059ddb0 *)0x0;
  }
  if ((*(int *)&param_1->field_0x14 == 0x19) || (*(int *)&param_1->field_0x14 == 9)) {
    param_1->field_0x35 = 0x50;
    pcVar3 = (cls_1059ddb0 *)0x0;
  }
  if (*(int *)&param_1->field_0x14 == 0x18) {
    param_1->field_0x35 = 0xb4;
    pcVar3 = (cls_1059ddb0 *)0x0;
  }
  if (*(int *)&param_1->field_0x14 == 0x2c) {
    param_1->field_0x35 = 0x8c;
    pcVar3 = (cls_1059ddb0 *)0x0;
  }
  if (*(int *)&param_1->field_0x14 == 10) {
    param_1->field_0x35 = 200;
    pcVar3 = (cls_1059ddb0 *)0x0;
  }
  return pcVar3;
}
