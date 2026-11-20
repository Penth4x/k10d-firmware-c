/* @k10d process_settings_event @ 0x10433dce
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 120_sr_menu_driver (unit names are model-proposed)
 * purpose:
 *   Handles a settings-related event by refreshing the working copy and dispatching a
 *   virtual command.
 * summary:
 *   Checks a condition on the settings object (param_1+0xc) and refreshes the working copy
 *   if true. Allocates a temporary object, initializes it with a value from param_1+0x30,
 *   and invokes virtual slot 2 on param_2 with argument 0x1e. Based on the result, it may
 *   call check_setting_0xd2_enabled or invoke the virtual slot again with argument 0x22,
 *   checking the return value of extract_field_from_struct_1045fc62 (slot 2 of the temp
 *   object) for specific states (1 or 2). Returns 1 if the event was successfully
 *   processed/acknowledged, 0 otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10433e6a) overlaps instruction at (ram,0x10433e68)
    */

uint32_t process_settings_event(int param_1,int *param_2)

{
  bool bVar2;
  int iVar1;
  uint32_t uVar3;
  uintptr_t sp;
  cls_105a6cfc acStack_54 [19];
  
  bVar2 = check_object_field_via_helper(*(void **)(param_1 + 0xc));
  uVar3 = 0;
  if (bVar2) {
    settings_refresh_working_copy(*(void **)(param_1 + 0xc));
  }
  cls_105a6cfc_new(acStack_54);
  copy_0x45_byte_block(*(int *)(param_1 + 0x30),acStack_54);
  iVar1 = (((vtbl_entry*)(*param_2))[2].fn)((int)((vtbl_entry*)(*param_2))[2].adj + (int)param_2,0x1e);
  if (iVar1 != 0) {
    iVar1 = extract_field_from_struct_1045fc62(acStack_54,1);
    if ((iVar1 == 0) && (iVar1 = check_setting_0xd2_enabled(param_1), iVar1 != 0)) {
      uVar3 = 1;
    }
    else {
      iVar1 = (((vtbl_entry*)(*param_2))[2].fn)((int)((vtbl_entry*)(*param_2))[2].adj + (int)param_2,0x22);
      if (((iVar1 != 0) || (iVar1 = check_setting_0xd2_enabled(param_1), iVar1 != 0)) &&
         ((iVar1 = extract_field_from_struct_1045fc62(acStack_54,1), iVar1 == 1 ||
          (iVar1 = extract_field_from_struct_1045fc62(acStack_54,1), iVar1 == 2)))) {
        uVar3 = 1;
      }
    }
  }
  cls_105a6cfc_delete(acStack_54,2);
  return uVar3;
}
