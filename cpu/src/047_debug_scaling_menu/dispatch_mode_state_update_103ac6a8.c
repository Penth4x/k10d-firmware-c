/* @k10d dispatch_mode_state_update_103ac6a8 @ 0x103ac6a8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 047_debug_scaling_menu (unit names are model-proposed)
 * purpose:
 *   Switches on a mode byte at offset 0x48 to conditionally invoke virtual methods and a
 *   helper function.
 * summary:
 *   The function reads a byte from param_1+0x48 and uses a switch statement to determine a
 *   boolean flag. For most cases (6, 8, 10, 0xc, 0xe, 0x16, 0x1c, 0x1e), the flag is false.
 *   For case 0x18 and the default case, the flag is true. If the flag is false, it calls a
 *   virtual method (slot 2) with argument 1 twice and then calls
 *   call_helper_and_set_flag_104b7744 with arguments 0x90 and 1. It also checks a value
 *   from check_object_property_43 and calls the virtual method again if non-zero. The
 *   virtual calls use menu_item_register to retrieve an object pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_mode_state_update_103ac6a8(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = (int)param_1 + 8;
  iVar1 = menu_item_register(iVar4);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = 0;
  switch(*(uint8_t *)((int)param_1 + 0x48)) {
  case 6:
    bVar5 = false;
    break;
  case 8:
    bVar5 = false;
    break;
  case 10:
    bVar5 = false;
    break;
  case 0xc:
    bVar5 = false;
    break;
  case 0xe:
    bVar5 = false;
    break;
  case 0x16:
    bVar5 = false;
    break;
  case 0x18:
    iVar1 = 0x2090061;
  default:
    bVar5 = iVar1 == 0;
    break;
  case 0x1c:
    bVar5 = false;
    break;
  case 0x1e:
    bVar5 = false;
  }
  if (!bVar5) {
    iVar1 = menu_item_register(iVar4);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    iVar1 = menu_item_register(iVar4);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    uVar2 = menu_item_register(iVar4);
    call_helper_and_set_flag_104b7744((uint32_t *)(uVar2),(uint16_t)(0x90),(uint16_t)(1));
  }
  uVar3 = check_object_property_43(*(int *)((int)param_1 + 0x28));
  if (uVar3 != 0) {
    iVar1 = menu_item_register(iVar4);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  return;
}
