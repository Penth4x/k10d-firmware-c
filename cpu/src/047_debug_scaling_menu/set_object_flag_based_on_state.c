/* @k10d set_object_flag_based_on_state @ 0x103ac5ce
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 047_debug_scaling_menu (unit names are model-proposed)
 * purpose:
 *   Sets a boolean flag on an object to true if its state value is 0 or 12-14, otherwise
 *   false.
 * summary:
 *   Retrieves an object pointer via menu_item_register and calls a virtual method (slot 2)
 *   with argument 0. Reads a state value from param_1+0x28 via
 *   get_setting_by_mode_flag_104f07f4. If the state is 0 or in the range 12-14, it calls
 *   the same virtual method with argument 1; otherwise, it skips the second call. The
 *   function effectively toggles a flag based on specific state conditions.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_object_flag_based_on_state(void *param_1)

{
  bool bVar1;
  int iVar2;
  uint32_t uVar3;
  
  iVar2 = menu_item_register((int)param_1 + 8);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  uVar3 = get_setting_by_mode_flag_104f07f4(*(int *)((int)param_1 + 0x28));
  switch(uVar3) {
  default:
    bVar1 = true;
    break;
  case 1:
    bVar1 = false;
    break;
  case 2:
    bVar1 = false;
    break;
  case 3:
    bVar1 = false;
    break;
  case 4:
    bVar1 = false;
    break;
  case 5:
    bVar1 = false;
    break;
  case 6:
    bVar1 = false;
    break;
  case 7:
    bVar1 = false;
    break;
  case 8:
    bVar1 = false;
    break;
  case 9:
  case 10:
  case 0xb:
    bVar1 = false;
    break;
  case 0xc:
  case 0xd:
  case 0xe:
    goto LAB_103ac684;
  }
  if (!bVar1) {
LAB_103ac684:
    iVar2 = menu_item_register((int)param_1 + 8);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  }
  return;
}
