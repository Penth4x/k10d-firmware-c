/* @k10d process_state_flag_transition @ 0x103913dc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 039_sr_settings_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void process_state_flag_transition(cls_10562400 *param_1,uint32_t param_2)

{
  int iVar1;
  uint uVar2;
  uint32_t uVar3;
  int iVar4;
  uintptr_t sp;
  uint32_t auStack_20 [6];
  
  if ((char)param_1[0x46].field_0x8c != '\0') {
    *(uint8_t *)((int)&param_1[0x46].field_0x8c + 3) = 0;
    if (param_1->field_0x8 == _DAT_105bb618/*ROM*/) {
      *(uint8_t *)&param_1[0x46].field_0x8c = 1;
      if (cRam800044e8 == '\0') {
        invoke_virtual_slot_on_sixteen_objects_10394fa2();
        cRam800044e8 = '\x01';
      }
      iVar1 = initialize_object_with_virtual_call_103915de((int)(param_1),(uint32_t)(param_2));
      if (iVar1 == 0) {
        return;
      }
      if (*(char *)((int)&param_1[0x46].field_0x8c + 2) != '\0') {
        return;
      }
    }
    update_dual_object_state_flags((int)(param_1));
  }
  uVar2 = call_single_helper_104df442();
  if ((param_1[0x46].field_0x68 & uVar2) == 0) {
    if (((uint)param_1[0x46].field_0x74 & uVar2) != 0) {
      update_three_field_struct(&param_1[0x46].field_0x90,5,0,0);
      swap_three_words_with_callbacks_10391b84(auStack_20 + 3,(int)&param_1[0x46].field_0x90);
      iVar1 = 0xc;
      do {
        iVar4 = iVar1 + -4;
        *(uint32_t *)(&stack0xffffffdc + iVar1) = *(uint32_t *)((int)auStack_20 + iVar1 + 8);
        iVar1 = iVar4;
      } while (iVar4 != 0);
      update_object_list_entry((int)param_1,auStack_20);
    }
  }
  else {
    swap_three_words_with_callbacks_10391b84(auStack_20,(int)&param_1[0x46].field_0x90);
    iVar1 = 0xc;
    do {
      iVar4 = iVar1 + -4;
      *(uint32_t *)((int)auStack_20 + iVar1 + 8) = *(uint32_t *)(&stack0xffffffdc + iVar1);
      iVar1 = iVar4;
    } while (iVar4 != 0);
    uVar3 = update_object_list_entry((int)param_1,auStack_20 + 3);
    *(char *)&param_1[0x46].field_0x84 = (char)uVar3;
    *(uint8_t *)((int)&param_1[0x46].field_0x8c + 1) = 0;
  }
  return;
}
