/* @k10d check_and_execute_virtual_sequence @ 0x1048960c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 184_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual check on param_1, then either loops through 8 virtual calls on
 *   param_2 or calls a fallback function based on the results.
 * summary:
 *   The function first calls virtual slot 3 (offset 0x1c) on param_1. If the result is non-
 *   zero, it calls virtual slot 4 (offset 0x24) on param_2 with argument 0x1f. If that
 *   returns 0, it iterates 8 times calling virtual slot 5 (offset 0x2c) on param_2 with
 *   values from memory at 0x105b3828, returning param_1 if any call fails. If the slot 4
 *   call fails, it calls get_or_create_singleton_object_10489718. If the initial slot 3
 *   call fails, it calls get_or_create_sram_object_104899a6. The specific camera subsystem
 *   is not identifiable from the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b3850 * check_and_execute_virtual_sequence(cls_105b3850 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (((vtbl_entry*)(param_1->field_0x0))[3].fn)
                    ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[3].adj);
  if (iVar1 != 0) {
    iVar1 = (((vtbl_entry*)(*param_2))[4].fn)((int)((vtbl_entry*)(*param_2))[4].adj + (int)param_2,0x1f);
    if (iVar1 == 0) {
      iVar1 = 0;
      do {
        iVar2 = (((vtbl_entry*)(*param_2))[5].fn)
                          ((int)((vtbl_entry*)(*param_2))[5].adj + (int)param_2,
                           *(uint32_t *)(iVar1 + 0x105b3828/*ROM*/));
        if (iVar2 != 0) {
          return param_1;
        }
        iVar1 = iVar1 + 4;
      } while (iVar1 < 8);
      param_1 = (cls_105b3850 *)get_or_create_sram_object_104899a6();
    }
    else {
      param_1 = (cls_105b3850 *)get_or_create_singleton_object_10489718();
    }
  }
  return param_1;
}
