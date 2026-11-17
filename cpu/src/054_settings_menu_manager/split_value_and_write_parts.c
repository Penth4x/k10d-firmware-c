/* @k10d split_value_and_write_parts @ 0x103bdbfc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 054_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Computes a value via a helper, splits it into high/low parts, and writes them to an
 *   object based on a flag.
 * summary:
 *   Calls build_event_payload_and_dispatch to compute a value in r4. Splits this value into
 *   high (div 10000) and low (mod 10000) shorts. If bit 1 of param_1[3] is set, it reads
 *   setting 0xab and calls a virtual method with arg 1. Otherwise, it uses
 *   menu_item_register to get an object and menu_list_build to write the high or low parts
 *   to it, bracketing the writes with virtual method calls (likely enable/disable or
 *   refresh).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void split_value_and_write_parts(int *param_1,uint8_t param_2,uint32_t param_3)

{
  int iVar1;
  uint extraout_r4;
  uint32_t uVar2;
  uintptr_t sp;
  short sStack_c;
  short sStack_a;
  
  sStack_c = 0;
  sStack_a = 0;
  build_event_payload_and_dispatch((int)param_1,param_2,param_3);
  sStack_c = (short)(extraout_r4 / 10000);
  sStack_a = (short)extraout_r4 + sStack_c * -10000;
  if ((*(ushort *)(param_1 + 3) & 2) == 2) {
    setting_get(param_1[2],0xab);
    iVar1 = 1;
    do {
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  else if (sStack_c == 0) {
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    uVar2 = menu_item_register(*param_1);
    menu_list_build((void *)uVar2,&sStack_a,4,1);
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  else {
    uVar2 = menu_item_register(*param_1);
    menu_list_build((void *)uVar2,&sStack_c,1,1);
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    uVar2 = menu_item_register(*param_1);
    menu_list_build((void *)uVar2,&sStack_a,4,0);
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  return;
}
