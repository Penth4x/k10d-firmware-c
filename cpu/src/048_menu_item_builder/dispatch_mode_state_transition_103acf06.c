/* @k10d dispatch_mode_state_transition_103acf06 @ 0x103acf06
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 048_menu_item_builder (unit names are model-proposed)
 * purpose:
 *   Updates an object's state via virtual calls based on a mode index and status flags.
 * summary:
 *   The function retrieves an object pointer from param_1+8 and invokes a virtual method
 *   (slot 2) with arguments 0 and 1 to initialize or update state. It then switches on a
 *   byte at param_1+0x48, calling helper functions (get_setting_199, get_setting_0xc4,
 *   etc.) with a pointer from param_1+0x28 to determine a final state. Depending on the
 *   mode and the return value of these helpers, it may call the virtual method again with
 *   argument 1 or skip it, effectively gating a state transition based on the current mode
 *   and status.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103acf92) overlaps instruction at (ram,0x103acf90)
    */
/* WARNING: Type propagation algorithm not settling */

void dispatch_mode_state_transition_103acf06(void *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1 + 8;
  iVar2 = menu_item_register(iVar3);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register(iVar3);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  iVar2 = menu_item_register(iVar3);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  switch(*(uint8_t *)((int)param_1 + 0x48)) {
  case 6:
    iVar2 = get_setting_199(*(int *)((int)param_1 + 0x28));
    if (iVar2 != 0) {
      if (iVar2 == 1) {
        if (*(char *)((int)param_1 + 0x4d) != '\0') break;
      }
      else {
        if (iVar2 != 2) {
          if (iVar2 != 3) goto joined_r0x103ad084;
          cVar1 = *(char *)((int)param_1 + 0x4d);
          goto joined_r0x103ad1aa;
        }
        if (*(char *)((int)param_1 + 0x4d) != '\0') goto LAB_103ad1fa;
      }
      goto LAB_103acfa0;
    }
    cVar1 = *(char *)((int)param_1 + 0x4d);
    goto joined_r0x103ad1aa;
  case 7:
  case 9:
  case 0xb:
  case 0xd:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x17:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1d:
    break;
  case 8:
    iVar2 = get_setting_0xc4(*(int *)((int)param_1 + 0x28));
    if (iVar2 != 0) {
      if (((iVar2 == 1) || (iVar2 == 2)) || (iVar2 != 3)) goto LAB_103ad1fa;
      goto LAB_103acfa0;
    }
    break;
  case 10:
    goto LAB_103acfa0;
  case 0xc:
    get_setting_0xc5(*(int *)((int)param_1 + 0x28));
    goto LAB_103ad1fa;
  case 0xe:
    iVar2 = get_setting_0xc6(*(int *)((int)param_1 + 0x28));
    if ((((iVar2 == 0) || (iVar2 == 1)) || (iVar2 == 2)) || (iVar2 == 3)) goto LAB_103ad1fa;
joined_r0x103ad084:
    if (iVar2 == 4) goto LAB_103ad1fa;
    goto LAB_103acfa0;
  case 0x16:
    break;
  case 0x18:
    cVar1 = *(char *)((int)param_1 + 0x4d);
    goto joined_r0x103ad1aa;
  case 0x1c:
    cVar1 = *(char *)((int)param_1 + 0x4d);
    goto joined_r0x103ad1aa;
  case 0x1e:
    cVar1 = *(char *)((int)param_1 + 0x4d);
joined_r0x103ad1aa:
    if (cVar1 == '\0') goto LAB_103ad1fa;
    break;
  default:
  }
LAB_103ad1fa:
  iVar2 = menu_item_register(iVar3);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  iVar2 = menu_item_register(iVar3);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  return;
LAB_103acfa0:
  goto LAB_103ad1fa;
}
