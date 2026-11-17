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

int * update_five_cyclic_counters(int *param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  int *piVar3;
  uintptr_t sp;
  uint16_t uStack_a;
  
  uStack_a = 0;
  param_1[5] = param_2;
  if (param_1[6] == 0x1be0005) {
    if (param_2 == 0xd) {
      if (param_1[8] < 4) {
        iVar1 = param_1[8] + 1;
      }
      else {
        iVar1 = 0;
      }
LAB_10424520:
      param_1[8] = iVar1;
    }
    else if (param_2 == 0xe) {
      if (param_1[8] < 1) {
        iVar1 = 4;
      }
      else {
        iVar1 = param_1[8] + -1;
      }
      goto LAB_10424520;
    }
    uVar2 = menu_item_register(*param_1);
    uStack_a = (uint16_t)param_1[8];
    menu_list_build((void *)uVar2,&uStack_a,1,0);
  }
  if (param_1[6] == 0x1be000a) {
    if (param_1[5] == 0xd) {
      if (param_1[9] < 4) {
        iVar1 = param_1[9] + 1;
      }
      else {
        iVar1 = 0;
      }
LAB_10424582:
      param_1[9] = iVar1;
    }
    else if (param_1[5] == 0xe) {
      if (param_1[9] < 1) {
        iVar1 = 4;
      }
      else {
        iVar1 = param_1[9] + -1;
      }
      goto LAB_10424582;
    }
    uVar2 = menu_item_register(*param_1);
    uStack_a = (uint16_t)param_1[9];
    menu_list_build((void *)uVar2,&uStack_a,1,0);
  }
  if (param_1[6] == 0x1be000f) {
    if (param_1[5] == 0xd) {
      if (param_1[10] < 4) {
        iVar1 = param_1[10] + 1;
      }
      else {
        iVar1 = 0;
      }
LAB_104245e4:
      param_1[10] = iVar1;
    }
    else if (param_1[5] == 0xe) {
      if (param_1[10] < 1) {
        iVar1 = 4;
      }
      else {
        iVar1 = param_1[10] + -1;
      }
      goto LAB_104245e4;
    }
    uVar2 = menu_item_register(*param_1);
    uStack_a = (uint16_t)param_1[10];
    menu_list_build((void *)uVar2,&uStack_a,1,0);
  }
  if (param_1[6] == 0x1be0014) {
    if (param_1[5] == 0xd) {
      if (param_1[0xb] < 4) {
        iVar1 = param_1[0xb] + 1;
      }
      else {
        iVar1 = 0;
      }
LAB_10424646:
      param_1[0xb] = iVar1;
    }
    else if (param_1[5] == 0xe) {
      if (param_1[0xb] < 1) {
        iVar1 = 4;
      }
      else {
        iVar1 = param_1[0xb] + -1;
      }
      goto LAB_10424646;
    }
    uVar2 = menu_item_register(*param_1);
    uStack_a = (uint16_t)param_1[0xb];
    menu_list_build((void *)uVar2,&uStack_a,1,0);
  }
  if (param_1[6] != 0x1be0019) goto LAB_104246d4;
  if (param_1[5] == 0xd) {
    if (param_1[0xc] < 4) {
      iVar1 = param_1[0xc] + 1;
    }
    else {
      iVar1 = 0;
    }
LAB_104246a8:
    param_1[0xc] = iVar1;
  }
  else if (param_1[5] == 0xe) {
    if (param_1[0xc] < 1) {
      iVar1 = 4;
    }
    else {
      iVar1 = param_1[0xc] + -1;
    }
    goto LAB_104246a8;
  }
  uVar2 = menu_item_register(*param_1);
  uStack_a = (uint16_t)param_1[0xc];
  menu_list_build((void *)uVar2,&uStack_a,1,0);
LAB_104246d4:
  piVar3 = param_1;
  if (param_1[5] == 0x11) {
    uVar2 = get_sysparam_store_instance();
    set_sysparam_store_entry(uVar2,0,param_1[8]);
    uVar2 = get_sysparam_store_instance();
    set_sysparam_store_entry(uVar2,1,param_1[9]);
    uVar2 = get_sysparam_store_instance();
    set_sysparam_store_entry(uVar2,2,param_1[10]);
    uVar2 = get_sysparam_store_instance();
    set_sysparam_store_entry(uVar2,3,param_1[0xb]);
    uVar2 = get_sysparam_store_instance();
    set_sysparam_store_entry(uVar2,4,param_1[0xc]);
    *(uint8_t *)((int)param_1 + 0x35) = 0x50;
    piVar3 = (int *)0x0;
  }
  if (param_1[5] == 0xc) {
    piVar3 = (int *)get_or_init_sram_object_104248cc();
  }
  iVar1 = param_1[5];
  if ((((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) || (iVar1 == 3)) {
    *(uint8_t *)((int)param_1 + 0x35) = 0x8c;
    piVar3 = (int *)0x0;
  }
  if ((param_1[5] == 0x19) || (param_1[5] == 9)) {
    *(uint8_t *)((int)param_1 + 0x35) = 0x50;
    piVar3 = (int *)0x0;
  }
  if (param_1[5] == 0x18) {
    *(uint8_t *)((int)param_1 + 0x35) = 0xb4;
    piVar3 = (int *)0x0;
  }
  if (param_1[5] == 0x2c) {
    *(uint8_t *)((int)param_1 + 0x35) = 0x8c;
    piVar3 = (int *)0x0;
  }
  if (param_1[5] == 10) {
    *(uint8_t *)((int)param_1 + 0x35) = 200;
    piVar3 = (int *)0x0;
  }
  return piVar3;
}
