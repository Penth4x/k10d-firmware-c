/* @k10d split_value_and_write_fields @ 0x103c0c3e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 054_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper to compute a value, splits it into high/low parts, and conditionally
 *   writes them to an object via virtual calls.
 * summary:
 *   The function calls build_and_send_status_packet_103c0b8c with the input parameters,
 *   capturing the return value in r4. It decomposes this value into a high part (divided by
 *   10000) and a low part (remainder). If bit 1 of the third word in the object is set, it
 *   reads setting 0xab and calls a virtual method with argument 1. Otherwise, if the high
 *   part is zero, it calls a virtual method with 0, writes the low part via
 *   menu_list_build, and calls the virtual method with 1. If the high part is non-zero, it
 *   writes the high part, calls the virtual method with 1, writes the low part, and calls
 *   the virtual method with 1 again. The virtual calls appear to update fields in an object
 *   retrieved via menu_item_register.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void split_value_and_write_fields(int *param_1,uint32_t param_2,uint32_t param_3,int param_4)

{
  int iVar1;
  uint extraout_r4;
  uint32_t uVar2;
  uintptr_t sp;
  short sStack_c;
  short sStack_a;
  
  sStack_c = 0;
  sStack_a = 0;
  build_and_send_status_packet_103c0b8c((int)param_1,param_2,param_3,param_4);
  sStack_c = (short)(extraout_r4 / 10000);
  sStack_a = (short)extraout_r4 + sStack_c * -10000;
  if ((*(ushort *)(param_1 + 3) & 2) == 2) {
    setting_get(param_1[2],0xab);
    iVar1 = 1;
    do {
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
    iVar1 = menu_item_register(*param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  else if (sStack_c == 0) {
    iVar1 = menu_item_register(*param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    uVar2 = menu_item_register(*param_1);
    menu_list_build((int *)(uVar2),(uint16_t *)(&sStack_a),(uint8_t)(4),(uint8_t)(1));
    iVar1 = menu_item_register(*param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  else {
    uVar2 = menu_item_register(*param_1);
    menu_list_build((int *)(uVar2),(uint16_t *)(&sStack_c),(uint8_t)(1),(uint8_t)(1));
    iVar1 = menu_item_register(*param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    uVar2 = menu_item_register(*param_1);
    menu_list_build((int *)(uVar2),(uint16_t *)(&sStack_a),(uint8_t)(4),(uint8_t)(0));
    iVar1 = menu_item_register(*param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  return;
}
